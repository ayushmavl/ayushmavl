#include<stdio.h>
int main()
{
    int n,arr[100],max;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value;");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
       
    }
    printf("the maximum value:%d",max);
    return 0;
}
