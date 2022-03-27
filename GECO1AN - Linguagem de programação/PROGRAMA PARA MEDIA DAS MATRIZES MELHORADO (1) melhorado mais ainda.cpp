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
    int i,j,n,m,;
    int A[3][4],B[4][3],C[3][3];    
    float media,somamedia,somaprod;
    somamedia=0;
    media=0;
    somaprod=0;
    
    
    for (i=0;i<3;i++)
    {
    for (j=0;j<4;j++)  
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
    for (i=0;i<3;i++)
    {
         for (j=0;j<4;j++)  
         {
         printf("  %d",A[i][j]);
         }
         printf("\n\n");
    } 
////////////////////////////codigo da AxB
    for (i=0;i<3;i++)
    {
    for (j=0;j<3;j++)  
         {
         C[i][j]=A[i][j]*B[i][j]; 
         }   
         
    }    
///////////////////////////////////////////////////////////////////////////// MTRIZ TRANSPOSTA
    printf("Matriz transposta de A:");
    printf("\n\n"); 



    for (i=0;i<4;i++)
    {
         for (j=0;j<3;j++)  
         {
         printf("  %d",B[i][j]);
         }
         printf("\n\n");
    } 
////////////////////////////////////////////////////matriz A linha 2 zerada
     for (j=0;j<4;j++)
    {
          A[1][j]=0;  
    }
        printf("Matriz A (Linha 2 zerada) :");
    printf("\n\n"); 
    for (i=0;i<3;i++)
    {
         for (j=0;j<4;j++)  
         {
         printf("  %d",A[i][j]);
         }
         printf("\n\n");
    } 
///////////////////////////////////////////////////matriz b media 3 linha  
     for (j=0;j<3;j++)
    {
          somamedia=somamedia+B[2][j];
    }
    	media=somamedia/3;
        printf("Matriz B (Media da linha 3) :");
        printf("\n\n"); 

        printf("  %2.3f",media);
        printf("\n\n");
///////////////////////////////////////////////////calcular A x B
    printf("Matriz AxB:");
    printf("\n\n"); 
    for (i=0;i<3;i++)
    {
         for (j=0;j<3;j++)  
         {
         printf("  %d",C[i][j]);
         }
         printf("\n\n");
    } 
////////////////////////////////////////////////////MATRIZ TRANSPOSTA DE C
    printf("Matriz transposta de C:");
    printf("\n\n"); 



    for (i=0;i<3;i++)
    {
         for (j=0;j<3;j++)  
         {
         printf("  %d",C[j][i]);
         }
         printf("\n\n");
    } 
////////////////////////////////////////////////////// PRINT DA DETERMINANTE    
      for (j=0;j<3;j++)
    {
          somamedia=somamedia+B[2][j];
    }
    	media=somamedia/3;
        printf("Matriz B (Media da linha 3) :");
        printf("\n\n"); 

        printf("  %2.3f",media);
        printf("\n\n");   
    
    
    
getch();
}
