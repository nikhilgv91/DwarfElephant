[Mesh]
 #file = RFAGeom2D_L1e-1_r3e-2_l6e-2.msh
 type = GeneratedMesh
 nx = 100
 ny = 100
 xmin = -0.05
 xmax = 0.05
 ymin = -0.05
 ymax = 0.05
 dim = 2
[]

[Variables]
  [./temperature]
    order = FIRST
    TYPE = LAGRANGE
  [../]
[]

[AuxVariables]
  [./HeatSource_EIM]
    order = FIRST
    type = LAGRANGE
  [../]
[]

[GlobalParams]
  initial_rb_userobject = initializeRBSystem
  variable = temperature
[]

[Kernels]
  [./DiffusionXX_maxZ1]
    type = DwarfElephantRBDiffusion
    ID_Aq = 0
    #block = 1
    matrix_seperation_according_to_subdomains = false
  [../]

  #[./PennesPerfusion_BoundingBox]
  #  type = DwarfElephantRBPennesPerfusion
  #  ID_Aq = 1
  #  block = 9
  #  matrix_seperation_according_to_subdomains = false
  #[../]

  #[./HeatSource]
  #  type = DwarfElephantRBRFHeatsourceKernel
  #  ID_Fq = 0
  #  heat_source_function = gaussian
  #[../]

  [./EIMF]
   type = DwarfElephantEIMFKernel
  [../]

  #[./RB_inner_product_matrix]
  #  type = RBInnerProductMatrix
  #[../]
[]

[Functions]
  [./gaussian]
    type = ParsedFunction
    value = 'exp(-(x-0.5)^2 -(y-0.5)^2)'
  [../]
[]

[BCs]
[./Convection_BC]
  type = DwarfElephantRBPenaltyDirichletBC
  boundary = 'left right'# top bottom'#'11 12 13 14'
  ID_Aq = 1#2
  value = 0
  penalty = 6.0
  variable = temperature
  matrix_seperation_according_to_subdomains = false
[../]
[]

[Problem]
  type = DwarfElephantRBProblem
[]

[Executioner]
  type = DwarfElephantRBExecutioner
  solve_type = 'Newton'
  l_tol = 1.0e-8
  nl_rel_tol = 1.0e-8
  #offline_stage = false # comment this line out in case you are testing hp EIM
  petsc_options_iname = '-pc_type -pc_hypre_type -ksp_gmres_restart'
  petsc_options_value = 'hypre    boomeramg      101'
[]

[UserObjects]
[./initializeRBSystem]
  type = DwarfElephantInitializeRBSystemSteadyState
  use_EIM = false
  use_hp_EIM = true
  #hp_EIM_testing = true #only use during the online phase
  #offline_stage = false
  N_max_EIM = 40
  n_training_samples_EIM = 200
  rel_training_tolerance_EIM = 1e-4
  #abs_training_tolerance_EIM = 1e-8
  parameter_names_EIM = 'mu_0 mu_1 mu_2' #Please name them mu_0 , mu_1 , ..., mu_n for the reusability
  parameter_min_values_EIM = '-0.05 -0.05 0'# -0.05 0.'
  parameter_max_values_EIM = '0.05 0.05 3.14159265359'# 0.05 3.14'
  deterministic_training_EIM = false
  best_fit_type_EIM = projection
  execute_on = 'initial'
  N_max_RB = 30
  n_training_samples_RB = 200
  rel_training_tolerance_RB = 1e-3
  #abs_training_tolerance_RB = 1e-6
  parameter_names_RB = 'mu_0 mu_1 mu_2' #Please name them mu_0 , mu_1 , ..., mu_n for the reusability
  parameter_min_values_RB = '-0.05 -0.05 0'# 3.14e-3'# -0.05 0.'
  parameter_max_values_RB = '0.05 0.05 3.14159265359'# 3.14e-3'# 0.05 3.14'
  deterministic_training_RB = false
  normalize_rb_bound_in_greedy = true
[../]

[./jEIMInnerProductMatrixComputation]
  type = DwarfElephantComputeEIMInnerProductMatrixSteadyState
  execute_on = "EIM"
  initialize_rb_userobject = initializeRBSystem
[../]

[./performRBSystem ]
  type = DwarfElephantOfflineOnlineStageSteadyState
  #online_stage = true
  online_mu = '-0.02 0.01'# 2.0'# -0.021 0.1'
  online_N = 20
  #offline_stage = false
  execute_on = 'timestep_end'
[../]
[]

[Outputs]
exodus = true
print_perf_log = true
  [./console]
    type = Console
    outlier_variable_norms = false
  [../]
[]
