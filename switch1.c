#include<stdio.h>
#define x 2
#define y 5
#define z 7

void main()
{
//    int y=5,z=3;
    switch(x+y+z)
    {
    case x:
        printf("case 1 execute");
        break;
    default:
        printf("nthi malto");
        break;
    case y:
        printf("case 2 execute");
        break;
    case z:
        printf("case 10 execute");
        break;
    }
}
