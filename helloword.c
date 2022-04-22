#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello World!\n");
    printf("hello pig");
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
    return 0;
}
