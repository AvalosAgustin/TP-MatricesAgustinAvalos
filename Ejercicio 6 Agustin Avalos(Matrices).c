#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int edificio [2][3]={{0},{0}};
	int i,j,suma=0;
	float promedio=0;
	for(i=0;i<20;i++)
	{
		printf("piso %d\n",i+1);
		for(j=0;j<6;j++)
		{
			printf("Ingrese la cantidad de habitantes del departamento %d\n",j+1);
			scanf("%d",&edificio[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<20;i++)
	{
		printf("piso %d:",i+1);
		for(j=0;j<6;j++)
		{
			promedio=promedio+edificio[i][j];
	      suma=suma+edificio[i][j];
		}
		promedio=promedio/6;
		printf("El promedio es de :%.2f",promedio);
		promedio=0;
		printf("\n");
		
		
		
	}
	printf("La cantidad total de habitantes de los 20 pisos %d",suma);
	
	return 0;
}

