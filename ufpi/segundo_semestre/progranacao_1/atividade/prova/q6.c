/******************************************************************************
Considere a seguinte fun��o em C (o operador && em C significa um �e" l�gico):
As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e R$ 1,00 
se forem compradas pelo menos 12. Escreva um programa que leia o n�mero de ma��s
compradas, calcule e escreva o custo total da compra.
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int qtd;
	float macas, valor;
	printf("Quantas ma��s voc� quer comprar: ");
	scanf("%d", &qtd);
		if(qtd>=12){
		macas = (qtd*1.00);
		}
		else{
		macas = (qtd*1.30);
		}     
	printf("O valor total da compra das ma��s e de: %.2f", macas);
return 0;
}
