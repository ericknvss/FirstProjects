#include <stdio.h>

int main(){
    float n1;
    float n2;
    float n3;
    float med;

        printf("Digite a primeira nota: ", n1);
        scanf("%f", &n1);
        printf("\nDigite outra nota: ", n2);
        scanf("%f", &n2);
        printf("\nDigite a ultima nota: ", n3);
        scanf("%f", &n3);
    med = (n1+n2+n3)/3;
        printf("\nA media entre as nota e: %.1f", med);

    return 0;
}
