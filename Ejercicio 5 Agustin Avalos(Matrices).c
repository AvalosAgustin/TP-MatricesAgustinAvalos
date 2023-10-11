#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int alumnos[100][3]={{0},{0}};
	int i=0,j=0, desicion;

	float promedio=0;
	
	for(i=0;i<100;i++)
	{
		printf("El numero del legajo del alumno es: %d\n", i+1);
	
		for(j=0;j<3;j++)
		{
			printf("Ingrese La nota del trimestre %d \n",j+1);
			scanf("%d",&alumnos[i][j]);
			if(alumnos[i][j]>10 || alumnos[i][j]<0)
			{
				while(alumnos[i][j]>10 || alumnos[i][j]<0)
				{
					printf("Ingrese nuevamente La nota del trimestre %d \n",j+1);
					printf("La nota tiene que ser (igual a 1 o mayor y igual que 10 o menor)");
					scanf("%d",&alumnos[i][j]);
				}
				
			}
			
			
			
		}
		
	}

	printf("Desea corregir una nota mal ingresada?\n");
	printf("1=si\n");
	printf("2=no\n");
	scanf("%d",&desicion);
	if( desicion>2 || desicion<1)
	{
		while(desicion>2 || desicion<1)
		{
			printf("Desicion incorrecta\n");
			printf("Porfavor ingrese 1(si) o 2(no)\n");
			scanf("%d",&desicion);
			
		}
		
	}
	while(desicion!=2)
	{
		
		printf("Ingrese el numero de legajo del alumno que desea correjir\n");
		scanf("%d",&i);
		
		printf("El numero del legajo del alumno es: %d\n", i);
		
		printf("Ingrese el trimestre que desea correjir\n");
		printf("1=Primer trimestre\n");
		printf("2=Segundo trimestre\n");
		printf("3=Tercero trimestre\n");
		
		scanf("%d",&j);
		
		
		printf("Ingrese la nota\n");
		scanf("%d",&alumnos[i-1][j-1]);
		
		printf("Desea corregir una nota mal ingresada?\n");
		printf("1=si\n");
		printf("2=no\n");
		scanf("%d",&desicion);
		
	}

	
	printf("Nº de legajo    1º trimestre   2º trimestre     º3 trimestre        Promedio\n");
	for(i=0;i<100;i++)
	{
		printf("%d",i+1);
		for(j=0;j<3;j++)
		{
			printf("                %d ",alumnos[i][j]);
			promedio=promedio+alumnos[i][j];
	
		}
		
		promedio=promedio/3;
		
		printf("              %.2f ",promedio);
		
		printf(" \n");
		promedio=0;
	}
	system("pause");
	return 0;
}

