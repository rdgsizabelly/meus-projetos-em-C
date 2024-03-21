#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio, area;
	float pi = 3.14;
	
	printf("\n\tVamos calcular a circunferencia do raio\t\n");
	printf("Digite o raio!\n");
	scanf("%f", &raio);
	area = (raio * raio) * pi;
	printf("\nA area da circunferencia e: %0.2f!\n", area);
	return 0;
}
