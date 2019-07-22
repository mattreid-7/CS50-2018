#include "stdio.h"


int main(void)
{
	int x;

	printf("Please enter an integer: \n");	
	scanf("%d",&x);
	
	if (x == 1)
	{
		printf("You entered: \n");
		printf("one \n");
	}
	if (x == 2)
	{
		printf("You entered: \n");
		printf("two \n");
	}
	if (x == 3)
	{
		printf("You entered: \n");
		printf("three \n");
	}
	if (x == 4)
	{
		printf("You entered: \n");
		printf("four \n");
	}
	if (x == 5)
	{
		printf("You entered: \n");
		printf("five \n");
	}
	if (x > 5)
	{
		printf("You entered: \n");
        printf("a number greater than five \n");
	}
	if (x < 1)
	{
		printf("You entered: \n");
		printf("a number less than one \n");
	}


   
}