#include <stdio.h>
int main() {
   short a = 10;
   double b = 4.65;
   printf("Size of variable a : %d\n",sizeof(a));
   printf("Size of an expression : %d\n",sizeof(a+b));
   int s = (int)(a+b);
   printf("Size of explicitly converted expression : %d\n",sizeof(s));
   return 0;
}
