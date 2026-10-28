#include<stdio.h>
int main (void)

	{float GPA;

		printf("Enter GPA:");
		scanf("%f",&GPA);



	if(GPA<0.0 || GPA>4.0)

		{printf("Invalid GPA\n");}
	else
	{if(GPA>=0.0 && GPA<=1.99)
	
		{printf("Failed semester - registration suspended");}

	else
	{if(GPA>=1.0 && GPA<=1.99)
		
		{printf("on probation for next semester\n");}



	else
	{if(GPA>=2.0 && GPA<=2.99)
	
		{printf("no message\n");}


	else
	{if(GPA>=3.0 && GPA<=3.49)
	
		{printf("Dean's list for semester\n");}

	else
	{if(GPA>=3.5 && GPA<=4.0)
	
		{printf("Highest honors for semester\n");}
	
	}	
	
	
	}	

	
	
	}	
	
	
	}	
	
	
	}
		
	}
