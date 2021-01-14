                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           #include <stdio.h>
#include <math.h>
// Function to get area of a circle.
float areaOfCircle(int radius){
	float areaCirc;
	int r;
	areaCirc = radius*radius*M_PI;
	return areaCirc;
}

int main(int argc, char* argv[])
{
  if (argc != 3)
  {
    printf("%s : Please Enter two intergers. The first one will be the lower limit and the second one will be the upper limit.\n", argv[0]);
    return 1;
  }

  int arg1;

  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }

  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }

  
  // OK - at this stage the user input is validated and we can proceed...
  
  printf("Input Lower: %d\n", arg1);
  printf("input Upper: %d\n", arg2);

  for (int i = arg1; i < arg2+1; i++){
	printf("Area of radius %d = %f\n", i, areaOfCircle(i));
	}
}
