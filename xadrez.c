#include <stdio.h>

void recursivoTorre(int n)
{
    if (n > 0)
    {
        printf("direita\n");
        recursivoTorre(n - 1);
    }
}

void recursivoBispo(int n)
{
    if (n > 0)
    {
        printf("direita cima\n");
        recursivoBispo(n - 1);
    }
}

void recursivoRainha(int n){
    if(n > 0){
        printf("esquerda\n");
        recursivoRainha(n -1);
    }
}

int main()
{
    int cavalo = 1;

    printf("A torre andou para: \n");
    recursivoTorre(5);

    printf("O bispo andou para: \n");
    recursivoBispo(5);

    printf("A rainha andou para: \n");
    recursivoRainha(8);

    while (cavalo--) {
        printf("Cavalo andou: \n");
        for (int i = 0; i < 2; i++){
            printf("cima\n");
        }
        printf("direita\n");
    }

    return 0;
}
