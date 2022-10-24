#include <stdio.h>

int main (){

	float precos[10];
	float soma = 0.0;
	int i, contadorMenor50 = 0, contador50e80 = 0, contadorMaior80 = 0;
	float media;
	
	for(i = 0; i < 10; i++){
		printf("Digite o preco: ");
		scanf("%f",&precos[i]);
		soma += precos[i];
	}

	media = soma / 10.0;
	printf("Media: %f", media);
	
	for(i = 0; i < 10; i++){
		if (precos[i] < 50){
			contadorMenor50++;
		}else if (precos[i] >= 50 && precos[i] < 80){
			contador50e80++;
		}else{
			contadorMaior80++;
		}
	}
	
	printf("Menor que 50: %d", contadorMenor50);
	printf("Entre 50 e 80: %d", contador50e80);
	printf("Maior que 80:  %d",contadorMaior80);
	


	return 0;
}
