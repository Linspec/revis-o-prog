#include <stdio.h>
#include <string.h>
int main()
{
	int con,i,tam;
	char palavra[20];
	
	printf("\n escreva 'amor':");
	gets(palavra);
	
	tam=strlen(palavra); 
	printf ("%d", tam);
	
	for(i=tam-1;i>=0;i--)
	{
		
	printf("%c",palavra[i]);
		
	}
	
	
	system("pause");
	return 0;
}
