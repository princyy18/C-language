#include<stdio.h>
void main()
{
    int x=10,y=20,c=30;

    switch(c)
    {
    case 10:
        printf("case 10 is execute");
        break;
    case 20:
        switch(x<y && x*y<0)
        {
        case 0:
            printf("condition false");
            break;
        case 1:
            printf("condition true");
            break;
        default:
            printf("not true and not false");
            break;
        }break; //it's neccessary to put break here to stop the case
    case 30:
        printf("hello");
        break;
    default:
        printf("not valid");
        break;
    }
}
