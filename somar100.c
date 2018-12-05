#include <stdio.h>
int main()
{
	int i,soma=0,media;
	
	for(i=0;i<100;i++)
	{
		soma=soma+1;
		i++;
		printf("%d,",i);
	}
	media=soma/2;
	
	printf("\n a soma de todos os 100 primeiros números eh %d e a media eh %d",soma,media);
	
	system("pause");
	return 0;
}
