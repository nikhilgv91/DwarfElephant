 ///-------------------------------------------------------------------------
// MOOSE includes (DwarfElephant package)
#include "DwarfElephantRBProblem.h"

#include "Assembly.h"
#include "AuxiliarySystem.h"
#include "MooseEigenSystem.h"
#include "NonlinearSystem.h"

template<>
InputParameters validParams<DwarfElephantRBProblem>()
{
  InputParameters params = validParams<FEProblemBase>();

  return params;
}

DwarfElephantRBProblem::DwarfElephantRBProblem(const InputParameters & params):
  FEProblemBase(params),
  _nl_sys(std::make_shared<DwarfElephantSystem>(*this, "rb0"))

{
    _nl = _nl_sys;
    _aux = std::make_shared<AuxiliarySystem>(*this, "aux0");

    //_assembly = _rb_assembly;

    newRBAssemblyArray(*_nl_sys);

    newAssemblyArray(*_nl_sys);
//    initNullSpaceVectors(parameters, *_nl_sys);

    _eq.parameters.set<DwarfElephantRBProblem *>("_fe_problem") = this;
}

DwarfElephantRBProblem::~DwarfElephantRBProblem()
{
  FEProblemBase::deleteAssemblyArray();
}

void
DwarfElephantRBProblem::setInputParametersFEProblem(InputParameters & parameters)
{
  // set _fe_problem
  FEProblemBase::setInputParametersFEProblem(parameters);
  // set _fe_problem
  // parameters.set<DwarfElephantRBProblem *>("_fe_problem") = this;
}

void
DwarfElephantRBProblem::solve()
{
  Moose::perf_log.push("constructRB()", "Execution");

#ifdef LIBMESH_HAVE_PETSC
  Moose::PetscSupport::petscSetOptions(*this); // Make sure the PETSc options are setup for this app
#endif

  if (_solve)
    _nl_sys->solve();

  if (_solve)
    _nl_sys->update();

  Moose::perf_log.pop("constructRB()", "Execution");
}

void
DwarfElephantRBProblem::newRBAssemblyArray(NonlinearSystemBase & nl)
{
  unsigned int subdomains = mesh().meshSubdomains().size();
  unsigned int boundaries = mesh().meshBoundaryIds().size();
  unsigned int size = 0;

  if (subdomains > boundaries)
    size = subdomains;
  else
    size = boundaries;

  _rb_assembly.resize(size);

  for (unsigned int i = 0; i < size; i++)
    _rb_assembly[i] = new DwarfElephantRBAssembly(nl, i);
}

// MooseVariable &
// DwarfElephantRBProblem::getVariable(THREAD_ID tid, const std::string & var_name)
// {
//   if (_nl->hasVariable(var_name))
//     return _nl->getVariable(tid, var_name);
//   else if (!_aux->hasVariable(var_name))
//     mooseError("Unknown variable " + var_name);
//
//   return _aux->getVariable(tid, var_name);
// }
