#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int num1, num2, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	printf("A soma dos numeros sera de: %d\n", soma);
	
	system ("pause");
	return(0);
}
