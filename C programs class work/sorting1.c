#include <stdio.h>

int main()
{
    int a[500],i,j,k,x;
    printf("Enter the number of data to be sorted:");
    scanf("%d",&x);
    
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(j=x;j>0;j--)
    {
        for(i=0;i<(j-1);i++)
        {
            if(a[i]>a[i+1])
            {
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
        }
    }
    
    for(i=0;i<x;i++)
    {
        printf("%d\n",a[i]);
    }


    return 0;
}
