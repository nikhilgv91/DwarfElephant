/**
 * This BC is required to use the RB method for the Penalty Dirichlet BC.
 * Since all necessary operations are defined in the
 * DwarfElephantRBIntegratedBC class this class is the same as the
 * Penalty Dirichlet BC provided by MOOSE except that it
 * inherits from the DwarfElephantRBIntegratedBC instead of the IntegratedBC
 * class.
 */


///-------------------------------------------------------------------------
#ifndef DWARFELEPHANTRBPENALTYDIRICHLETBC_H
#define DWARFELEPHANTRBPENALTYDIRICHLETBC_H

///---------------------------------INCLUDES--------------------------------
// MOOSE includes (DwarfElephant package)
#include "DwarfElephantRBIntegratedBC.h"

///-------------------------------------------------------------------------
//Forward Declarations
class DwarfElephantRBPenaltyDirichletBC;
class Function;

///----------------------------INPUT PARAMETERS-----------------------------
template <>
InputParameters validParams<DwarfElephantRBPenaltyDirichletBC>();

///-------------------------------------------------------------------------
class DwarfElephantRBPenaltyDirichletBC : public DwarfElephantRBIntegratedBC
{
//----------------------------------PUBLIC----------------------------------
public:
  DwarfElephantRBPenaltyDirichletBC(const InputParameters & parameters);

//--------------------------------PROTECTED---------------------------------
protected:
  /*Methods*/
  virtual Real computeQpResidual() override;
  virtual Real computeQpJacobian() override;

//---------------------------------PRIVATE----------------------------------
private:
  /*Attributes*/
  Real _p;
  const Real & _v;
};

#endif // DWARFELEPHANTRBPENEALTYDIRICHLETBC_H
