#include <stdio.h>
#include <string.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int j,i;
    for(j=0;j<=4;j++)
    {
         printf("%d\n",arr[j]);
    }
    for (i=0;i<=5;i++)
    {
        if (arr[i] ==4)
         {
              printf(" the maximum number is %d in position %d \n",arr[4],arr[i]);
         }
        else if(arr[i] <=0)
        {
             printf(" the minumum number is %d in position %d \n",arr[0],arr[i]);
        }
        else
        {
           continue;
        }
    }
}
