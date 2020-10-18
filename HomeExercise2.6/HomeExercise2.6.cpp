//3.45 (Factorial)The factorial of a nonnegative integer n is written n!(pronounced “n factorial”)
//and is defined as follows :
//n!= n ·(n - 1) ·(n - 2) · … · 1 (for values of n greater than or equal to 1)
//and
//n!= 1 (for n = 0).
//For example, 5!= 5 · 4 · 3 · 2 · 1, which is 120.
//a) Write a program that reads a nonnegative integerand computesand prints its factorial.

//Home ex. 2.6: Løs Exercise 3.45a side 143 i bogen.
//Da beregningen skal foretages på grundlag af et tal indtastet af
//brugeren er du nødt til at anvende en loop til beregningen.

//lave et program der faktoriserer det man indtaster, dvs det tal man taster skal man gange
//med tallet inkrementeret indtil den når 1

#include <stdio.h>

int main (void)
{
	int number;
	int factorial = 1;
	int counter = 2;

	do
	{
		printf_s("Enter number to be factorized:\n");
		scanf_s("%d", &number);

	} while (number <= 0);

	while (counter <= number)
		{
		factorial *= counter;
			counter++;
		}



	printf_s("Number factorized is equal to: %d", factorial);

	return 0;
}