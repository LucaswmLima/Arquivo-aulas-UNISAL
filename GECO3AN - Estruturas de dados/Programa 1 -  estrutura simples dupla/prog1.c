#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

int main()
{
	
	struct pessoa
	{	
	    char nome[51];
		float peso;
		float altura;
		float imc;

	};
	int i,j;
	struct pessoa v[N];
	for(i=0;i<N;i++)
	{
	printf ( "Digite o nome da %1.0i  pessoa: \n", j);
	scanf("%s" ,v[i].nome);
	printf ( "Digite o peso da %1.0i  pessoa: \n", j);
	scanf("%f" ,&v[i].peso);
	printf ( "Digite a altura da %1.0i  pessoa: \n", j);
	scanf("%f" ,&v[i].altura);
	v[i].imc=v[i].peso/(v[i].altura*v[i].altura);
	j++;
	system("cls");
	}
	
	for(i=0;i<N;i++)
	{
	printf ("O IMC de %s e %f \n\n", v[i].nome, v[i].imc ); 
	}
	
	
 getch ();

}

