#ifndef PARTICLES_H
#define PARTICLES_H
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
  double mass;
  double charge;
} Species;


typedef struct 
{
  double** pos;
  double** vel;
  double** pos_1;
  double** vel_1;
  Species* species;
  int species_num;
  int particle_num;
  int dim;
} Particles;

extern int particles_init(Particles* P, int s_num, int p_num, int d);
/*
  s_num: number of particle species
  p_num: number of particles
  d: dimension
*/
extern int particles_print(Particles* P);
extern int species_print(Species* S);
#endif

