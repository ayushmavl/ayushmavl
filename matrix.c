#include<stdio.h>
int main()
{
 int i,j,arr[10][10],r,c;
printf("enter the number the rows:");
scanf("%d",&r);
printf("enter the number the column:");
scanf("%d",&c);
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        printf("arr[%d][%d]=",i,j);
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
    {
       
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}


