#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

// Lista de exercicios 22/10/2022

/*
1. Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.
2. Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz quadrada do n�mero. Se o n�mero
for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.
3. Leia um n�mero real. Se o n�mero for positivo imprima a raiz quadrada. Do contr�rio, imprima o n�mero ao quadrado.
4. Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
- O n�mero digitado ao quadrado
- A raiz quadrada do n�mero digitado
5. Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou �mpar.
6. Escreva um programa que, dados dois n�meros inteiros, mostre na tela o maior deles, assim como a diferen�a existente
entre ambos.
7. Fa�a um programa que receba dois n�meros e mostre o maior. Se por acaso, os dois n�meros forem iguais, imprima a
mensagem N�meros iguais.
8. Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a presta��o for maior que 20% do sal�rio
imprima: Empr�stimo n�o concedido, caso contr�rio imprima: Empr�stimo concedido.
9. Fa�a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes
f�rmulas (onde h corresponde � altura):
- Homens: (72.7 * h) - 58
- Mulheres: (62.1 * h) - 44.7

*/
//Exercicio 1

void Exercicio1(){
	int a,b = 0;
	printf("Digite o Primeiro numero\n");
	scanf("%d", &a);
	printf("\nDigite o Segundo numero\n");
	scanf("%d", &b);
	if(a > b){
		printf("\n - O Numero %d � maior ! - \n", a);
	}else if(a < b){
		printf("O Numero $d � maior !", b);
	}else{
		printf("Os numeros %d e %d s�o iguais !", a, b);
	}
}

//Exercicio 2

void Exercicio2(){
	int n = 0;
	float c = 0;
	printf("Digite um numero\n");
	scanf("%d", &n);
	if(n >=0 ){
		c = sqrt(n);
		printf("\nA raiz do numero � %.2f", c);
	}else{
		printf("Numero Invalido !!");
	}
}

//Exercicio 3

void Exercicio3(){
	float n, c = 0;
	printf("Digite um numero \n");
	scanf("%f", &n);
	if(n >= 0 ){
		c = sqrt(c);
		printf("\nA raiz do numero � %.2f", c);
	}else{
		c = n * n;
		printf("\nO numero elevado ao quadrado � %.2f", c);
	}
}

//Exercicio 4

void Exercicio4(){
	int n = 0;
	float c = 0;
	printf("Digite um numero\n");
	scanf("%d", &n);
	if(n >=0 ){
		c = sqrt(n);
		printf("\nA raiz do numero � %.2f \n", c);
		c = n * n;
		printf("\nO numero ao quadrado � %.2f", c);
		
	}else{
		printf("Numero Invalido !!");
	}
}

//Exercicio 5

void Exercicio5(){
	int n = 0;
	printf("Digite um numero\n");
	scanf("%d", &n);
	if((n%2) == 0){
		printf("O numero %d digitado � Par", n);
	}else{
		printf("O numero %d digitado � Impar", n);
	}
}

//Exercicio 6

void Exercicio6(){
	int a,b,c = 0;
	printf("Digite o Primeiro numero\n");
	scanf("%d", &a);
	printf("\nDigite o Segundo numero\n");
	scanf("%d", &b);
	if(a > b){
		c = a - b;
		printf("\nO Numero %d � maior com uma diferen�a de %d do numero %d",a,c,b);
	}else if(b > a){
		c = b - a;
		printf("\nO Numero %d � maior com uma diferen�a de %d do numero %d",b,c,a);
	}else{
		printf("\nOs numeros s�o iguais !");
	}
}

//Exercicio 7

void Exercicio7(){
	int a,b = 0;
	printf("Digite o Primeiro numero\n");
	scanf("%d", &a);
	printf("\nDigite o Segundo numero\n");
	scanf("%d", &b);
	if(a > b){
		printf("\n - O Numero %d � maior ! - \n", a);
	}else if(a < b){
		printf("O Numero $d � maior !", b);
	}else{
		printf("Os numeros %d e %d s�o iguais !", a, b);
	}
}

//Exercicio 8

void Exercicio8(){
	int v,p = 0;
	printf("Digite salario do funcionario\n");
	scanf("%d", &v);
	printf("\nDigiteas presta��es do funcionario\n");
	scanf("%d", &p);
	if(((p/100) * 20) <= v){
		printf("\nEmprestimo: N�o Concedido !");
	}else{
		printf("\nEmprestimo: N�o Concedido !");
	}
	
}

//Exercicio 9

void Exercicio9(){
	float al,pe = 0;
	char c = 'm';
	printf("Digite a sua Altura\n");
	scanf("%f", &al);
	printf("\nDigite seu sexo, M para masculino e F para feminino\n");
	scanf("%s", &c);
	if(c == 'M' || c == 'm'){
		pe = ((72.7 * al) - 58);
		printf(" Seu peso ideal � %.2f", pe);
	}else if (c == 'F' || c == 'f'){
		pe = (62.1 * al) - 44.7;
		printf(" Seu peso ideal � %.2f", pe);
	}
}
int main(void){
	setlocale (LC_ALL, "Portuguese");
	//Para executar o exercicio 1 apague somente este comentario - Exercicio1();
	//Para executar o exercicio 2 apague somente este comentario - Exercicio2();
	//Para executar o exercicio 3 apague somente este comentario - Exercicio3();
	//Para executar o exercicio 4 apague somente este comentario - Exercicio4();
	//Para executar o exercicio 5 apague somente este comentario - Exercicio5();
	//Para executar o exercicio 6 apague somente este comentario - Exercicio6();
	//Para executar o exercicio 7 apague somente este comentario - Exercicio7();
	//Para executar o exercicio 8 apague somente este comentario - Exercicio8();
	//Para executar o exercicio 9 apague somente este comentario - Exercicio9();
}
