#include "mainwindow.h"
#include <stdio.h>
int  robbingAmount(int *a, int size)
{
    int i,j,sum=0,max=0;
    for(j=0;j<size;j++)
    {
        for(i=j;i<size;i=i+2)
        {
            sum +=a[i];
        }
        if(sum>max)
            max = sum;
        sum = 0;
    }
  return max;
}
int main(int argc, char *argv[])
{
    int arr[]={1, 3, 4, 4, 3, 3, 7, 2, 3, 4, 5, 1};
    int size,result;
    size = sizeof(arr)/sizeof(arr[0]);

    result = robbingAmount(arr,size);

    printf("Total max robbed amount is %d\n",result);

    return 0;
}
