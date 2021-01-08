#include<stdio.h>

int main()
{
  int a = 545;
  float b = 123.456;
  char c = 'b';
  double d = 123.456;
  long int e = 9000;
  short int f = 10;
  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("long int e value: %d and size: %lu bytes\n", e, sizeof(e));
  printf("short int f value: %d and size: %lu bytes\n", f, sizeof(f));
  printf("float b value: %f and size: %lu bytes\n", b, sizeof(b));
  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));






}

