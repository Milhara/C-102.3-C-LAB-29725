#include <stdio.h>
#include <stdlib.h>

int main()
{
       int no1;
       printf("Enter an integer :");
       scanf("%d",&no1);

       if(no1 % 2==0)
        printf("The number is even :%d\n",no1);

       else
        printf("The number is odd :%d\n",no1);
    return 0;
}
