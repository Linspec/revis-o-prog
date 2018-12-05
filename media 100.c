#include <stdio.h>
int main()
{
	int i,soma=0;
	float media;
	
	for(i=1;i<101;i++)
	{
		soma=soma+i;
		
		printf("%d,",i);
	}
	media=soma/2;
	
	printf("\n a soma de todos os 100 primeiros números eh %d e a media eh %.2f",soma,media);
	
	system("pause");
	return 0;
}
