#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  float d;
  float e;

  d = 1.23;
  e = 4.56;

  float* ptrtod;
  float* ptrtoe;

  ptrtod = &d;
  ptrtoe = &e;

  *ptrtod = 1.23;
  *ptrtoe = 4.56;

  printf("The value of d is %f and the address is %p\n", d, (void*)&d);
  printf("the value of e is %f and the address is %p\n", e, (void*)&e);

  float f;
  f = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = f;

  printf("The new value of d is %f\n", *ptrtod);
  printf("The new value of e is %f\n", *ptrtoe);

}

