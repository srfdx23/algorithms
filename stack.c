#include <stdio.h>
#define TAM 5
int top = -1;

void push(int *stack, int number);
char pop(int *stack);

void main(){
    int stack[TAM];
    int menu = 4, number;

    while(menu != 0){
        printf("\n (1). Push");
        printf("\n (2). Pop");
        printf("\n (0). Exit");
        printf("\n\n Choose: ");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("\n Enter a number: ");
                scanf("%d", &number);
                push(stack, number);
            break;
            case 2:
                pop(stack);
            break;
        }
    }

}

void push(int *stack, int number){
    if(top < TAM){
        top++;
        stack[top] = number;
        printf("\n stack[%d]: %d", top, number);
    }else{
        printf("\n The stack is full");
        printf("\n You can use the pop function");
    }
}

char pop(int *stack){
    if(top > -1){
        printf("\nstack[%d] was removed", top);
        return stack[--top];
    }else{
        printf("\n The stack is empty");
        printf("\n You can use the push funcition");
    }
}