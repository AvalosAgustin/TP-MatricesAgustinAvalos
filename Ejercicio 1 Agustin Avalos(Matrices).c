#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int matriz[2][3];
	int i ,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese la posicion %d\n",i);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}

