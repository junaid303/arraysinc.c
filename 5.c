/*
print second Largest  and smallest number by using arrays 
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
        printf("Enter Element %d value : ",i);
        scanf("%d", &arr[i]);
    }
    int largestElement = arr[0], smallestElement = arr[0];// Assume first element is largest

    for (int i=1; i < arrLength; i++)
    {
        if (arr[i] > largestElement)
        {
            largestElement = arr[i];
        }
        if (arr[i] < smallestElement)
        {
            smallestElement = arr[i];
        }
    }
    printf("The largest Number is : %d\n", largestElement);
    printf("The Smallest Number is : %d\n", smallestElement);
    return 0;
}