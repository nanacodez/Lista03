//preencher um vetor com 10 numeros reais, calcular e mostrar a quantidade de números negativos e a soma dos números positivos desse vetor

#include <stdio.h>
int main () {
    float real[10], posi = 0;
    int i, nega = 0;
    for (i = 0; i < 10; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%f", &real[i]);
        if (real[i] < 0) {
            nega++;
        } else {
            posi += real[i];
        }
    }
    printf("quantidade de numeros negativos: %d\n", nega);
    printf("soma dos numeros positivos: %.2f\n", posi);

    return 0;
}
