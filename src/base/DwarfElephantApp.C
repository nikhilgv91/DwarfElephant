/// MOOSE includes
#include "Moose.h"
#include "AppFactory.h"
#include "ActionFactory.h"
#include "ModulesApp.h"   // remove for use in OpenDA
#include "MooseSyntax.h"

/// MOOSE includes (DwarfElephant package)
#include "DwarfElephantApp.h"

// Base
#include "DwarfElephantRBProblem.h"

//BCs
#include "DwarfElephantRBDirichletBC.h"
#include "DwarfElephantRBFunctionDirichletBC.h"
#include "DwarfElephantRBPenaltyDirichletBC.h"
#include "DwarfElephantRBPresetBC.h"
#include "DwarfElephantRBFunctionPresetBC.h"
#include "DwarfElephantRBNeumannBC.h"
#include "DwarfElephantRBNeumannBCND.h"
#include "DwarfElephantRBFunctionNeumannBC.h"

//ICs
#include "DwarfElephantFileIC.h"
#include "DwarfElephantRBConstantIC.h"
#include "DwarfElephantRBFunctionIC.h"

// Kernels
#include "DwarfElephantFEThermalConduction.h"
#include "DwarfElephantFELiftingFunctionKernel.h"
#include "DwarfElephantRBLiftingFunctionKernel.h"
#include "DwarfElephantRBLiftingFunctionKernelWithParameterIndependentScale.h"
#include "DwarfElephantFEElectricalConduction.h"
#include "DwarfElephantFEConstantRadiogenicHeatProduction.h"
#include "DwarfElephantFEDarcy.h"
#include "DwarfElephantFEDarcyOpenDA.h"
#include "DwarfElephantRBDiffusion.h"
#include "DwarfElephantRBDiffusionND.h"
#include "DwarfElephantRBThermalConduction.h"
#include "DwarfElephantRBConstantRadiogenicHeatProduction.h"
#include "DwarfElephantZeroKernel.h"
#include "DwarfElephantRBTimeDerivative.h"
#include "DwarfElephantRBOneKernel.h"

#include "ExtractQpPointsKernel.h"

// DiracKernels
#include "DwarfElephantRBConstantPointSource.h"

// Materials
#include "DwarfElephantSandStone.h"
#include "DwarfElephantShale.h"
#include "DwarfElephantFault.h"
#include "ExtractQpPoints.h"

// UserObjects
#include "DwarfElephantInitializeRBSystemSteadyState.h"
#include "DwarfElephantInitializeRBSystemTransient.h"
#include "DwarfElephantOfflineOnlineStageSteadyState.h"
#include "DwarfElephantOfflineOnlineStageTransient.h"
#include "DwarfElephantERTPreCalculations.h"
#include "DwarfElephantRBNodalVariableValue.h"
#include "DwarfElephantRBElementalVariableValue.h"
#include "DwarfElephantRBPointValue.h"
#include "DwarfElephantReducedToFullState.h"

// Functions
#include "DwarfElephantInitialConditionFileReader.h"
#include "DwarfElephantBoundaryConditionFileReader.h"
#include "DwarfElephantLiftingFunction.h"

// Executioners
#include "DwarfElephantRBExecutioner.h"

// Outputs
#include "DwarfElephantDakotaOutput.h"
#include "DwarfElephantStateOutput.h"
#include "DwarfElephantRBOutput.h"

// VectorPostprocessors
#include "DwarfElephantElementalVariableValuesAlongLine.h"
#include "DwarfElephantAllElementalVariableValues.h"
#include "DwarfElephantNodalDifference.h"
#include "DwarfElephantReverseLiftingFunctionAndDimensionalize.h"

template<>
InputParameters validParams<DwarfElephantApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

DwarfElephantApp::DwarfElephantApp(InputParameters parameters) :
    MooseApp(parameters)
{
  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory); // remove for use in OpenDA
  DwarfElephantApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory); // remove for use in OpenDA
  DwarfElephantApp::associateSyntax(_syntax, _action_factory);
}

DwarfElephantApp::~DwarfElephantApp()
{
}

// External entry point for dynamic application loading
extern "C" void DwarfElephantApp__registerApps() { DwarfElephantApp::registerApps(); }
void
DwarfElephantApp::registerApps()
{
  registerApp(DwarfElephantApp);
}

