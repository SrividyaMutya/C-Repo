#include<stdio.h>
int main()
{
    int N,result;
    scanf("%d",&N);
    int A=0;
    int B=1;
    for(int i=1;i<=N;i++)
    {
        printf("%d ",A);
        result=A+B;
        A=B;
        B=result;
    }
}