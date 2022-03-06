#include "mainwindow.h"
bool primeNum(int num)
{
    int i,flag=1;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }
    if(flag==0)
        return false;
    else
        return true;

}

int heptagonalPrime(int *a,int size)
{
    bool status;
    int i,j,count=0,loopsize,heptaNo;
    for(i=0;i<size;i++)
    {
        status = primeNum(a[i]);
        if(status)
        {
            loopsize = sqrt(a[i]);
            for(j=1;j<loopsize;j++)
            {
                heptaNo = 7*j*j -7*j+2;
                if(heptaNo==(2*(a[i])))
                {
                    count +=1;
                    break;
                }
                else if(heptaNo>(2*a[i]))
                    break;

            }

        }
    }
    return count;
}

int main(int argc, char *argv[])
{
    int arr[]={43,10, 71, 197, 463, 547, 953, 1471,1933, 2647, 2843, 3697};
    int size, count;
    size = sizeof(arr)/sizeof(arr[0]);
    count = heptagonalPrime(arr,size);
    printf("Total number of Heptagonal prime is %d\n",count);

    return 0;// a.exec();
}
