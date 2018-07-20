#include<stdio.h>
int main()
{
    long a[100],n,i,j,k=0,l,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(a[i]==j)
                k++;
        }
        if(k>s)
        {
        s=k;
        }
        }
    printf("%ld",s);
    return 0;
}
