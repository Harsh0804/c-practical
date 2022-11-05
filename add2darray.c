#include<stdio.h>

int main()
{
    int row,col;
    printf("Enter row size:");
    scanf("%d",&row);
    printf("Enter column size:");
    scanf("%d",&col);

    int a[row][col],b[row][col],c[row][col],i,j;
    //========================================================
    printf("Enter first matrix elements:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //===========================================================

    printf("Enter second matrix elements:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //=================================================================

    printf("first matrix elements are::");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    //================================================================

    printf("second matrix elements are::");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",b[i][j]);
        }
         printf("\n");
    }

    //===========================================================================
    printf("addition are ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
         printf("\n");
    }









}