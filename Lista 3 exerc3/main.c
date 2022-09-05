#include <stdio.h>
#include <stdlib.h>

typedef struct{
char titulo[30];
char autor[20];
char assunto[100];
int id;
}Livros;

int main()
{
Livros l[5];
int i;

for(i=0;i<5;i++){
    printf("Digite o titulo:");
    scanf("%s",l[i].titulo);
    printf("Digite o autor:");
    scanf("%s",l[i].autor);
    printf("Digite o assunto:");
    scanf("%s",l[i].assunto);
    printf("Digite o id:");
    scanf("%i",&l[i].id);
}
for(i=0;i<5;i++){
    printf("Titulo:%s \nAutor:%s \nAssunto:%s \nId:%i",l[i].titulo,l[i].autor, l[i].assunto, l[i].id);
}
}
