#include <stdio.h>
#include <stdlib.h>
#include "update_grid.h"
#include "update_particle.h"
#include "particles.h"
int main (int argc, char *argv[])
{
  // boundary
  // collision
  // interpolation
  // update grid
  // calculate force
  // update particle and species
  printf ("%s\n","simplePIC");
  update_grid();
  update_particle();
  Particles P;
  if (particles_init(&P,1,10,3) != 0)
    exit(1);
  particles_print(&P);
  return 0;
}
