#include <stdio.h>
int main () {
    float valor[5], maior, menor;
    int i, pos_maior, pos_menor;
    for (i = 0; i < 5; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%f", &valor[i]);
    }
    maior = menor = valor[0];
    pos_maior = pos_menor = 0;
    for (i = 1; i < 5; i++) {
        if (valor[i] > maior) {
            maior = valor[i];
            pos_maior = i;
        }
        if (valor[i] < menor) {
            menor = valor[i];
            pos_menor = i;
        }
    }
    printf("maior: %.2f na posicao %d\n", maior, pos_maior + 1);
    printf("menor: %.2f na posicao %d\n", menor, pos_menor + 1);
    return 0;
} 
