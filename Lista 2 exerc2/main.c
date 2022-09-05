#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int maior=0;
    for(int i=0;i<10;i++){
        printf("Digite um numero:");
        scanf("%i",&num[i]);
    }
    for(int l=0;l<10;l++){
        if(num[l]>maior){
            maior = num[l];
        }
    }
    printf("%d",maior);
}
