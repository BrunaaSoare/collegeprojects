#include <math.h>
#include <stdio.h>

int main(void) {
  float a, b, c, volume, pi;
  int codigo;
  pi = 3.14;
  printf("digite o codigo da forma geometrica: 1-cubo , 2-  retangulo , 3-cone "
         ", 4-cilindro , 5-esfera , 6-prisma ,  7-piramide:");
  scanf("%d", &codigo);
  switch (codigo) {
  case 1:
    printf("digite o comprimento da aresta:");
    scanf("%f", &a);
    volume = pow(a, 3);
    printf("resultado: %.1f", volume);
    break;
  case 2:
    printf("digite a,b e c:");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    volume = a * b * c;
    printf("resultado: %.1f", volume);
    break;
  case 3:
    printf("digite o raio e a altura:");
    scanf("%f", &a);
    scanf("%f", &b);
    volume = pi * (a * a) * b / 3;
    printf("resultado: %.1f", volume);
    break;
  case 4:
    printf("digite o raio e a altura:");
    scanf("%f", &a);
    scanf("%f", &b);
    volume = pi * (pow(a, 2)) * b;
    printf("resultado: %.1f", volume);
    break;
  case 5:
    printf("digite o raio:");
    scanf("%f", &a);
    volume = (4 / 3) * pi * pow(a, 3);
    printf("resultado: %.1f", volume);
    break;
  case 6:
    printf("digite o comprimento, a altura e a largura:");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    volume = a * b * c;
    printf("resultado: %.1f", volume);
  case 7:
    printf("digite a area da base e a altura:");
    scanf("%f", &a);
    scanf("%f", &b);
    volume = a * b / 3;
    printf("resultado: %.1f", volume);
    break;
  default:
    printf("acabou");
  }

  return 0;
}
