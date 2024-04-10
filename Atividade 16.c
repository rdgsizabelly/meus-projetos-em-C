#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, aux;
	printf("digite o primeiro numero\n");
	scanf("%d", &num1);
	printf("\ndigite o segundo numero\n");
	scanf("%d", &num2);
	aux = num1;
	num1 = num2;
	num2 = aux;
	printf("\n a ordem inversa dos numeros informado e: %d %d", num1, num2);
	return 0;
}
