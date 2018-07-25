#include<stdio.h>
int main()
{
    int a[100],n,i,j,t=0,b=0,c=0,x,y;
    scanf("%d",&n);
    if(n%2!=0)
    {
        x=(n/2)+1;
        y=n/2;
        
    }
    else
    {
        x=n/2;
        y=n/2;
    }
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]==2)
    b++;
    else if(a[i]==0)
    c++;
    else
    {
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
            t=1; break;
            }
        }
        if((t==0)&&(i%2!=0))
        b++;
        if((t==1)&&(i%2==0))
        c++;
    }
    t=0;
}
//printf("%d%d\n",b,c);
if(b==x&&c==y)
printf("True");
else
printf("No");

return 0;
}
