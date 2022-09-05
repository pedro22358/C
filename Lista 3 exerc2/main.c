#include <stdio.h>
#include <stdlib.h>

typedef struct{
char nome[100];
int idade;
double renda;
}Pessoa;


int main()
{
Pessoa p[5];
int i;

for(i=1;i<=5;i++){
    printf("Digite seu nome:");
    scanf("%s",p[i].nome);
    printf("Digite sua idade:");
    scanf("%i",&p[i].idade);
    printf("Digite sua renda:");
    scanf("%lf",&p[i].renda);
}
for(i=1;i<=5;i++){
    printf("\n%s",p[i].nome);
    printf("\n%i",p[i].idade);
    printf("\n%lf",p[i].renda);
}
}
