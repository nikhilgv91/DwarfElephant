/**
 * This Kernel implements the Diffusion problem by using the RB method.
 * It is important to note that every PDE that will be used within the RB
 * method has to inherit from RBKernel and not from Kernel.
 * Furthermore, one should recall that the stiffness matrix and the load
 * vector are constructed out of the parameter independent part of the
 * PDE. Therefore, the functions computeQpResidual() and computeQpJacobian()
 * should only contain this parameter independent part. Consequently, the
 * RBDiffusion Kernel is used for a Conduction problem.
 */

///---------------------------------INCLUDES--------------------------------
//MOOSE includes (DwarfElephant package)
#include "DwarfElephantRBDiffusion.h"

///----------------------------INPUT PARAMETERS-----------------------------
template<>
InputParameters validParams<DwarfElephantRBDiffusion>()
{
  InputParameters params = validParams<DwarfElephantRBKernel>();
  params.addClassDescription("Implements a Diffusion problem using \
                             the RBKernel.");
  return params;
}

///-------------------------------CONSTRUCTOR-------------------------------
DwarfElephantRBDiffusion::DwarfElephantRBDiffusion(const InputParameters & parameters) :
  DwarfElephantRBKernel(parameters)
{
}

///----------------------------------PDEs-----------------------------------
Real
DwarfElephantRBDiffusion::computeQpResidual()
{
  return -(_grad_u[_qp] * _grad_test[_i][_qp]);
}

Real
DwarfElephantRBDiffusion::computeQpJacobian()
{
  return _grad_phi[_j][_qp] * _grad_test[_i][_qp];
}

Real
DwarfElephantRBDiffusion::computeQpOutput()
{
  return 1;
}
