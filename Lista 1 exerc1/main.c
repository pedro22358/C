#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Digite um numero:");
    scanf("%d",&n1);
    printf("Digite outro numero:");
    scanf("%d",&n2);

    if(n1>45||n2>45){
        n1 = n1+n2;
        printf("%d",n1);
    }
    else if(n1>20 && n2>20){
            if(n1>n2){
                n1= n1-n2;
                printf("%d",n1);
            }
            else{
                n1 = n2-n1;
                printf("%d",n1);
            }
    }
    else if(n1<10 && n2!= 0){
        n1 = n1/n2;
        printf("%d",n1);
    }
    else if(n2<10 && n1!= 0){
        n2 = n2/n1;
        printf("%d",n2);
    }
    else{
        printf("Pedro");
    }
}
