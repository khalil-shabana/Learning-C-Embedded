#include<stdio.h>
/* An example of pointer to function */
int ascending (int a, int b)
{
    if (a>b) return 1;
    else return -1;
}
int descending (int a, int b)
{
    if (a<b) return 1;
    else return -1;
}

void BubbleSort(int A[],int n)
{
    int (*ptf[])(int,int) = {ascending,descending};
    int i, j, temp, c;
    printf("Enter '0' for ascending and '1' for descending ... ");
    scanf("%d",&c);
    for (i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(ptf[c](A[j],A[j+1]) >0)
            {
            temp= A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            }
        }
    }
}
int main ()
{
    int i,A[]={3,2,1,5,6,4};
    BubbleSort(A,6);
    for (i=0;i<6;i++)
        { printf ("%d\t",A[i]); }

}
