#include<stdio.h>
int main (void)

{
	char status;
	int i;


	for (i= 1; i<=5; i++)
	
	{
	printf("Enter status for order %d (I/S/V):", i);
	scanf("%c", &status);


	if (status == 'I')
	{
	printf("skipping order %d\n", i);
	continue;
	}

	if (status == 'S')
	{
	printf("stopping at order %d\n", i);
	break;
	}

	if (status == 'V')
	{
	printf("processing order %d\n", i);
	
	}	

	


	}	

	return 0;






}	
