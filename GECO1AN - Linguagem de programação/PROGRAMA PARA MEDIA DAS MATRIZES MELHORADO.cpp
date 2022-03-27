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


int main(void)
{    
    int i,j,n,m,u,p;
    int A[n][m],B[m][n];    
    float media,somamedia;
    somamedia=0;
    media=0;

printf("Digite o numero de linhas da matriz A= ");
scanf("%d",& n);
printf("Digite o numero de colunas da matriz A= ");
scanf("%d",& m);
    
    for (i=0;i<n;i++)
    {
    for (j=0;j<m;j++)  
         {
         printf("Digite o elemento da linha %d, ", i+1);
         printf("coluna %d",j+1);
         printf(" = ",j);
         scanf("%d",& A[i][j]);
         B[j][i]=A[i][j];
         }
         printf("\n");   
         
    }
    printf("Matriz resultante:");
    printf("\n\n"); 
    for (i=0;i<n;i++)
    {
         for (j=0;j<m;j++)  
         {
         printf("  %d",A[i][j]);
         }
         printf("\n\n");
    } 
///////////////////////////////////////////////////////////////////////////// MTRIZ TRANSPOSTA
    printf("Matriz transposta:");
    printf("\n\n"); 



    for (i=0;i<m;i++)
    {
         for (j=0;j<n;j++)  
         {
         printf("  %d",B[i][j]);
         }
         printf("\n\n");
    } 
////////////////////////////////////////////////////matriz A linha 2 zerada
     for (j=0;j<m;j++)
    {
          A[1][j]=0;  
    }
        printf("Matriz A (Linha 2 zerada) :");
    printf("\n\n"); 
    for (i=0;i<n;i++)
    {
         for (j=0;j<m;j++)  
         {
         printf("  %d",A[i][j]);
         }
         printf("\n\n");
    } 
///////////////////////////////////////////////////matriz b media 3 linha  
     if (m>=3)
     {
     for (j=0;j<n;j++)
    {
          somamedia=somamedia+B[2][j];
    }
    	media=somamedia/n;
        printf("Matriz B (Media da linha 3) :");
        printf("\n\n"); 

        printf("  %2.3f",media);
        printf("\n\n");
      }
      else
      {
      printf("A matriz nao possui linha 3");
      }  
///////////////////////////////////////////////////calcular A x B



getch();
}
