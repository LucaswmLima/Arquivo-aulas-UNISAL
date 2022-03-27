#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define NLIN 10

int n,i;
float notas[NLIN],somatoria,maior,media;

void vetorgoku(int n,float notas[NLIN])
{
     for(i=0;i<10;i++)
     {
     printf("Insira os valores do vetor");
     scanf("%f",& n);
     }
}
void vetorvegeta(int n,float notas[NLIN])
{
     for(i=0;i<10;i++)
     {
     printf("%f",& notas[i]);
     }
}
void vetorbulma(int n,float notas[NLIN])
{
     for(i=0;i<10;i++)
     {
     somatoria=+notas[i];
     }
     media=somatoria/10;
     for(i=0;i<10;i++)
     {
     printf("%f",& notas[i]);
     }
}  
void vetorgohan(int n,float notas[NLIN])
{
       for(i=10;i>0;i--)
     {
     while(notas[*i]<maior)
     {
     maior=notas[*i];
     }
     printf("%f",& notas[i]);
}
}
void vetorpiccolo(int n,float notas[NLIN])
{
       for(i=10;i>0;i--)
     {
     if(notas[i]>notas[i-1] 
     {
     maior=notas[*i];
     }
     printf("%f",& notas[i]);
}
}
int main(void)
{

vetorgoku(int n,float notas[NLIN]);

system ("pause"); 

vetorvegeta(int n,float notas[NLIN]);

system ("pause"); 
                              
vetorbulma(int n,float notas[NLIN]);  

system ("pause");    
           
vetorgohan(int n,float notas[NLIN]);

system ("pause"); 

vetorpiccolo(int n,float notas[NLIN]);

getch();

}


