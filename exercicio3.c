#include <stdio.h>

int main(){
	int codigoDestino;
	char respostaVolta;
	float valor;
	
	printf("Digite o codigo do destino: ");
	scanf("%d", &codigoDestino);
	
	while (codigoDestino < 1 || codigoDestino > 4){
		printf("Codigo invalido");
		printf("Digite o codigo do destino: ");
		scanf("%d", &codigoDestino);
	}
	getchar();
	printf("Sera ida e volta? Digite S ou N: ");
	scanf("%c",&respostaVolta);
	
	while (respostaVolta != 'S' && respostaVolta != 'N'){
        printf("Resposta Invalida!");
		getchar();
		printf("Sera ida e volta? Digite S ou N: ");
		scanf("%c",&respostaVolta);
	}

	switch(codigoDestino){
		case 1:
			if(respostaVolta == 'N'){
				valor = 500;
			}else{
				valor = 900;
			}
			break;
		case 2:
			if(respostaVolta == 'N'){
				valor = 350;
			}else{
				valor = 650;
			}
			break;
		case 3:
			if(respostaVolta == 'N'){
				valor = 350;
			}else {
				valor = 600;
			}
			break;
		case 4:
			if(respostaVolta == 'N'){
				valor = 300;
			}else{
				valor = 550;
			}
			break;
	}
	
	printf("Voce devera pagar R$%.2f",valor);

	return 0;
}

#include <stdio.h>

int main (){
	
	float numero;
	int iguaisA30 = 0;
	int i;
	
	for(i = 0; i< 10; i++){
		printf("Digite um numero: ");
		scanf("%f", &numero);
		if(numero == 30){
			iguaisA30++;
		}
	}
	printf("Ha %d numeros iguais a 30", iguaisA30);
	return 0;
}

#include <stdio.h>

int main(){
	float salarios[8], salariosComAumento[8];
	int i;
	
	for(i = 0; i < 8; i++){
		printf("Digite o salario: ");
		scanf("%f",&salarios[i]); //salarios[0] = -20
		if (salarios[i] <= 0){ //V
		    printf("Digitou um valor invalido!\n");
			i--; //i = -1
			continue; //ignorar o resto do corpo da iteração
		}
		salariosComAumento[i] = salarios[i] *1.08;
	}
	for(i = 0 ; i < 8; i++){
		printf("%d - %.2f | %.2f\n", i+1, salarios[i], salariosComAumento[i]);
	}
	
	return 0;
}
