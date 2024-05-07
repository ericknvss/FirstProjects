#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
    //const PI = 3.14;
    float raio;
    double area;

        printf("Digite o raio do circulo: ", raio);
        scanf("%f", &raio);
        //printf("pi ; %f", PI);

    area = PI * (raio * raio);

        printf("\nA area do circulo e: %.3f", area);

    return 0;

}
