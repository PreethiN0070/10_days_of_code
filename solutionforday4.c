#include<stdio.h>
void main()
{
    int arr[5],i,pos,key;
    printf("enter the array elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key element\n");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(key==arr[i])
        {
            pos=i;
        }
    }
    printf("element found and the index position of key element is %d",pos);
}
