#include <stdio.h>
#define TAM 10

void insertion_sort(int *n);

void main(){
    int n[TAM];
    int i;
    printf("\n Enter value for array: \n");
    for(i=0; i<TAM; i++){
        printf("\n n[%d]:", i);
        scanf("%d", &n[i]);
    }
    insertion_sort(n);
}

void insertion_sort(int *n){
    int i, j, aux;
    for(i=1; i<TAM; i++){
        aux = n[i];
        j = i-1;
        while(aux < n[j] && j >= 0){
            n[j+1] = n[j];
            j--;
        }
        n[j+1] = aux;
    }
    for(i=0; i<TAM; i++){
        printf("\n n[%d]: %d", i, n[i]);
    }
}