/******************************************************************************
A aplica��o recebe 10 valores em 2 vetores de 5 espa�os, mostras os valores inseridos
em cada vetor e mostra a subitra��o de cada valor intero em rela��o a sua posi��o no primeiro
e no segundo vetor.
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int vet1[5], vet2[5], num, cont, x;//foi criado o vet2
    printf("\n");
    printf("\nVetor 1");
        for(x=0;x<=4;x++){
        cont=0+x;
        printf("\t[%d] Digite um valor: ",cont);
        //scanf("%d",&num);//os valores dentro da variavel num inves de vet1[x]
        scanf("%d",&vet1[x]);
        }
    printf("\n\n");
    printf("\nVetor 2");
        for(x=0;x<=4;x++){
        cont=0+x;
        printf("\t[%d] Digite um valor: ",cont);
       //scanf("%d",&num);//os valores dentro da variavel num inves de vet2[x]
       scanf("%d",&vet2[x]);
        }
    printf("\n\n");
    printf("\nVetor 1");
        for(x=0;x<=4;x++){//faltou abertura de chaves
        printf("\t%d ",vet1[x]);
        }//faltou fechamento de chaves
    printf("\n");
    printf("\nVetor 2");
        for(x=0;x<=4;x++){//faltou abertura de chaves
        printf("\t%d ",vet2[x]);//n�o foi criado o vet2
        }//faltou fechamento de chaves
        printf("\n\n");
        printf("\n\n Subtra��o:");
        for(x=0;x<=4;x++){//faltou abertura de chaves
        printf("\t%d ",vet1[x] - vet2[x]);
        }//faltou fechamento de chaves
        printf("\n\n");
    system("pause");
    return(0);
}
