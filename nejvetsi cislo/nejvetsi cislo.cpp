// nejvetsi cislo.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <stdio.h>

int main()
{
	int a = 1;
	int b = 9;
	int c = 18;
	if (a > b) {
		;
		if (a > c) {
			;
			printf("cislo %d je nejvetsi", a);
		}
		else {
			if (c > b) {
				;
				printf("cislo %d je nejvetsi", c);
			}
			else {
			}
		}
	}
	else {
		if (b > c) {
			;
			printf("cislo %d je nejvetsi", b);
		}
		else {
			printf("cislo %d je nejvetsi", c);
		}
	}
}