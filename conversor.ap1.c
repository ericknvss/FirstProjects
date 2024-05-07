#include <stdio.h>
#include <math.h>

int main(){
    float mts;
    float cm;
    float mm;

        printf("Digite uma medida em metros: ", mts);
        scanf("%f", &mts);
        printf("\n%.1f", mts);
    cm = mts/100;
        printf("m convertido em centimetros, sao: %f", cm);
        printf("cm");
    mm = mts/1000;
        printf(" e em milimetros: %f", mm);
        printf("mm");

    return 0;

}
