#include<stdio.h>
void main()
{
    int n,num,count=0,temp;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("enter a digit\n");
    scanf("%d",&n);
    while(num>0)
   {
temp=num;
    num=num%10;
    if(num==n)
    {
        count++;
    }
    num=temp/10;
    }

    printf("the digit frequency is %d",count);
}
