#include<stdio.h>
void main()
{
    int choice;
    printf("\tMenu of the resturant\n");
    printf("\t1..choco\n");
    printf("\t2..jelly\n");
    printf("\t3..gems\n");
    printf("\t4..kurkure\n");
    printf("\t5..silk\n\n");
    printf("press your choice and get the utility\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("this is your choco");
        break;
    case 2:
        printf("this is your jelly");
        break;
    case 3:
        printf("this is your gems");
        break;
    case 4:
        printf("this is your kurkure");
        break;
    case 5:
        printf("this is your silk");
        break;
    default :
        printf("utilty is not in stock");
        break;
    }
}
