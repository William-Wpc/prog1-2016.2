#include <stdio.h>
/*
Faça um programa em C para ler um numero inteiro 
e diga se é par ou impar
*/

int main()
 {
 	
 	int num;
 	
 		printf("\nEntre com Numero:");
 		scanf("%d", &num);
 		
 		if((num%2)==0)
 			{ // condição de verdade
 				printf("\nNumero par!!");
			 }
			 
			 else
			 {// condição falsa
			 	printf("\nNumero Impar!!");
			 }
	
	system("pause");
	
	return 0;		 
 }
