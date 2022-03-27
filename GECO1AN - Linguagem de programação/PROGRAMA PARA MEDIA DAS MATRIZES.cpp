/* Algoritmos e linguagem

- Arranjos multidimensionais - matrizes

Um arranjo multidimensional é representado na forma:
<tipo da variável><nome da variável>[<Numero de elementos da dimensao 1>]
                                    [<Numero de elementos da dimensao 2>]
                                    [<Numero de elementos da dimensao 3>]
Exemplo: Declarar uma matriz A de ordem 3x4 (A3x4)de numeros inteiros

         int A[3][4];
         A[1][2]=6;              
         
Imprimindo  os elementos da matriz A

#define     NCOL 4
#define     NLIN 5

int main(void)
{    
    int i,j;
    .
    .
    .
    for (i=0;j<NLIN;i++)
    {
    for (j=0;j<NCOL;j++)  
    {
        printf("%d",A[i][j])
    }
    printf("\n");
}

*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>
#include <conio.h>
#define     NLIN 3
#define     NCOL 4


int main(void)
{    
    int i,j;
    int A[3][4],B[4][3];    
    float media,somamedia;
    somamedia=0;

    
    for (i=0;i<NLIN;i++)
    {
    for (j=0;j<NCOL;j++)  
         {
         printf("Digite o elemento da linha %d, ", i+1);
         printf("coluna %d",j+1);
         printf(" = ",j);
         scanf("%d",& A[i][j]);
         }
         printf("\n");   
    }
    printf("Matriz resultante:");
    printf("\n\n"); 
    for (i=0;i<NLIN;i++)
    {
         for (j=0;j<NCOL;j++)  
         {
         printf("  %d",A[i][j]);
         }
         printf("\n\n");
    } 
    printf("Matriz transposta:");
    printf("\n\n"); 

    for (i=0;i<NCOL;i++)
    {
         for (j=0;j<NLIN;j++)  
         {
         printf("  %d",A[j][i]);
         }
         printf("\n\n");
    } 
////////////////////////////////////////////////////matriz A linha 2 zerada
     for (j=0;j<NCOL;j++)
    {
          A[1][j]=0;  
    }
        printf("Matriz A (Linha 2 zerada) :");
    printf("\n\n"); 
    for (i=0;i<NLIN;i++)
    {
         for (j=0;j<NCOL;j++)  
         {
         printf("  %d",A[i][j]);
         }
         printf("\n\n");
    } 
///////////////////////////////////////////////////matriz b media   
         A[i][j]=B[i][j];
     for (i=0;i<NLIN;i++)
    {
          somamedia=somamedia+B[i][2];
    }
    	media=somamedia/NLIN;
        printf("Matriz B (Media da linha 3) :");
        printf("\n\n"); 

        printf("  %2.3f",media);
        printf("\n\n");
///////////////////////////////////////////////////calcular A x B

getch();
}
