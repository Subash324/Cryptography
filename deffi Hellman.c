#include<stdio.h>
#include<math.h>
  int P = 23;
    int G = 9;
int power(int a, int b,int P)
{
    if (b == 1)
        return a;

    else
        return (((int)pow(a, b)) % P);
}


int main()
{
    int  x, a, y, b, ka, kb;


    printf("The value of P  and G are given as: %d and %d\n", P,G);





    printf("enter a private key a :\n");
    scanf("%d",&a);
    printf("Alice key : %d\n", a);
    x = power(G, a, P);
    printf("enter a private key b:\n");
    scanf("%d",&b);

    b = 3;
    printf("Bob key : %d\n\n", b);
    y = power(G, b, P);

    ka = power(y, a, P);
    kb = power(x, b, P);

    printf("Alice is : %d\n", ka);
    printf("Bob is : %d\n", kb);

    return 0;
}
