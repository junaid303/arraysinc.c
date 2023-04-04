#include<stdio.h>
int main()
{
    int arr[] = {10, 65, 11, 5, 66, 99}, temp;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        break;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}