///-------------------------------------------------------------------------
#ifndef DWARFELEPHANTGEOM3DRBTHETA_RFA_H
#define DWARFELEPHANTGEOM3DRBTHETA_RFA_H

///---------------------------------INCLUDES--------------------------------
// libMesh includes (RB package)
#include "libmesh/rb_theta.h"
#include "libmesh/rb_assembly_expansion.h"

// Forward Declarations
namespace libMesh
{
  class RBParameters;
  class RBTheta;
}
struct Geom3DRB_ATheta_DiffusionXX_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((d*d)*(l*l)*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0)+1.0)*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -((d*d)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -((d*d)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((d*d)*(l*l)*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0)+1.0)*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*(L-h))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((d*d)*(l*l)*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0)+1.0)*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -((d*d)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -((d*d)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((d*d)*(l*l)*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0)+1.0)*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*(L-h))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(l*l)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0))*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return ((L*L)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -(L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return ((L*L)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(l*l)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0))*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -(L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -(L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -(L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*(L-h))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(l*l)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0))*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return ((L*L)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return ((L*L)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(l*l)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0))*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*(L-h))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*(r*r+_mu.get_value("mu_0")*_mu.get_value("mu_0"))*(L*l-h*_mu.get_value("mu_1"))*(1.0/2.0))/(l*r*_mu.get_value("mu_0")*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*(r+_mu.get_value("mu_0"))*(r-_mu.get_value("mu_0"))*(L*l-h*_mu.get_value("mu_1"))*(-1.0/2.0))/(l*r*_mu.get_value("mu_0")*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*(r+_mu.get_value("mu_0"))*(r-_mu.get_value("mu_0"))*(L*l-h*_mu.get_value("mu_1"))*(-1.0/2.0))/(l*r*_mu.get_value("mu_0")*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*(r*r+_mu.get_value("mu_0")*_mu.get_value("mu_0"))*(L*l-h*_mu.get_value("mu_1"))*(1.0/2.0))/(l*r*_mu.get_value("mu_0")*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*_mu.get_value("mu_0")*(L-h))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*r*(L-d))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*((d*d)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((h*h)*1.0/(l*l)*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*r*(L-d))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*((d*d)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((h*h)*1.0/(l*l)*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*_mu.get_value("mu_0")*(L-d))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((l*l)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))+(L*L)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*_mu.get_value("mu_0")*(L-d))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((l*l)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))+(L*L)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r))/(l*(d+h)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(L*r-d*_mu.get_value("mu_0"))*((d*d)*(l*l)*(r*r)*2.0+(d*d)*(l*l)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(h*h)*(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)-(d*d)*(l*l)*r*_mu.get_value("mu_0")*2.0+d*h*l*_mu.get_value("mu_1")*(r*r)*2.0))/(l*(d+h)*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(d*(l*l)*(r-_mu.get_value("mu_0"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*_mu.get_value("mu_0")+h*r)+h*(r*r)*(l-_mu.get_value("mu_1"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*l+h*_mu.get_value("mu_1")))*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r)*(L*r-d*_mu.get_value("mu_0")))/(l*(d+h)*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(d*(l*l)*(r-_mu.get_value("mu_0"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*_mu.get_value("mu_0")+h*r)+h*(r*r)*(l-_mu.get_value("mu_1"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*l+h*_mu.get_value("mu_1")))*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r)*(L*r-d*_mu.get_value("mu_0")))/(l*(d+h)*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(L*r-d*_mu.get_value("mu_0"))*((d*d)*(l*l)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(h*h)*(l*l)*(r*r)*2.0+(h*h)*(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)-(h*h)*l*_mu.get_value("mu_1")*(r*r)*2.0+d*h*(l*l)*r*_mu.get_value("mu_0")*2.0))/(l*(d+h)*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*((d*d)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*r*(L-d))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((h*h)*1.0/(l*l)*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*((d*d)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*r*(L-d))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((h*h)*1.0/(l*l)*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return ((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*_mu.get_value("mu_0")*(L-d))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return ((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((l*l)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))+(L*L)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return ((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*_mu.get_value("mu_0")*(L-d))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return ((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((l*l)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))+(L*L)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(L*r-d*_mu.get_value("mu_0"))*((d*d)*(l*l)*(r*r)*2.0+(d*d)*(l*l)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(h*h)*(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)-(d*d)*(l*l)*r*_mu.get_value("mu_0")*2.0+d*h*l*_mu.get_value("mu_1")*(r*r)*2.0))/(l*(d+h)*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(k*1.0/(r*r)*(d*(l*l)*(r-_mu.get_value("mu_0"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*_mu.get_value("mu_0")+h*r)+h*(r*r)*(l-_mu.get_value("mu_1"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*l+h*_mu.get_value("mu_1")))*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r)*(L*r-d*_mu.get_value("mu_0")))/(l*(d+h)*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r))/(l*(d+h)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(k*1.0/(r*r)*(d*(l*l)*(r-_mu.get_value("mu_0"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*_mu.get_value("mu_0")+h*r)+h*(r*r)*(l-_mu.get_value("mu_1"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*l+h*_mu.get_value("mu_1")))*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r)*(L*r-d*_mu.get_value("mu_0")))/(l*(d+h)*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(L*r-d*_mu.get_value("mu_0"))*((d*d)*(l*l)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(h*h)*(l*l)*(r*r)*2.0+(h*h)*(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)-(h*h)*l*_mu.get_value("mu_1")*(r*r)*2.0+d*h*(l*l)*r*_mu.get_value("mu_0")*2.0))/(l*(d+h)*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*r*(L-d))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*((d*d)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxX1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((h*h)*1.0/(l*l)*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*r*(L-d))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*((d*d)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxX2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((h*h)*1.0/(l*l)*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*_mu.get_value("mu_0")*(L-d))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return ((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return ((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxX3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((l*l)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))+(L*L)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*_mu.get_value("mu_0")*(L-d))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return ((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return ((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxX4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((l*l)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))+(L*L)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r))/(l*(d+h)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYX_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYY_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(L*r-d*_mu.get_value("mu_0"))*((d*d)*(l*l)*(r*r)*2.0+(d*d)*(l*l)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(h*h)*(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)-(d*d)*(l*l)*r*_mu.get_value("mu_0")*2.0+d*h*l*_mu.get_value("mu_1")*(r*r)*2.0))/(l*(d+h)*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(k*1.0/(r*r)*(d*(l*l)*(r-_mu.get_value("mu_0"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*_mu.get_value("mu_0")+h*r)+h*(r*r)*(l-_mu.get_value("mu_1"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*l+h*_mu.get_value("mu_1")))*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r)*(L*r-d*_mu.get_value("mu_0")))/(l*(d+h)*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZY_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(k*1.0/(r*r)*(d*(l*l)*(r-_mu.get_value("mu_0"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*_mu.get_value("mu_0")+h*r)+h*(r*r)*(l-_mu.get_value("mu_1"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*l+h*_mu.get_value("mu_1")))*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r)*(L*r-d*_mu.get_value("mu_0")))/(l*(d+h)*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_maxX5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(L*r-d*_mu.get_value("mu_0"))*((d*d)*(l*l)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(h*h)*(l*l)*(r*r)*2.0+(h*h)*(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)-(h*h)*l*_mu.get_value("mu_1")*(r*r)*2.0+d*h*(l*l)*r*_mu.get_value("mu_0")*2.0))/(l*(d+h)*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*((d*d)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*r*(L-d))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minY1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((h*h)*1.0/(l*l)*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*((d*d)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(d*k*(r-_mu.get_value("mu_0")))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*r*(L-d))/(L*r-d*_mu.get_value("mu_0"));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*h*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(h*k*r*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minY2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((h*h)*1.0/(l*l)*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0)+1.0)*(L*r-d*_mu.get_value("mu_0")))/(r*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*_mu.get_value("mu_0")*(L-d))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minY3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((l*l)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))+(L*L)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -(L*k*_mu.get_value("mu_1")*(r-_mu.get_value("mu_0")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*_mu.get_value("mu_0")*(L-d))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return -((L*L)*k*(l-_mu.get_value("mu_1"))*(r-_mu.get_value("mu_0")))/(l*(L-d)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (L*k*_mu.get_value("mu_0")*(l-_mu.get_value("mu_1")))/(l*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minY4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    return (k*_mu.get_value("mu_1")*1.0/(r*r)*_mu.get_value("mu_0")*((l*l)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))+(L*L)*1.0/(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)*pow(l-_mu.get_value("mu_1"),2.0)*1.0/pow(L*r-d*_mu.get_value("mu_0"),2.0))*(L*r-d*_mu.get_value("mu_0")))/(l*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(L*r-d*_mu.get_value("mu_0"))*((d*d)*(l*l)*(r*r)*2.0+(d*d)*(l*l)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(h*h)*(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)-(d*d)*(l*l)*r*_mu.get_value("mu_0")*2.0+d*h*l*_mu.get_value("mu_1")*(r*r)*2.0))/(l*(d+h)*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(d*(l*l)*(r-_mu.get_value("mu_0"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*_mu.get_value("mu_0")+h*r)+h*(r*r)*(l-_mu.get_value("mu_1"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*l+h*_mu.get_value("mu_1")))*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r)*(L*r-d*_mu.get_value("mu_0")))/(l*(d+h)*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r))/(l*(d+h)*(L*r-d*_mu.get_value("mu_0")));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(d*(l*l)*(r-_mu.get_value("mu_0"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*_mu.get_value("mu_0")+h*r)+h*(r*r)*(l-_mu.get_value("mu_1"))*1.0/pow(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r,2.0)*(d*l+h*_mu.get_value("mu_1")))*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r)*(L*r-d*_mu.get_value("mu_0")))/(l*(d+h)*(L-d));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minY5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(L*r-d*_mu.get_value("mu_0"))*((d*d)*(l*l)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(h*h)*(l*l)*(r*r)*2.0+(h*h)*(_mu.get_value("mu_1")*_mu.get_value("mu_1"))*(r*r)-(h*h)*l*_mu.get_value("mu_1")*(r*r)*2.0+d*h*(l*l)*r*_mu.get_value("mu_0")*2.0))/(l*(d+h)*(L-d)*(d*l*_mu.get_value("mu_0")+h*_mu.get_value("mu_1")*r));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((d*d)*(l*l)*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0)+1.0)*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return ((d*d)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return ((d*d)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((d*d)*(l*l)*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0)+1.0)*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return -(d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minZ1 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*(L-h))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((d*d)*(l*l)*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0)+1.0)*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return ((d*d)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return ((d*d)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (k*((d*d)*(l*l)*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0)+1.0)*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double d = 3*r;
    double h = 1.5*l;
    return (d*k*l*(r-_mu.get_value("mu_0")))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minZ2 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*(L-h))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(l*l)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0))*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -((L*L)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -(L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -((L*L)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(l*l)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0))*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -(L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minZ3 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*(L-h))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(l*l)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0))*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -((L*L)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -((L*L)*k*l*1.0/(r*r)*pow(r-_mu.get_value("mu_0"),2.0))/((L-h)*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*((r*r)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))+(L*L)*(l*l)*1.0/(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*pow(r-_mu.get_value("mu_0"),2.0)*1.0/pow(L*l-h*_mu.get_value("mu_1"),2.0))*(L*l-h*_mu.get_value("mu_1")))/(l*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -(L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return -(L*k*l*1.0/(r*r)*_mu.get_value("mu_0")*(r-_mu.get_value("mu_0")))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minZ4 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0"))*(L-h))/(L*l-h*_mu.get_value("mu_1"));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*(r*r+_mu.get_value("mu_0")*_mu.get_value("mu_0"))*(L*l-h*_mu.get_value("mu_1"))*(1.0/2.0))/(l*r*_mu.get_value("mu_0")*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXY_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*(r+_mu.get_value("mu_0"))*(r-_mu.get_value("mu_0"))*(L*l-h*_mu.get_value("mu_1"))*(1.0/2.0))/(l*r*_mu.get_value("mu_0")*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYX_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*(r+_mu.get_value("mu_0"))*(r-_mu.get_value("mu_0"))*(L*l-h*_mu.get_value("mu_1"))*(1.0/2.0))/(l*r*_mu.get_value("mu_0")*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYY_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*(r*r+_mu.get_value("mu_0")*_mu.get_value("mu_0"))*(L*l-h*_mu.get_value("mu_1"))*(1.0/2.0))/(l*r*_mu.get_value("mu_0")*(L-h));
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZX_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZY_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_minZ5 : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
  double L = 0.1;
   double k = 1;
    double h = 1.5*l;
    return (k*l*_mu.get_value("mu_0")*(L-h))/(r*(L*l-h*_mu.get_value("mu_1")));
  }
};
struct Geom3DRB_ATheta_DiffusionXX_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
  double  l = 0.05;
   double k = 1;
    return (k*_mu.get_value("mu_1"))/l;
  }
};
struct Geom3DRB_ATheta_DiffusionXY_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYX_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYY_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
  double  l = 0.05;
   double k = 1;
    return (k*_mu.get_value("mu_1"))/l;
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZX_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZY_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_VesselCyl : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
   double k = 1;
    return (k*l*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0")))/_mu.get_value("mu_1");
  }
};
struct Geom3DRB_ATheta_DiffusionXX_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
  double  l = 0.05;
   double k = 1;
    return (k*_mu.get_value("mu_1"))/l;
  }
};
struct Geom3DRB_ATheta_DiffusionXY_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionXZ_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYX_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionYY_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
  double  l = 0.05;
   double k = 1;
    return (k*_mu.get_value("mu_1"))/l;
  }
};
struct Geom3DRB_ATheta_DiffusionYZ_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZX_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZY_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    return  0;
  }
};
struct Geom3DRB_ATheta_DiffusionZZ_BoundingBox : RBTheta
{
  virtual Number evaluate (const RBParameters & _mu)
  {
    double r = 0.003;
  double  l = 0.05;
   double k = 1;
    return (k*l*1.0/(r*r)*(_mu.get_value("mu_0")*_mu.get_value("mu_0")))/_mu.get_value("mu_1");
  }
};
#endif //DWARFELEPHANTGEOM3DRBTHETA_RFA_H