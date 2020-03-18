#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "PilhaDinamica.h"

int main(int argc, char const *argv[])
{
    PilhaDinamica X;
    Objeto Y;

    Y.chave = 20;
    iniciaPilha(&X);
    estaVazia(&X);
    empilha(Y,&X);
    imprimePilha(&X);
    

    
        for (int i = 0; i < 10; i++)
    {
        Y.chave=i;
        empilha(Y,&X);
    }
    imprimePilha(&X);
    
    return 0;
}



