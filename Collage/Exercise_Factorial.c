#include <stdio.h>
#include <locale.h>


int Fatorial(){
	int i = 0; // Valor que recebera o contador
	float result = 1; // Valor que recebera o fatorial, obrigatoriamente precisa ser maior que um, pois multiplica��o por 0 � 0.
	printf("\nDigite o numero que voc� deseja realizar o fatorial: ");
	scanf("%d", &i);
	for (; i >= 1; i--)
	{
		result = result * i; //Multiplica pelos antecessores.
		
	}
	printf("\nO resultado do seu fatorial foi: %.2f", (result));
	return 0;
}


int main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("Bem vindo ao programa que ir� exibir o fatorial de um numero qualquer !\n");
	Fatorial();
}

