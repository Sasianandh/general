#include<stdio.h>
int main()
{
    long a,b,c,d,s=0,i,x=0;;
    scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
    if(b<=a)
    {
    for(i=a;i>=0;i=i-b)
    {
        
        
        if(i<=c)
            break;
        else
        {
         s=s+i;
            x++;
        }
    }
    }
    //printf("%ld",s);
    if(a<d)
    {
    while(s<=d)
    {
        s=s+c;
        if(s<=d)
         x++;
    }
    printf("%ld",x);
    }
    else
        printf("0");
    return 0;
}
