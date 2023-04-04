/*
 Check which number is Largest using array by given team age data

*/

#include<stdio.h>
int main()
{
    int arrLength;
    printf("Enter Number of Elements/Length of the Array : ");
    scanf("%d", &arrLength);
    
    int arr[arrLength];
    for(int i = 0; i < arrLength; i++)
    {
        printf("Enter Element %d value : ");
        scanf("%d", &arr[i]);
    }
    int largestElement = arr[0];// Assume first element is largest

    for (int i=0; i<10; i++)
    {
        if (arr[i] > largestElement)
        {
            largestElement = arr[i];
        }
    }
    printf("The largest Number is : %d\n", largestElement);
    return 0;
}