#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c; char s[100]; int i; double d;
    printf("Entre com um caracter\n");
    scanf("%c",&c);
    printf("Entre com uma palavra\n");
    scanf("%s",&s);
    printf("Entre com um inteiro e um real\n");
    scanf("%i%lf",&i,&d);
    printf("inteiro(%d) real(%f) char(%c) palavra(%s)\n",i,d,c,s);

    /*Exercicio 2*/

    int a = sizeof(char),
        b = sizeof(int),
        e = sizeof(double),
        f = sizeof(float);
        printf("Tamanhos: %i --- %i --- %i --- %i", a,b,e,f);

    /*Exercicio 3*/

    char s1[80],s2[80];

    strcpy(s1,"Algoritimos");
    strcpy(s2," e EDs");

    printf("\nTamanho s1(%i)",(int)strlen(s1));
    printf("\nTamanho s2(%i)",(int)strlen(s2));

    if(strcmp(s1,s2)==0) printf("\nIguais!!!");
    else                 printf("\nDiferentes!!!");

    strcat(s1,s2);
    printf("\nNova s1 (%s)",s1);
    strcpy(s2,s1);
    printf("\nNova s2 (%s)",s2);

    if(strcmp(s1,s2)==0) printf("\nIguais!!!");
    else                 printf("\nDiferentes!!!");

    s1[10]=s2[10]='\0';s1=11='a';s2[11]='b';
    printf("\nNova s1 (%s)",s1);
    printf("\nNova s2 (%s)",s2);

    if(strcmp(s1,s2)==0) printf("\nIguais!!!");
    else                 printf("\nDifrentes!!!");


    return 0;
}
