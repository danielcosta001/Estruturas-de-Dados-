//
// Created by daniel on 13/03/2020.
//

#ifndef UNTITLED_PILHAESTATICA_H
#define UNTITLED_PILHAESTATICA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXTAM 100

/* tipo abstrato para item, que será inserido na pilha */
typedef struct {
    int chave;
    /* podemos adicionar mais coisas aqui */
} Objeto;

/* tipo abstrato de pilha */
typedef struct {
    Objeto array[MAXTAM];
    int topo;
} pilhaEstatica;


/* funções de manipulação */
void iniciaPilha(pilhaEstatica *pilha){
    pilha->topo = 0;
};
bool estaVazia(pilhaEstatica *pilha){
    if(pilha->topo == 0){
        return true;
    }else
    {
        return false;
    }

};
bool estaCheia(pilhaEstatica *pilha){
    if(pilha->topo == MAXTAM){
        return true;
    }else
    {
        return false;
    }

};
void empilha(Objeto item, pilhaEstatica *pilha){
    pilha->array[pilha->topo] = item;
    pilha->topo = pilha->topo + 1;
};
void desempilha(Objeto *item, pilhaEstatica *pilha){
    *item = pilha->array[pilha->topo - 1];
    pilha->topo = pilha->topo - 1;
};
int tamanhoPilha(pilhaEstatica *pilha){

};
Objeto topo(pilhaEstatica *pilha){
    return(pilha->array[pilha->topo -1]);
};
void imprimePilha(pilhaEstatica *pilha){
    printf("Pilha atual: ");
    for (int i = 0; i < pilha->topo; i++)
    {
        printf(" %i ",pilha->array[i].chave);
    }
    printf("\n");
};

#endif //UNTITLED_PILHAESTATICA_H
