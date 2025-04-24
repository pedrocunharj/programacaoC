#include <stdio.h>

int main(){

    printf("Movimento da Torre!!!\n"); //explicação de qual peça vai se mover
    for (int t = 0; t < 5; t++) // enquanto for menor que 5 a peça irá se mover para direita
    {
        printf("Direita\n");
    }

    printf("Movimento do Bispo!!!\n");

    int b = 0;
    while (b < 5)
    {
        printf("Cima direita.\n");
        b++;
    }

    printf("Movimento da Rainha!!!\n");

    int r = 0;
    do {
        printf("Esquerda.\n");
        r++;                            //enquanto for menor que 8 vai acrescentando o movimento para esquerda
    } while (r < 8);

    printf("Movimento do Cavalo!!! \n");

    int passosparaesquerda = 1;
    int passosparabaixo = 2;

    for ( int i = 0; i < passosparabaixo; i++)
    {
        printf("Baixo\n");

        if( i == passosparabaixo - 1)
        {
            int j = 0;

            while(j < passosparaesquerda) 
            {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0 ;
    
    
}   