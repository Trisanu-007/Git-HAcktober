#include<stdio.h>
int diff(int a,int b)
{
    int c =b-a;
    return c;
}
int main()
{
    int a = 5, b  = 10;
    printf("Sum is=%d",sum(a,b));
    printf("Difference is = %d",diff(a,b));
    return 0;
}