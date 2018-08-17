#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nl, nc, nd;
    int i, j, k;
    int ***matriz;
    nl=3;
    nc=4;
    nd=2;
    matriz = (int***) malloc(nl*nc*nd*sizeof(int**));
    for (i=0; i<nl; i++)
    {
        matriz[i] = (int**) malloc(nl*sizeof(int*));
        for (j=0; j=nl; j++)
            {
            for (k=0; k<nc; k++){
                matriz[i][j] = (int*) malloc(nc*sizeof(int));
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
    return 0;
}
