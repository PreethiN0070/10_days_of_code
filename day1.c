#include<stdio.h>
void main()
{
    int i;


    int arr[5],n,count=0;
    printf("enter the numbers\n");
    for(i=0;i<5;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("enter the digit\n");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
       if(arr[i]== n)
        {
            count++;

        }
    }

    printf("the digit  frequency of given digit is %d",count);
}
