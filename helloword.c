#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello World!\n");
    printf("hello pig\n");
    //冒泡排序
    int a[10] = {11,2,3,4,5,6,7,8,22,10};
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    //快速排序
    int a1[10] = {11,2,3,4,5,6,7,8,22,10};
    int low,high,key,i1,j1;
    low = 0;
    high = 9;
    key = a1[low];
    while(low<high)
    {
        while(low<high && a1[high]>=key)
        {
            high--;
        }
        a1[low] = a1[high];
        while(low<high && a1[low]<=key)
        {
            low++;
        }
        a1[high] = a1[low];
    }
    a1[low] = key;
    printf("\n");
    for(i1=0;i1<10;i1++)
    {
        printf("%d ",a1[i1]);
    }
    
    return 0;
}
