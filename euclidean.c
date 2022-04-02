#include <stdio.h>


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int a,b;
    printf("Enter the value for a:\n");
    scanf("%d",&a);
    printf("Enter the value for b:\n");
    scanf("%d",&b);


    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));


}
