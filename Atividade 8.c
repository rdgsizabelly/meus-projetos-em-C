#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    float area, base, altura;
    
    printf("\n\tCalculo a area do triangulo\t\n");
    printf("Informe a base:\n");
    scanf("%f", &base);
    printf("\nInforme a altura:\n");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    printf("\nA area do triangulo e: %0.2f", area);
    
	return 0;
	sistem("Pause");
}
