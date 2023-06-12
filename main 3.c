#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,choice;

    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice :");
    scanf("%d",&choice);

    printf("Enter two numbers :");
    scanf("%d %d ",&no1,&no2);

    switch (choice)
    {
    case 1:
        printf("Result :%d\n",no1+no2);
        break;

    case 2:
        printf("Result :%d\n",no1-no2);
        break;

    case 3:
        printf("Result :%d\n",no1*no2);
        break;

    case 4:
        printf("Result :%.2f\n",(float)no1/no2);
        break;

        default:
         printf("Invalid choice.\n");


    }

       return 0;
}
