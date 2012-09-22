#include "vector.h"
inline double inner_product(int len,double* a, double* b)
{
  int i;
  double sum = 0.0;
  for (i=0;i<len;i++)
    sum += a[i]*b[i];
  return sum;
}

