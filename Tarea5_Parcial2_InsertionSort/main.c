#include <stdio.h>
#include <stdlib.h>
#define N 10
void InsertionSort(int A[N]);
void ImprimeArreglo(int A[N]);

int main()
{
    int A[N]={10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
    InsertionSort(A);
    ImprimeArreglo(A);
}
void InsertionSort(int A[N])
{
    int p,i,aux;
    for(i=0;i<N;i++)
    {
        printf("%d,",A[i]);
    }
    printf("\n");
    for(p=1;p<N;p++)
    {
        for(i=p;i>0 && A[i]<A[i-1];i--)
        {
            aux=A[i];
            A[i]=A[i-1];
            A[i-1]=aux;
        }
    }
}
void ImprimeArreglo(int A[N])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d,",A[i]);
    }
}
