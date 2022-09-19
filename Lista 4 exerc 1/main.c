#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro;
    int real;
    char caracter;

    int *i=NULL;
    int *r=NULL;
    int *c=NULL;

    printf("Digite um numero inteiro:");
    scanf("%i",&inteiro);
    printf("Digite um numero real:");
    scanf("%i",&real);
    setbuf(stdin,NULL);
    printf("Digite um caracter minusculo:");
    scanf("%c",&caracter);


    i=&inteiro;
    r=&real;
    c=&caracter;

    *i = *i + 1;
    *r = *r + 1;
    *c = *c - 32;

    printf("%i\n",*i);
    printf("%i\n",*r);
    printf("%c",*c);
}
