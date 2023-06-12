#include <stdio.h>
#include <stdlib.h>

int main()
{
       int no1;
       printf("Enter an integer :");
       scanf("%d",&no1);

       switch (no1 % 2)

         {
             case 1:
                  printf(" %d is an odd\n",no1);

            break;


            case 0:
                  printf(" %d is an even\n",no1);

            break;


         }



    return 0;
}
