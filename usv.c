// program to understand the use of static variables
#include <stdio.h>
void func();
int main()
{
   
    func();
    func();
    func();
    return 0;
    
}
void func()
{
   int a=10;
   static int b=10;
   printf("a=%d,b=%d\n",a,b);
   a++;
   b++;
}
