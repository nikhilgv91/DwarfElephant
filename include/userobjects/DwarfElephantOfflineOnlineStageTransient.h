/**
 * This UserObject implements the Offline and Online stage of the RB method
 * for the transient case.
 */

///-------------------------------------------------------------------------
#ifndef DWARFELEPHANTOFFLINEONLINESTAGETRANSIENT_H
#define DWARFELEPHANTOFFLINEONLINESTAGETRANSIENT_H

///---------------------------------INCLUDES--------------------------------
//libMesh includes
#include "libmesh/equation_systems.h"
#include "libmesh/sparse_matrix.h"

// MOOSE includes
#include "GeneralUserObject.h"
#include "DisplacedProblem.h"
#include "MooseMesh.h"
#include "NonlinearSystemBase.h"
#include "NodalBC.h"
#include "Assembly.h"

// MOOSE includes (DwarfElephant package)
#include "DwarfElephantRBClassesTransient.h"
#include "DwarfElephantInitializeRBSystemTransient.h"
#include "DwarfElephantRBProblem.h"


///-------------------------------------------------------------------------
// Forward Declarations
namespace libMesh
{
  class EquationSystems;
  template <typename T> class SparseMatrix;
}

class MooseMesh;
class NonlinearSystemBase;
class Assembly;
class DwarfElephantOfflineOnlineStageTransient;
class DwarfElephantInitializeRBSystemTransient;
class DwarfElephantRBProblem;

///----------------------------INPUT PARAMETERS-----------------------------
template<>
InputParameters validParams<DwarfElephantOfflineOnlineStageTransient>();

///-------------------------------------------------------------------------
class DwarfElephantOfflineOnlineStageTransient :
  public GeneralUserObject
{

//----------------------------------PUBLIC----------------------------------
  public:
    DwarfElephantOfflineOnlineStageTransient(const InputParameters & params);

    /* Methods */
    void setAffineMatrices();
    void offlineStage();
    void setOnlineParameters();
    void transferAffineVectors();
    std::string getFileName();
    void endStep(Real input_time);

    virtual void initialize() override;
    virtual void execute() override;
    virtual void finalize() override;

//--------------------------------PROTECTED---------------------------------
  protected:

    /* Attributes */
    bool _use_displaced;
    bool _store_basis_functions;
    bool _skip_matrix_assembly_in_rb_system;
    bool _skip_vector_assembly_in_rb_system;
    bool _offline_stage;
    bool _online_stage;
    bool _offline_error_bound;
    bool _output_file;
    bool _output_console;
    bool _output_csv;
    bool _norm_online_values;

    unsigned int _norm_id;

    std::string _system_name;
//    std::string _exodus_file_name;

    EquationSystems & _es;
    TransientNonlinearImplicitSystem & _sys;
    const DwarfElephantInitializeRBSystemTransient & _initialize_rb_system;

    MooseMesh * _mesh_ptr;

    const std::set<SubdomainID> & _subdomain_ids;
    std::vector<std::vector<Number>> _RB_outputs_all_timesteps;

    Real _mu_bar;
    unsigned int _online_N;
    std::vector<Real> _online_mu_parameters;

    RBParameters _rb_online_mu;

    DwarfElephantRBProblem * _rb_problem;

    friend class DwarfElephantRBEvaluationTransient;
    friend class DwarfElephantDakotaOutput;
};
///-------------------------------------------------------------------------
#endif // DWARFELEPHANTOFFLINEONLINESTAGETRANSIENT_H
