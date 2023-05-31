#include <stdio.h>
#include <locale.h>

void main(){
		
	setlocale (LC_ALL, "Portuguese");
	float num = 5;
	while (num <= 60){
		printf("O numero %.2f é multiplo de 2.5 !\n", num);
		num += 0.5;
	}	

	*/
	
	setlocale (LC_ALL, "Portuguese");

	float pi = 3.14;
	float area_circulo, volume_cone, raio, altura = 0;
	printf("Digite o Raio do cone !\n");
	scanf("%f", &raio);
	printf("\nDigite a altura do cone\n");
	scanf("%f", &altura);
	area_circulo = pi + (raio*raio);
	volume_cone = (1/3 * area_circulo) * altura;
	printf("O Volume é : %.2f", volume_cone);
}
