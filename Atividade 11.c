#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float horaTrab, valorHora, percentualDsc, salarioBruto, totalDsc, salarioLiq;
	printf("\nQuantas horas foram trabalhas?\n");
	scanf("%f", &horaTrab);
	printf("\nQual o valor da hora trabalha?\n");
	scanf("%f", &valorHora);
	printf("Qual o percentual de desconto?\n");
	scanf("%f", &percentualDsc);
	salarioBruto = horaTrab * valorHora;
	totalDsc = (percentualDsc/100) * salarioBruto;
	salarioLiq = salarioBruto - totalDsc;
	printf("\n\tSuas horas trabalhadas sao: %0.2f\n\t Seu salario bruto e: %0.2f\n\t O desconto e de: %0.2f\n\t Seu salario liquido e de: %0.2f", horaTrab, salarioBruto, totalDsc, salarioLiq);
	return 0;
}
