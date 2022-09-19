#include <stdio.h>
#include <stdlib.h>

int preench(int n, int vet[n]);

int main()
{
    int n;
    printf("Digite o tamanho do vetor:");
    scanf("%i",&n);

    int *v;
    v = malloc(n*sizeof(int));

    preench(n,v);

    for(int i=0;i<n;i++){
        printf("%i ",v[i]);
    }
}

int preench(int n, int vet[n]){
    for(int i=0;i<n;i++){
        vet[i] = rand()%10;
    }
}
