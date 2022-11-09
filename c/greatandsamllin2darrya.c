#include<stdio.h>
int main()
{
  int m, n, largest, smallest;
  int largrowloc, largcolumnloc, smallrowloc, smallcolumnloc;
  printf("Enter number of row and column: ");
  scanf("%d %d",&m,&n);
  int arr[m][n], i, j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  printf("Entered 2D Array:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  largest=arr[0][0];
  smallest=arr[0][0];

  // compare with all elements
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(largest<arr[i][j])
      {
        largest=arr[i][j];
        largrowloc=i;  
        largcolumnloc=j;   
      }

      if(smallest>arr[i][j])
      {
        smallest=arr[i][j];
        smallrowloc=i;  
        smallcolumnloc=j;  
      }
    }
  }
  printf("\n"); 
  printf("Largest element in array is %d in location arr[%d][%d]\n",
             largest, largrowloc, largcolumnloc);
  printf("Smallest element in array is %d in location arr[%d][%d]\n",
             smallest, smallrowloc, smallcolumnloc);

  return 0;
}