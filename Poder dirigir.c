#include <stdio.h>

/*
Programação em C para ver idade maior que
*/

int main()
 {
 	
 	int idade;
 	
 		printf("\nEntre com sua idade:");
 		scanf("%d", &idade);
 		
 		if(idade >=18)
 			{
 				printf("\nVoce pode dirigir\n");
			 }
			 else
			 {
			 		printf("\nVoce nao pode dirigir\n");
			 }
	
	system("pause");
	
	return 0;		 
 }
