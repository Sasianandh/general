#include<stdio.h>
int main()
{
    long a[10000],b[10000],i,j,k=0,n,sum=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
     for(i=0;i<n;i++)
    {
  for(j=0;j<n;j++)
    {
      if(i!=j)
      {
          sum=sum+a[j];
         }
  }
       b[k]=sum;
          k++;
         sum=0;
      
  }
          for(i=0;i<k;i++)
          {
             for(j=0;j<k;j++)
          {  
                 if(a[i]<a[j])
                 {
                     t=a[i];
                     a[i]=a[j];
                     a[j]=t;
          }
             }
          }
    printf("%d %d",a[0],a[n-1]);
    return 0;
}
