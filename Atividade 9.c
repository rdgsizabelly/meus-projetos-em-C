#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char name[15], lastName[15];
	printf("Digite seu primeiro nome:\n");
	scanf("%s", &name);
	printf("Digite seu sobrenome:\n");
	scanf("%s", &lastName);
	printf("\nSeu nome e: %s %s", name, lastName);
	return 0;
}
