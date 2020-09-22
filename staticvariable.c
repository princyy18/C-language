#include<stdio.h>


int main()
{
   printf("value of c=%d",fun());
   printf("value of c=%d",fun());
   printf("value of c=%d",fun());

}
int fun()
{
    static int c=10;
    c++;
        return c;
}
