#include<stdio.h>
int main()
{
    int i, n,temp, j, arr [5];
    printf("\n Enter the number of elements : ");
    scanf("%d", &n);
    printf("\n Enter the elemets ");
    for(i = 0; i < n;i++)
    scanf("%d", &arr [i]);
    for(i = 0; i < n; i++)
    scanf("%d", &arr [i]);
    for(i = 0; i < n; i++)
    scanf("%d", &arr [i]);
    for(i = 0; i < n; i++)
    {
        for (j = 0; j<n-i; j++)
        {
            if(arr[j] > arr [j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr [j+1]= temp;
            }
        }
    }
    printf("\n The array sorted in ascending order is : \n");
    for(i = 0; i < n; i++)
    printf("\n %d", i, arr[i]);
    return 0;
}