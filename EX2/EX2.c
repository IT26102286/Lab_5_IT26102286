#include<stdio.h>
int main (void)
{
	float BMI,wt_lb,ht_in;	

	printf("Enter your weight in pounds:");
	scanf("%f",&wt_lb);

	printf("Enter your height in inches:");
	scanf("%f",&ht_in);

	BMI = (wt_lb/(ht_in*ht_in))*703;

	printf("your BMI value:%.2f\n",BMI);

	if (BMI<18.5)

	{printf("underweight\n");}

	else if (BMI>=18.5 && BMI<25)
	{printf("normal weight\n");}

	else if(BMI>=25 && BMI<30)
	{printf("overweight\n");}

	else if(BMI>=30)
	{printf("obese\n");}

	else {printf("invalid input\n");}

	return 0;
}	
