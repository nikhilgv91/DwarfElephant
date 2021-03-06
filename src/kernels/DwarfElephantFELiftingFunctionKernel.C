/**
 * This Kernel is implements the concept of the lifting function to avoid
 * problems caused by non-homogenous DirichletBC.
 */

 ///---------------------------------INCLUDES-------------------------------
// MOOSE includes (DwarfElephant package)
#include "DwarfElephantFELiftingFunctionKernel.h"

///----------------------------INPUT PARAMETERS-----------------------------
template<>
InputParameters validParams<DwarfElephantFELiftingFunctionKernel>()
{
  InputParameters params = validParams<Diffusion>();
  params.addClassDescription("The class implements a lifting function.");
  params.addRequiredParam<FunctionName>("lifting_function", "Name of the lifting function two account for the inhomogeneous Dirichlet boundary conditions.");
  params.addRequiredParam<Real>("scale", "Defines the value of the scaling parameter.");

  return params;
}

///-------------------------------CONSTRUCTOR-------------------------------
DwarfElephantFELiftingFunctionKernel::DwarfElephantFELiftingFunctionKernel(const InputParameters & parameters) :
  Diffusion(parameters),
  _lifting_function(&getFunction("lifting_function")),
  _scale(getParam<Real>("scale"))
{
}

///----------------------------------PDEs-----------------------------------
// Definition of the necessary PDE in the weak formulation

Real
DwarfElephantFELiftingFunctionKernel::computeQpResidual()
{
  return  _scale*(_grad_test[_i][_qp]*(_lifting_function->gradient(_fe_problem.time(),_q_point[_qp])));
}

Real
DwarfElephantFELiftingFunctionKernel::computeQpJacobian()
{
   return 0.0;
}
