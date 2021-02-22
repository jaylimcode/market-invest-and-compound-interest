#include<stdio.h>
#define SALARY 24  // month salary
#define SP500 7 // s&p 500 uptick percent

int main()
{
	float amount = 24;
	printf("salary = %f\n\n", amount);

	for (int i = 1; i <= 40; i++)  // 40 years
	{
		
		for (int j = 1; j <= 12; j++) // 12 month
		{
			amount += SALARY;
			printf("month %d, salary = %f\n", j, amount);
		}
		amount = amount * (1.0 + SP500 / 100.0);
		printf("year : %d, salray = %f\n", i, amount);
	}
}
