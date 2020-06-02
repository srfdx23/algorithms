#include <stdio.h>
#define TAM 10

void main(){
    int n[TAM];
    int aux, i, counter;
    printf("\n Enter value for array: \n");
    for(i=0; i<TAM; i++){
        printf("\n n[%d]:", i);
        scanf("%d", &n[i]);
    }
    for(counter=0; counter<TAM; counter++){
        for(i=0; i<TAM; i++){
            if(n[i] > n[i+1]){
                aux = n[i];
                n[i] = n[i+1];
                n[i+1] = aux;
        }
    }
    }
    for(i=0; i<TAM; i++){
        printf("\n n[%d]: %d", i, n[i]);
    }
}
