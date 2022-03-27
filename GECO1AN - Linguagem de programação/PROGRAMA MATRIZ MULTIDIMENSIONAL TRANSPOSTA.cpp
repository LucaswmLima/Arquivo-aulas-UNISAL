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
    int i,j,linha,coluna;
    int A[3][4];
    
    linha=NLIN;
    coluna=NCOL;
    
    for (i=0;i<linha;i++)
    {
    for (j=0;j<coluna;j++)  
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
    for (i=0;i<linha;i++)
    {
         for (j=0;j<coluna;j++)  
         {
         printf("  %d",A[i][j]);
         }
         printf("\n\n");
    } 
    printf("Matriz transposta:");
    printf("\n\n"); 
    linha=NCOL;
    coluna=NLIN;
    for (i=0;i<linha;i++)
    {
         for (j=0;j<coluna;j++)  
         {
         printf("  %d",A[j][i]);
         }
         printf("\n\n");
    } 
getch();
}
