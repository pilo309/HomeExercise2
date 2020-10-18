#include <stdio.h>
#include <math.h>

//(Sides of a Triangle) Write a program that reads three nonzero integer valuesand determines
//and prints whether they could represent the sides of a triangle.

//Pseudokode: Lave et program der indlæser 3 hele tal og determinerer om siderne kan bruges i en trekant

int main(void)
{

	int side1, side2, side3;
	side1 = side2 = side3 = 0;

	while (side1 <= 0 && side2 <= 0 && side3 <= 0)
	{
		printf_s("Enter 3 sides of an triangle:\n");
		scanf_s("%d%d%d", &side1, &side2, &side3);

		if (side1 <= 0 || side2 <= 0 || side3 <= 0)
			printf_s("All values must be positive:");

	}

	if (side1 < side2 + side3 && side2 < side1 + side3 && side3 < side2 + side1)
		printf_s("The side lenghts can represent a triangle");
	else
		printf_s("The side lenghts can NOT represent a triangle");


	return 0;


}