#include<stdio.h>

int Add(int a, int b)
{
	return a+b;	
}

int subtract(int a, int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;	
}

void main()
{
	int r;
	r = Add(5,7);
	printf("Addition is : %d",r);

	r = subtract(5,7);
	printf("Subtraction is : %d",r);

	r = multiply(5,7);
	printf("Multiplication is : %d",r);
	
}

