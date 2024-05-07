#include <stdio.h>
#include <stdlib.h>

int main(){
    int peso; //fazendo de um jeito diferente
    float h;
    double imc;

    printf("Digite seu peso: ", peso);
    scanf("%d", &peso);
        //printf("seu peso e %f", peso);
    printf("\nDigite sua altura: ", h);
    //setbuf(stdin, NULL);
    scanf("%f", &h);
        //printf("sua h e %f", h);
    imc = peso/(h  *  h);
    printf("\nSeu IMC e: %.2f", imc);

    return 0;
}
