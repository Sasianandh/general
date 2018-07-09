#include<stdio.h>
void main()
{
  int n,i,a,b[100],c,sum=2,j,k=1,t=0;
  scanf("%d",&n);
  b[0]=2;
  for(i=3;i<=n;i++)
  {
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            t=1; break;
        }
    }
  if(t==0)
  {
  b[k]=i; k++; 
  }
  else
  t=0;
}
for(i=1;i<k;i++)
{
    sum=sum+b[i];
    for(j=0;j<k;j++)
    {
        if(sum==b[j])
        c++;
    }
}
printf("%d",c);
}
