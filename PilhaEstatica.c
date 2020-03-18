#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include"PILHAESTATICA.h"


int main(void)
{

    pilhaEstatica X;
    Objeto Y;
    Y.chave=10;
    iniciaPilha(&X);
    estaCheia(&X);
    empilha(Y,&X);
    imprimePilha(&X);
    Y.chave=20;
    empilha(Y,&X);
    imprimePilha(&X);
    desempilha(&Y,&X);
    imprimePilha(&X);

    for (int i = 0; i < 100; i++)
    {
        Y.chave=i;
        empilha(Y,&X);
    }
    imprimePilha(&X);
    desempilha(&Y,&X);
    desempilha(&Y,&X);
    desempilha(&Y,&X);
    imprimePilha(&X);

        for (int i = 0; i < 100; i++)
    {
        Y.chave=i;
        desempilha(&Y,&X);
    }
    imprimePilha(&X);

    return 0;
}
