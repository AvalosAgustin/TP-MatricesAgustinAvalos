#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	int colectivo[3][12]={{0},{0}};
	int coche=0,recaudado=0,linea=0;
	int DinerodeLinea[3]={0},suma=0,i=0,j=0,k=1;
	do
	{
		printf("Ingrese el numero de coche\n");
		scanf("%d",&coche);
		if(coche>0)
		{
			printf("Ingrese cuanto se recaudo\n");
			scanf("%d",&recaudado);
			printf("Ingrese el numero de linea\n");
			scanf("%d",&linea);
			
			if(linea<1 || linea>3)
			{
				while(linea<1 || linea>3)
				{
					printf("Ingrese nuevamente la linea(Tiene que estar entre 1 y 3)");
					scanf("%d",&linea);
					
				}
				
			}
			colectivo[linea-1][coche-1]=colectivo[linea-1][coche-1]+recaudado;
		}
		
		
		
		
		
	} while(coche>=1);
	printf("La recaudacion por coche es:\n");
	
	for(i=0;i<3;i++)
	{
		printf("linea %d\n",k+i);
		for(j=0;j<12;j++)
		{
			
			
			printf("El numero de coche %d y se recaudo: %d \n", j+1, colectivo[i][j]);
			DinerodeLinea[i]=DinerodeLinea[i]+colectivo[i][j];
			suma=suma+colectivo[i][j];
			
		}
		printf("\n");
	}
	
	
	for(i=0;i<3;i++)
	{
		printf("Linea %d Recaudo un total de:%d\n",i+1,DinerodeLinea[i]);
		
	}
	printf("La recaudacion en total de todas las lineas es de:%d",suma);
	return 0;
}

