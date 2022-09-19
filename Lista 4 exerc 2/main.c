#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inte1;
    int inte2;

    printf("Digite um numero inteiro:");
    scanf("%i",&inte1);
    printf("Digite outro numero inteiro:");
    scanf("%i",&inte2);

    int *num1 = NULL;
    int *num2 = NULL;

    num1 = &inte1;
    num2 = &inte2;

    if(*num1>*num2){
        printf("Numero 1 e maior que o numero 2: %i > %i",*num1,*num2);
    }
    else{
        printf("Numero 2 e maior que o numero 1: %i > %i",*num2,*num1);
    }

}
