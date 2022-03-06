#include "mainwindow.h"
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}


int main(int argc, char *argv[])
{
    int arr[]={5,2,8,9,3,1,10,7}; //input array Please enter the input value in the array
    int size,i;
    size = sizeof(arr)/sizeof(arr[0]);
    //printf("Size is %d\n",size);
    std::sort(arr,arr+size);
    for (int i=0; i<size-1; i += 2)
            swap(&arr[i], &arr[i+1]);

    for(i=0;i<size;i++)
        printf("%d\t",arr[i]);
    printf("\n");


    return 0;// a.exec();
}
