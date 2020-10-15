#include <stdio.h>
#include <math.h>

//Home Exercise 2.2

//Skriv et program som kan indlæse et tal fra brugeren og derefter
//udskrive kvadratroden af dette tal.

//Skriv programmet i pseudokode før du skriver C kode.*/

int main(void)
{
	double tal;

	printf_s("Indtast tal:\n");
	scanf_s("%lf", &tal);

	printf_s("Kvadratroden af dette tal er lig %lf", sqrt(tal));

	return 0;
}