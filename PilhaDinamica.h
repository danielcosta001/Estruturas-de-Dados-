#ifndef pilhaDinamica_h
#define pilhaDinamica_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int chave;
} Objeto;

typedef struct NoPilha *PtrNoPilha;

typedef struct NoPilha{
  Objeto obj;
  PtrNoPilha proximo;
} NoPilha;

typedef struct {
  PtrNoPilha topo;
  int tamanho;
} PilhaDinamica;

void iniciaPilha(PilhaDinamica *p){
  p->topo = NULL;
  p->tamanho = 0;
  
};
bool estaVazia(PilhaDinamica *p){
  return (p->tamanho == 0);
};
void empilha(Objeto obj, PilhaDinamica *p){
  PtrNoPilha aux;
  aux = (PtrNoPilha) malloc(sizeof(NoPilha));
  aux->obj = obj;
  aux->proximo = p->topo;
  p->topo = aux;
  p->tamanho +1;
};
void desempilha(PilhaDinamica *p, Objeto *obj){
  if (estaVazia(p))
  {
    printf("A pliha esta vazia\n");
  }else
  {
    *obj = p->topo->obj;
    PtrNoPilha aux;
    aux = p->topo;
    printf("desenpilando: %d\n",aux->obj.chave);
    p->topo = p->topo->proximo;
    free(aux);
    p->tamanho--;
    
  }
  
};
int tamanhoPilha(PilhaDinamica *p){
  return (p->tamanho);
};
void topo(PilhaDinamica *p, Objeto *obj){
  *obj=p->topo->obj;
  return *obj;
};
void imprimePilha(PilhaDinamica *p){
    PtrNoPilha aux;
  printf("Pilha atual: ");
  for (aux=p->topo; aux!=NULL;aux=aux->proximo)
  {
    printf("%d\t",aux->obj.chave);
  }
  printf("\n");
};

#endif /* pilhaDinamica_h */