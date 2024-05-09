#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "Portuguese");
	char operador = '-';
	int num1=10, num2=5, resultado;
	switch (operador){
		case '+':
			resultado=num1+num2;
			printf ("A soma e: %d", resultado);
			break;
			case'-':
				resultado=num1-num2;
				printf("A subtração é: %d", resultado);
				break;
				default:
				
				printf ("Operador invalido");
	} 
	return 0;
}
tabralhos clodoaldo
exercicio
