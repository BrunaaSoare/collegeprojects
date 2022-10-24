#include <stdio.h>

int main(){
float numeros[10];
int i,j, contaMaiorQueMedia = 0;
float soma = 0,media;

for(i = 0; i < 10; i++){
printf("Digite um numero: ");
scanf("%f", &numeros[i]);
for(j=0; j < i; j++){
if (numeros[i] == numeros[j]){
printf("Numero repetido!\n");
i--;
continue;
}
}
soma += numeros[i];
}

media = soma / 10;

for(i = 0; i < 10; i++){
printf("%.1f ",numeros[i]);
if (numeros[i] > media){
contaMaiorQueMedia++;
}
}
printf("Ha %d numeros acima da media, que e %f",contaMaiorQueMedia, media);

return 0;
}
