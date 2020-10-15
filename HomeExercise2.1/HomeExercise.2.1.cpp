#include <stdio.h>
#include <math.h>

//HOME EXERCISE 2.1

//(Powers of 3 with an Infinite Loop) Write a program that keeps printing the powers of the
//integer 3, namely 3, 9, 27, 91, 273, and so on.Your loop should not terminate(i.e., you should
//	create an infinite loop).What happens when you run this program ?

//lave program der beregner eksponenterne til 3, hvor der til sidst ikke er mere plads i integeren

int main(void)
{

	int tal = 1;

	while (1)
	{	

		printf_s("%d\n", pow(3,tal));
		
		tal++;
	}





	return 0;
}