#include <stdio.h>
/*
Fa�a um programa em C para ler um numero inteiro 
e diga se � par ou impar
*/

int main()
 {
 	
 	int num;
 	
 		printf("\nEntre com Numero:");
 		scanf("%d", &num);
 		
 		if((num%2)==0)
 			{ // condi��o de verdade
 				printf("\nNumero par!!");
			 }
			 
			 else
			 {// condi��o falsa
			 	printf("\nNumero Impar!!");
			 }
	
	system("pause");
	
	return 0;		 
 }
