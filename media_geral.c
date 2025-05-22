//ler a nota da prova de 15 alunos, armazenar num vetor, calcular e imprimir a média geral

#include <stdio.h>
int main () {
    float nota[15], soma = 0, media;
    int i; 
    for (i = 0; i < 15; i ++) {
        printf("digite a nota do aluno %d\n", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }
    media = soma/15;
    printf("\na media geral da turma e: %.2f\n", media);

    return 0; 
}
