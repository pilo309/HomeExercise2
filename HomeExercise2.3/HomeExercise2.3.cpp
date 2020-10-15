#include <stdio.h>
#include <math.h>

//Home Exercise 2.2

//Hvad sker der, hvis du i programmet fra Home exercise 2.2 ovenfor
//indtaster et negativt tal ? Prøv det!
//Dette er et klassisk eksempel på, at programmet fejler hvis brugeren
//indtaster en ugyldig værdi.Det skal vi selvfølgelig forhindre!!!
//Du skal derfor foretage følgende ændring i programmet : Brugeren
//skal kunne indtaste et helt tal(som før).Hvis tallet ikke er større end
//eller lig med 0 skal der udskrives en fejlmeddelelse(find selv på en

//	passende tekst).Ovenstående skal gentages så længe tallet ikke
//	gyldigt(større end eller lig med 0).Først når værdien er gyldig skal
//	kvadratroden af tallet udskrives.
//	Skriv programmet i pseudokode før du skriver C kode.
//	NB!Dette er en meget anvendt metode til at indlæse en værdi fra
//	brugeren og tjekke om den indtastede værdi overholder en bestemt
//	betingelse.Det betyder, at programmet ikke fortsætter før brugeren
//	har indtastet en gyldig værdi.Dette forhindrer, fejl i det videre program pga.af fejl indtastning fra brugeren.

int main(void)
{
	double tal=-1;

	while (tal < 0)
	{
		printf_s("Indtast positivt tal:\n");
		scanf_s("%lf", &tal);

		if (tal < 0)
			printf_s("Indtast VENLIGST positivt tal.");
	}
	

	printf_s("Kvadratroden af dette tal er lig %lf", sqrt(tal));

	return 0;
}