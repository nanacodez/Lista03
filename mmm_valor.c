//ler 5 valores e mostrar todos os valores lidos juntamente com o maior, menor e a média dos valores

#include <stdio.h>
int main () {
    float valor[5], maior, menor, media, soma = 0;
    int i;
    for (i = 0; i < 5; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%f", &valor[i]);
        soma += valor[i];
    }
    media = soma / 5;
    maior = menor = valor[0];
    for (i = 1; i < 5; i++) {
        if (valor[i] > maior) {
            maior = valor[i];
        }
        if (valor[i] < menor) {
            menor = valor[i];
        }
    }
    printf("maior: %.2f\n", maior);
    printf("menor: %.2f\n", menor);
    printf("media: %.2f\n", media);

    return 0;
}
