#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int nl, nc, nd;
    int i, j, k;
    int ***matriz;
    int ***matrizCopia;
    nl=4;
    nc=3;
    nd=4;
    matriz = (int***) malloc(nl*nc*nd*sizeof(int**));
    for (i=0; i<nl; i++)
    {
        matriz[i] = (int**) malloc(nc*sizeof(int*));
        for (j=0; j<nc; j++)
            {
            for (k=0; k<nd; k++){
                matriz[i][j] = (int*) malloc(nc*sizeof(int));
            }
        }
    }

    //Aloca espaço de memória para matrizCopia
    matrizCopia = (int***) malloc(nl*nc*nd*sizeof(int**));
    for (i=0; i<nl; i++)
    {
        matrizCopia[i] = (int**) malloc(nc*sizeof(int*));
        for (j=0; j<nc; j++)
            {
            for (k=0; k<nd; k++){
                matrizCopia[i][j] = (int*) malloc(nc*sizeof(int));
            }
        }
    }


    //Gera a matriz
    srand(time(0));
    for (i=0; i<nl; i++)
    {
        for (j=0; j<nc; j++)
        {
            for (k=0; k<nd; k++)
            {
                matriz[i][j][k]=rand()%10;
            }
        }
    }

    memcpy (matrizCopia, matriz, nl*nc*nd*sizeof(int));

    //Mostra a matriz
    for (i=0; i<nl; i++)
    {
        for (j=0; j<nc; j++)
        {
            for (k=0; k<nd; k++)
            {
                printf("%2d, ", matriz[i][j][k]);
            }
        }
        printf("\n");
    }
    printf("\n");

    //Mostra a matrizCopia
    for (i=0; i<nl; i++)
    {
        for (j=0; j<nc; j++)
        {
            for (k=0; k<nd; k++)
            {
                printf("%2d, ", matrizCopia[i][j][k]);
            }
        }
        printf("\n");
    }
    printf("\n");
    
    free(matriz);
    free(matrizCopia);
    return 0;
}
