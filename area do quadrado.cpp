#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int lado1, lado2, area;
	
	printf("Digite o primeiro lado do quadrado: ");
	scanf("%d", &lado1);
	
	printf("Digite o segundo lado do quadrado: ");
	scanf("%d", &lado2);
	
	area = lado1 * lado2;
	
	printf("A area do quadrado sera de: %d\n", area);
	
	system ("pause");
	return(0);
}
