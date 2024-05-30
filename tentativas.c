#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, tentativas;
	
	printf("Digite seu primeiro valor");
	scanf("%d", &num1);
	printf("Digite seu segundo valor:");
	scanf("%d", &num2);
	if(num1>num2){
		printf("Esta correto!");
	}else{
		for(tentativas=1; tentativas < 5; tentativas++){
		printf("Incorreto tente de novo! tentativas %d\n", tentativas);
	printf("DIgite o primeiro valor:");
	scanf("%d", &num1);
		
	printf("Digite o seundo valor:");
	scanf("%d", &num2);
			
	}
	}
	return 0;
}
