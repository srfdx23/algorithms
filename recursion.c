#include <stdio.h>

int factorial(int number);

void main(){
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = factorial(number);
    printf("\nResult: %d", result);
}

int factorial(int number){
    if(number > 1){
        number = number * factorial(number - 1);
        return number;
    }else{
        return 1;
    }

}