#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int matriz[2][3];
	int i ,j,k=1,menor=0,suma=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese la posicion %d\n",k);
			scanf("%d",&matriz[i][j]);
			
			suma=suma+matriz[i][j];
			
			if(i==0)
			{
				matriz[i][j]=matriz[i][j]*4;
				
			}
			if(j==2)
			{
				matriz[i][j]=matriz[i][j]*3;
				
			}
			
			menor=matriz[0][0];
			
		}
		k++;
		printf("\n");
	}
	printf("La matriz es:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matriz[i][j]);
			
			if(menor>matriz[i][j])
			{
				menor=matriz[i][j];
				
			}
		}
		printf("\n");
	}
	
	
	printf("\nEl menor numero de la matriz es: %d ",menor);
	printf("\nLa suma de la matriz es :%d ",suma);
	
	return 0;
}
