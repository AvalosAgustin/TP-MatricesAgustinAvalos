#include <stdio.h>
#include <stdlib.h>
int main() //int main(int argc, char *argv[]) 
{
	int matriz[2][3];
	int matriz1[2][3];
	int i ,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese la posicion %d\n",i);
			scanf("%d",&matriz[i][j]);
			if(i==0)
			{
				matriz[i][j]=matriz[i][j]*4;
				
			}
			if(j==2)
			{
				matriz[i][j]=matriz[i][j]*3;
				
			}
			
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	
	return 0;
}

