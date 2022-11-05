#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter row size:");
	scanf("%d",&row);
	printf("Enter column elements:");
	scanf("%d",&col);

	//==================================================
	int a[row][col],small,big;
	//==================================================
    printf("Enter first matrix elements:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    big=a[0][1];
    small=a[1][0];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        	if(a[i][j]>big)
        	{
        		big=a[i][j];

			}
			if(a[i][j]<small)
			{
				small=a[i][j];
			}
		}


	}


    	printf("Greatest element is :""\n%d",big);
		printf("\n Smallest element is :""\n%d",small);


}