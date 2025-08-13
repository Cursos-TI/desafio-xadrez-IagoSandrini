#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    int bispo = 0;
    int torre = 0;
    int rainha = 0;

    do
    {
        printf("O Bispo andou %d para direita cima\n", bispo);
        bispo++;
    } while (bispo <= 5);

    while (torre <= 5)
    {
        printf("A Torre andou %d para direita\n", torre);
        torre++;
    }

    for (rainha; rainha <= 8; rainha++)
    {
        printf("A Rainha andou %d para esquerda\n", rainha);
    }

    return 0;
}
