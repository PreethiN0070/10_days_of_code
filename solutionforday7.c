#include<stdio.h>
void main()
{
    int a,b,c,n,i,j;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=0,b=1;
         printf("%d\t",b);
        for(j=1;j<=i;j++)
        {
              c=a+b;
              printf("%d\t",c);
              a=b;
              b=c;
        }
            printf("\n");
    }
}
