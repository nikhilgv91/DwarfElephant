/**
 * In this class subclasses of the RBEvaluation and
 * RBConstruction class are introduced.
 *
 * DwarfElephantRBEvaluation: requires only the definition of the lower
 * coercivity constant. The value is here specified for a three layer
 * problem.
 *
 * DwarfElephantRBConstruction: In order to construct the RB System with the
 * DwarfElephantRBEvaluation subclass the method build_rb_evaluation needs to be
 * overriden.
 *
 * NOTE: ENSURE THAT THE CLASS IS USING THE CORRECT RBSTRUCTURES.
 */

///-------------------------------------------------------------------------
#ifndef DWARFELEPHANTRBCLASSESTRANSIENT_H
#define DWARFELEPHANTRBCLASSESTRANSIENT_H

///---------------------------------INCLUDES--------------------------------
//#if defined(LIBMESH_HAVE_SLEPC) && defined(LIBMESH_HAVE_GLPK)

// libMesh includes
#include "libmesh/sparse_matrix.h"
#include "libmesh/petsc_matrix.h"

// libMesh includes (RB package)
#include "libmesh/transient_rb_evaluation.h"
#include "libmesh/transient_rb_construction.h"

///-------------------------------------------------------------------------
#include "FEProblemBase.h"
// MOOSE includes (DwarfElephant package)
#include "DwarfElephantInitializeRBSystemTransient.h"
#include "DwarfElephantOfflineOnlineStageTransient.h"

#include "DwarfElephantRBStructuresT1F1O1M1Transient.h"
#include "DwarfElephantRBStructuresT2F1O1M1Transient.h"
#include "DwarfElephantRBStructuresT2F2O1M2Transient.h"
#include "DwarfElephantRBStructuresT2F3O1M2Transient.h"
#include "DwarfElephantRBStructuresT2F3O3M2Transient.h"
#include "DwarfElephantRBStructuresT3F1O1M1Transient.h"
#include "DwarfElephantRBStructuresT3F1O3M1Transient.h"
#include "DwarfElephantRBStructuresT3F4O1M2Transient.h"
#include "DwarfElephantRBStructuresT3F4O3M2Transient.h"
#include "DwarfElephantRBStructuresT3F3O3M2IC1Transient.h"
#include "DwarfElephantRBStructuresT4F1O1M1Transient.h"
#include "DwarfElephantRBStructuresT4F1O1M1IC1Transient.h"
#include "DwarfElephantRBStructuresT5F1O1M1Transient.h"
#include "DwarfElephantRBStructuresT5F4O1M2Transient.h"
#include "DwarfElephantRBStructuresT6F1O1M1IC3Transient.h"

// Forward Declarations
namespace libMesh
{
  template <typename T> class SparseMatrix;
  template <typename T> class PetscMatrix;

  class EquationSystems;
  class TransientRBConstruction;
  class TransientRBEvaluation;
}

///-----------------------DWARFELEPHANTRBCONSTRUCTION-----------------------
class DwarfElephantRBConstructionTransient : public TransientRBConstruction
{

//---------------------------------PUBLIC-----------------------------------
public:

  // Constructor
  DwarfElephantRBConstructionTransient (EquationSystems & es,
                        const std::string & name_in,
                        const unsigned int number_in);

  // Destructor
  virtual ~DwarfElephantRBConstructionTransient () { }

  // Type of the system
  typedef DwarfElephantRBConstructionTransient _sys_type;

  // Type of the parent
  typedef TransientRBConstruction Parent;

  virtual void clear() override;

  virtual void allocate_data_structures() override;

  // Initialize data structure
  virtual void init_data() override;

  virtual void print_info() override;

  virtual void initialize_truth() override;

  virtual Real get_RB_error_bound() override;

  NumericVector<Number> * get_IC_q(unsigned int q);

  NumericVector<Number> * get_non_dirichlet_IC_q(unsigned int q);

  NumericVector<Number> * get_non_dirichlet_IC_q_if_avail(unsigned int q);

  unsigned int get_parameter_dependent_IC() const {return parameter_dependent_IC;}

  virtual void set_parameter_dependent_IC(bool parameter_dependent_IC_in);

  void update_RB_initial_condition_all_N();

  void update_RB_parameterized_initial_condition_all_N();

  virtual void update_system() override;

  virtual Real train_reduced_basis(const bool resize_rb_eval_data=true) override;

  virtual Real train_reduced_basis_steady(const bool resize_rb_eval_data=true);

  void enrich_RB_space_for_initial_conditions();

  unsigned int u_var;

  bool parameter_dependent_IC;

private:
  /**
   * Vector storing the Q_ic vectors in the affine decomposition
   * of the initial conditions.
   */
  std::vector<std::unique_ptr<NumericVector<Number>>> IC_q_vector;
  std::vector<std::unique_ptr<NumericVector<Number>>> non_dirichlet_IC_q_vector;
};

///------------------------DWARFELEPHANTRBEVALUATION------------------------
class DwarfElephantRBEvaluationTransient : public TransientRBEvaluation
{

//---------------------------------PUBLIC-----------------------------------
public:
  DwarfElephantRBEvaluationTransient(const libMesh::Parallel::Communicator & comm, FEProblemBase & fe_problem);

  typedef TransientRBEvaluation Parent;

  virtual Real get_stability_lower_bound() override;

  virtual Real rb_solve(unsigned int N) override;

  FEProblemBase & get_fe_problem() {return fe_problem;}

  unsigned int get_parameter_dependent_IC() const {return parameter_dependent_IC;}

  virtual void set_parameter_dependent_IC(bool parameter_dependent_IC_in);

  virtual void resize_data_structures(const unsigned int Nmax,
                                      bool resize_error_bound_data=true) override;

  virtual void legacy_write_offline_data_to_files(const std::string & directory_name,
                                                  const bool write_binary_data) override;

  virtual void legacy_read_offline_data_from_files(const std::string & directory_name = "offline_data",
                                                   bool read_error_bound_data=true,
                                                   const bool read_binary_data=true) override;

  FEProblemBase & fe_problem;

  bool parameter_dependent_IC;

  DwarfElephantRBT2F2O1M2TransientExpansion _rb_theta_expansion;

  std::vector<DenseVector<Number>> RB_IC_q_vector;
};
///-------------------------------------------------------------------------
#endif // DWARFELEPHANTRBCLASSESTRANSIENT_H
