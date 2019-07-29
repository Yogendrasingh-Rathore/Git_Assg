#include<stdio.h>

int Add(int a, int b)
{
	return a+b;	
}

int subtract(int a, int b)
{
	return a-b;
}

void main()
{
	int r,r1;
	r = Add(5,7);
	printf("Addition is : %d",r);
	r1 = subtract(5,7);
	printf("Subtraction is : %d",r1);
	
}
