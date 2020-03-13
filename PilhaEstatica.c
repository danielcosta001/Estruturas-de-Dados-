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
    //estaCheia(&X);
    empilha(Y,&X);
    Y.chave=20;
    empilha(Y,&X);
    imprimePilha(&X);
    topo(&X);


    return 0;
}
