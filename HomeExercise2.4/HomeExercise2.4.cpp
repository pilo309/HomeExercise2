#include <stdio.h>
#include <math.h>

//(Sides of a Triangle) Write a program that reads three nonzero integer valuesand determines
//and prints whether they could represent the sides of a triangle.

//Pseudokode: Lave et program der indlæser 3 hele tal og determinerer om siderne kan bruges i en trekant

int main(void)
{

	int side1, side2, side3;
	side1 = side2 = side3 = 0;					//initialisere sider og definere til 0

	while (side1 <= 0 && side2 <= 0 && side3 <= 0)		//skip loop hvis bare en siderne ikke er lig 0 / negativ
	{													//men det er de aldrig pga initialiseringen
		printf_s("Enter 3 sides of an triangle:\n");
		scanf_s("%d%d%d", &side1, &side2, &side3);

		if (side1 <= 0 || side2 <= 0 || side3 <= 0)		//hvis bare en af siderne er lig 0 eller negativ
			printf_s("All values must be positive:");

	}

	if (side1 < side2 + side3 && side2 < side1 + side3 && side3 < side2 + side1) //hvis hver side er mindre end sum af de andre sider
		printf_s("The side lenghts can represent a triangle");			//så er det muligt
	else
		printf_s("The side lenghts can NOT represent a triangle");     //så er det ikke muligt


	return 0;


}