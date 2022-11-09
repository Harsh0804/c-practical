#include <stdio.h>
int sort(int a[], int n)
{
    int i, j, b;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("The sort values of the array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
 int search(int a[], int n, int key){
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("The element is present at index %d", i);
            break;
        }
    }
    if (i == n)
    {
        printf("The element is not present in the array");
    }
    return 0;

 }
  
int sumeet(int a[], int n){
    int i;
    printf("The reverse of the array is: ");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;

}
int main()
{
    int arr[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the value of arr[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The values of the array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    sumeet(arr, 10);
    sort(arr, 10);
    search(arr, 10, 5);
    
}