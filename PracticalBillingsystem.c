#include <stdio.h>
int main()
{
    int Car = 1234567891;
    int Bike = 234567891;
    int Laptop = 345678910;
    int Phone = 45678910;
    int a,b,c,d;

    printf("Enter how many Car do you want\n");
    scanf("%d",&a);
    printf("Enter how many Bike do you want\n");
    scanf("%d",&b);
    printf("Enter how many Laptop do you want\n");
    scanf("%d",&c);
    printf("Enter how many Phone do you want\n");
    scanf("%d",&d);
 int P;

 P=(Car*a) + (Bike*b) + (Laptop*c) + (Phone*d);
 printf("Total is %d",&d , P);
 scanf("%d",&d);

 if(P>=100000000)
{
 printf("The discounted bill is %d\n", P - ((P * 11)/100));
}

 else if(P>=50000000)
{
 printf("The discounted bill is %d\n", P - ((P * 7)/100));
}

  return 0;


}




