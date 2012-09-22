#include <stdio.h>
#include <stdlib.h>
#include "update_grid.h"
#include "update_particle.h"
#include "particles.h"
#include "parameter.h"
int init(Parameter*,Particles*);

int main (int argc, char *argv[])
{
  // boundary
  // collision
  // interpolation
  // update grid
  // calculate force
  // update particle and species
  Parameter para;
  Particles P;
  init(&para,&P);
  printf ("%s\n","simplePIC");
  update_grid();
  update_gamma(&P);
  update_particle(&P);
  particles_print(&P);
  return 0;
}

int init (Parameter* para, Particles* P)
{
  para->dt = 0.001;
  para->stepnum = 10;
  para->period = 1;
  para->dim = 2;
  /* add read file here */
  /* initialize Particles */
  if (particles_init(P,1,2,para->dim) != 0)
    exit(1);
  return 0;
}
