#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=n;i>=2;i=i-2)
    {
        printf("%d ",i);

    }
    return 0;
}

