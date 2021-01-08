#include <stdio.h>

int main()
{
	int a;
	int b = 3;
	int c;
	int d;

	a = 2;
	c = a + b;
	printf("Sum of %d and %d is %d\n" , a, b, c);

	d = a;
	a = c;
	c = d;
	printf("A is %d, B is %d, and C is %d\n" , a, b, c);
	printf("Sum of %d and %d is %d\n" , c, b, a);	
}
