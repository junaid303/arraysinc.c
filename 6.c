/*
Bubble Sort Algorithm 
*/
#include<stdio.h>
int main()
{
    int arr[]= {10, 60, 100, 122, 133, 55};
    for (int i = 0; i < 6; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            printf("%d\t", arr[j]);

        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

/*
Expedted O/p : {10, 55, 60, 100, 122, 133}
Bubble Sort Algorithm 
      {10, 60, 122, 133, 55}



*/