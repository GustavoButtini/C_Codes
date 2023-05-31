#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int MathGain(int Gain, int Profit, int Cost){
	printf("\nSeu total gasto foi de: %d",Cost);
	printf("\nSeu ganho total foi de %d",Gain);
	if(Profit > 0){
		printf("\n\nOba !, você teve lucro !, Seu lucro foi de: %d", Profit);
	}else{
		printf("\n\nInfelizmente você teve perda de captial, que foi: %d",Profit * -1);
	}

}


int SortNumb(int num){
	int points = 0;
	int correct_num = rand()%61;
	if(num == correct_num){
		points++;
	}
	return points;
}


int LoteryExercise(void){
	srand(time(NULL));//somente para nao conflitar com o rand()
	int cont = 0;
	int v = 0;
	int qnt_num, point, gain, sorted_num, games_qnt,profit,cost;
	printf("Digite o quanto voce quer apostar nos seus jogos (Por cada jogo).\n");
	scanf("%d", &v);
	printf("Digite quantos jogos você deseja jogar: ");
	scanf("%d", &games_qnt);
	for(int i = 0; i < games_qnt; i++){
		qnt_num = 0;
		cont = 0;
		printf("\nOlá, este é seu %dº jogo, insira quantos numeros você irá apostar ",(i+1));
		scanf("%d", &qnt_num);
		for(cont; cont < qnt_num; cont++){
			sorted_num = rand()%61;
			printf(" - %d - ", sorted_num);
			point += SortNumb(sorted_num);
			gain += point;
		}
	}
	cost = v*games_qnt;
	gain = gain * v;	
	profit = gain - cost;
	printf("\nSeus acertos foram: %d",point);
	MathGain(gain,profit,cost);
}
int main(void){
	system("COLOR 02");
	setlocale(LC_ALL, "Portuguese");
	printf("Bem vindo a nossa casa de jogos !\n");
	LoteryExercise();
}
