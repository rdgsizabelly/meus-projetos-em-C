#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float f, c, F, C;
	printf("\n\t Vamos converter temperaturas!\n\t");
	printf("Digite a temperatura em Celsius:\n");
	scanf("%f", &c);
	f = ( 9 * c + 160) / 5;
	printf("\nA temperatura em Fahrenheit e: %0.2f", f);
	printf("\nAgora digite a temperatura em Fahrenheit:\n");
	scanf("%f", &F);
	C = (f - 32) * (5/9);
	printf("\nA temperatura em Celsius e: %0.2f", c);
	return 0;
}
