#include <stdio.h>

int main()
{
    int bispo = 0;
    int torre = 0;
    int rainha = 0; 
    int cavalo = 1;

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

    while (cavalo--) {
        for (int i = 0; i < 2; i++){
            printf("cima\n");
        }
        printf("direita\n");
    }

    return 0;
}
