#include <stdio.h>
#include <stdlib.h>

struct nodes{
  int i, x;
  struct nodes *next;
};

int main() {
  struct nodes *lista = NULL;
  struct nodes *inicio = NULL;
  struct nodes *aux = NULL;

  int n;
  scanf("%d", &n);
  int n1 = 0;
  while(n1 < n){
    lista = (struct nodes *) malloc(sizeof(struct nodes));
    lista->i = n1;
    printf("\nInforme x: ");
    scanf("%d", &(lista->x));

    lista->next = inicio;
    inicio = lista;
    n1++;
  }

  aux = (struct nodes *) malloc(sizeof(struct nodes));
  aux = lista;
  int pos = aux->i;
  int aux_x = aux->x;
  while(aux != NULL){
    if(aux->x < aux_x){
      aux_x = aux->x;
      pos = aux->i;
    }
    aux = aux->next;
  }

  printf("Menor valor: %d\n", aux_x);
  printf("Posicao: %d\n", pos);

    return 0;
}
