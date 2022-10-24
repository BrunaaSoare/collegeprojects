#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta,bhask1,bhask2;
    printf("escreva o primeiro numero:");
    scanf("%f", &a);
    printf("escreva o segundo numero numero:");
    scanf("%f", &b);
    printf("escreva o terceiro numero:");
    scanf("%f", &c);
    
    delta = (b*b)-(4*a*c);
    bhask1 = (-b)+(sqrt(delta)/(2*a));
    bhask2 = (-b)-(sqrt(delta)/(2*a));
    
    printf("%f raiz 1:", bhask1);
    printf("%f raiz 2:", bhask2);


  
  

    return 0;
}
