#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float tempoGasto, velocidadeMedia, distancia, litrosUsados;
	printf("\n\tVamos calcular a quantidade de litros usados na viagem!\n");
	printf("\nQual e o tempo gasto?\n");
	scanf("%f", &tempoGasto);
	printf("\nQual e a velocidade media em km/h?\n");
	scanf("%f", &velocidadeMedia);
	distancia = tempoGasto * velocidadeMedia;
	printf("A distancia pecorrida e: %0.2f\n", distancia);
	litrosUsados = distancia / 12;
	printf("A quatidade de litros usados e %0.2f", litrosUsados);
	return 0;
}
