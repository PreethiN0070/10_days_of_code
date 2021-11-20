#include<stdio.h>
void main()
{
 int a[10],i,n;
 printf("enter the number of array elements\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("the reversed array is:");
 for(i=n-1;i>=0;i--)
 {
 printf("%d\t",a[i]);
 }
}
