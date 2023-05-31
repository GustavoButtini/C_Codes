#include <stdio.h>
#include <locale.h>

void Parte1(){
	float p1,p2 = 0;
	printf("Digite a nota da P1\n");
	scanf("%f", &p1);
	printf("\nDigite a nota da p2\n");
	scanf("%f", &p2);
	if(((p1 + p2)/2) >= 6){
		printf("\nAluno aprovado !");
	}else{
		printf("\nAluno precisa fazer P3");
	}
}

void Parte2(){
	float p1,p2,p3;
	printf("Digite a nota da P1\n");
	scanf("%f", &p1);
	printf("\nDigite a nota da p2\n");
	scanf("%f", &p2);
	if(((p1 + p2)/2) >= 6){
		printf("\nAluno aprovado !");
	}else{
		if(p1 != 0){
			if(p2 != 0){
				printf("\nAluno reprovado !");
			}else{
				printf("Digite a nota da P3 !");
				scanf("%f",&p3);
					if(((p1 + p3)/2) >= 6){
						printf("\nAluno aprovado !");
					}else{
						printf("\nAluno reprovado");
					}	
			}
		}else{
			printf("Digite a nota da P3 !");
			scanf("%f",&p3);
			if(((p3 + p2)/2) >= 6){
				printf("\nAluno aprovado !");
			}else{
				printf("\nAluno reprovado");
			}
		}
	}
}

void Parte3(){
	float m, f = 0;
	printf("Digite a media do aluno\n");
	scanf("%f", &m);
	printf("\nDigite as faltas do aluno\n");
	scanf("%f", &f);
	if(m >= 6 && f <= 20){
		printf("ALUNO APROVADO");
	}else if(m < 6 && f <= 20){
		printf("ALUNO REPROVADO POR MEDIA");
	}else if(m > 6 && f > 20){
		printf("ALUNO REPROVADO POR FALTA");
	}else if(m < 6 && f > 20){
		printf("ALUNO REPROVADO POR MEDIA E FALTA");
	}
}

int main(void){
	setlocale (LC_ALL, "Portuguese");
	//Delete o comentario para ver a  - Parte1();
	//Delete o comentario para ver a  - Parte2();
	//Delete o comentario para ver a  - Parte3();
}
