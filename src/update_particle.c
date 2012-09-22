#include "update_particle.h"
int update_particle(Particles* P)
{
  /* try out restrict keyword to increase performance */
  // use boris method to update particle
  printf ("%s\n","update particle");
  
  return 0;
}

int update_gamma(Particles *P)
{
  printf ("%s\n","update gamma");
  int i,j;
  for (i=0;i<P->species_num;i++)
    for (j=0;j<P->particle_num;j++)
    {
      P->gamma[i][j] = 1.0/sqrt(1-inner_product(P->dim,&(P->vel[i][P->dim*j]),&(P->vel[i][P->dim*j]))/(C*C));
      P->gamma_1[i][j] = 1.0/sqrt(1-inner_product(P->dim,&(P->vel_1[i][P->dim*j]),&(P->vel_1[i][P->dim*j]))/(C*C));
    }
  
  return 0;
}

