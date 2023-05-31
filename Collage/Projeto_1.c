#include <stdio.h>
#include <locale.h>

int voto1, voto2, voto3, voto4 = 0; 
float nulo, branco = 0;


const cadastrovotos(int input){
	switch(input){
		case (1):{
			voto1++;
			break;
			}
		case(2):{
			voto2++;
			break;
			}
		case(3):{
			voto3++;	
			break;
			}
		case(4):{
			voto4++;
			break;
			}
		case(5):{
			nulo++;
			break;
			}
		case(6):{
			branco++;
			break;
			}	
		}
	}

const main(void){
	setlocale(LC_ALL, "Portuguese");
	int qntd,input,i = 0;
	printf("Bem vindo as nossas eleições \n");
	printf("Digite a quantidade de votantes desta eleição \n");
	scanf("%i", &qntd);/
	while (i != qntd){
		printf("Digite o seu candidato entre 1 a 6 (5 para branco e 6 para nulo) ");
		scanf("%i", &input);
		if(input < 7){
			cadastrovotos(input);
			printf("Valor cadastrado \n");
		}else{
			printf("Numero invalido, tente novamente");
		}
		i++;
	}
	printf("A quantidade de votos foi: %i\n",qntd);
	printf("\nO valor de votos do candidato 1 foi: %i\n",voto1);
	printf("\nO valor de votos do candidato 2 foi: %i\n",voto2);
	printf("\nO valor de votos do candidato 3 foi: %i\n",voto3);
	printf("\nO valor de votos do candidato 4 foi: %i\n",voto4);
	printf("\nO valor de votos nulo foi: %.0f\n",nulo);
	printf("\nO valor de votos em branco foi: %.0f\n",branco);
	float percntnull = (nulo/(float)qntd) * 100;
	float percntwhite = (branco/(float)qntd) * 100;
	printf("\nO valor de porcentagen de votos nulos sobre o total foi: %.2f\n", percntnull);
	printf("\nO valor de porcentagen de votos em branco sobre o total foi: %.2f\n", percntwhite);	
}