// External entry point for dynamic object registration
extern "C" void DwarfElephantApp__registerObjects(Factory & factory) { DwarfElephantApp::registerObjects(factory); }
void
DwarfElephantApp::registerObjects(Factory & factory)
{
  // Base
  registerProblem(DwarfElephantRBProblem);

  // BCs
  registerBoundaryCondition(DwarfElephantRBDirichletBC);
  registerBoundaryCondition(DwarfElephantRBFunctionDirichletBC);
  registerBoundaryCondition(DwarfElephantRBPenaltyDirichletBC);
  registerBoundaryCondition(DwarfElephantRBPresetBC);
  registerBoundaryCondition(DwarfElephantRBFunctionPresetBC);
  registerBoundaryCondition(DwarfElephantRBNeumannBC);
  registerBoundaryCondition(DwarfElephantRBNeumannBCND);
  registerBoundaryCondition(DwarfElephantRBFunctionNeumannBC);

  //ICs
  registerInitialCondition(DwarfElephantFileIC);
  registerInitialCondition(DwarfElephantRBConstantIC);
  registerInitialCondition(DwarfElephantRBFunctionIC);

  // Kernels
  registerKernel(DwarfElephantFEThermalConduction);
  registerKernel(DwarfElephantFELiftingFunctionKernel);
  registerKernel(DwarfElephantRBLiftingFunctionKernel);
  registerKernel(DwarfElephantRBLiftingFunctionKernelWithParameterIndependentScale);
  registerKernel(DwarfElephantFEElectricalConduction);
  registerKernel(DwarfElephantFEConstantRadiogenicHeatProduction);
  registerKernel(DwarfElephantFEDarcy);
  registerKernel(DwarfElephantFEDarcyOpenDA);
  registerKernel(DwarfElephantRBDiffusion);
  registerKernel(DwarfElephantRBDiffusionND);
  registerKernel(DwarfElephantRBThermalConduction);
  registerKernel(DwarfElephantRBConstantRadiogenicHeatProduction);
  registerKernel(DwarfElephantZeroKernel);
  registerKernel(DwarfElephantRBTimeDerivative);
  registerKernel(DwarfElephantRBOneKernel);
  registerKernel(ExtractQpPointsKernel);

  //DiracKernels
  registerDiracKernel(DwarfElephantRBConstantPointSource);

  // Materials
  registerMaterial(DwarfElephantSandStone);
  registerMaterial(DwarfElephantShale);
  registerMaterial(DwarfElephantFault);
  registerMaterial(ExtractQpPoints);

  // UserObjects
  registerUserObject(DwarfElephantInitializeRBSystemSteadyState);
  registerUserObject(DwarfElephantInitializeRBSystemTransient);
  registerUserObject(DwarfElephantOfflineOnlineStageSteadyState);
  registerUserObject(DwarfElephantOfflineOnlineStageTransient);
  registerUserObject(DwarfElephantERTPreCalculations);
  registerUserObject(DwarfElephantRBNodalVariableValue);
  registerUserObject(DwarfElephantRBElementalVariableValue);
  registerUserObject(DwarfElephantRBPointValue);
  registerUserObject(DwarfElephantReducedToFullState);

  // Functions
  registerFunction(DwarfElephantInitialConditionFileReader);
  registerFunction(DwarfElephantBoundaryConditionFileReader);
  registerFunction(DwarfElephantLiftingFunction);

  // Executioners
  registerExecutioner(DwarfElephantRBExecutioner);

  // Outputs
  registerOutput(DwarfElephantDakotaOutput);
  registerOutput(DwarfElephantStateOutput);
  registerOutput(DwarfElephantRBOutput);

  // VectorPostprocessors
  registerVectorPostprocessor(DwarfElephantElementalVariableValuesAlongLine);
  registerVectorPostprocessor(DwarfElephantAllElementalVariableValues);
  registerVectorPostprocessor(DwarfElephantNodalDifference);
  registerVectorPostprocessor(DwarfElephantReverseLiftingFunctionAndDimensionalize);

}

// External entry point for dynamic syntax association
extern "C" void DwarfElephantApp__associateSyntax(Syntax & syntax, ActionFactory & action_factory) { DwarfElephantApp::associateSyntax(syntax, action_factory); }
void
DwarfElephantApp::associateSyntax(Syntax & /*syntax*/, ActionFactory & /*action_factory*/)
{
}
