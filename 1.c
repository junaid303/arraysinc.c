/*
Arrays :
AN array is a collection of items of same data type stored at contiguos memory locations.
Array Index always with 
*/

#include<stdio.h>
int main()
{
    
    int teamage[10] = {22,23,49,19,21,20,20,18,17,35};
    
    printf("%d\n", teamage[3]);
    printf("%d\n", teamage[9]);
    printf("%d\n", teamage[10]);

    for (int i=0; i<10; i++)
    {
        printf("%d  ", teamage[i]);
    }
    printf("\n");
    return 0;
}