#include <stdio.h>

int main(){
    float x;
    float y;

        printf("Digite um numero inteiro: ", x);
        scanf("%f", &x);
        printf("Digite outro numero inteiro: ", y);
        scanf("%f", &y);

    int soma = x + y;
    int sub = x - y;
    int multi = x * y;
    float div = x/y;

        printf("\nA soma entre x e y e: %d", soma);
        printf("\nA diferenca entre x e y e: %d", sub);
        printf("\nA multiplicacao x e y e: %d", multi);
        printf("\nA divisao x e y e: %.1f", div);

    return 0;
}
