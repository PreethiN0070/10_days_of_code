#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,count;
    char str[100];
    printf("enter the number \n");
    scanf("%d",&n);
    printf("enter the string\n");
    scanf("%s",str);

    for(i=0;i<6;i++)
        {
    str[i]=='a'||'i'||'e'||'o'||'u';
       count++;

    }
    if(count%2==0)
    {
        printf("2");
    }
    else
    {
    printf("1");
    }
}
