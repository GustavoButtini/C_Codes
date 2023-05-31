#include <stdio.h>
#include <locale.h>

int Fibonnaci(){
	int prox, max, b = 0;
	int a = 1;
	printf("Digite a quantidade de operações que deseja: ");
	scanf("%d", &max);
	for(int i; i <= max; i++){
		prox = a + b;
		b = a;
		a = prox;
		printf("\nValor atual: %d\n", a);
	}
	printf("O numero final foi: %d", prox);
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("Olá bem vindo ao nosso programa ! \n");
	Fibonnaci();
}

