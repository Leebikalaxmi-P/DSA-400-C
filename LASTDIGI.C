/*

*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("/t FINDING LAST DIGIT:");
printf("Enter A:");
scanf("%d",&a);
printf("Enter B:"); scanf("%d",&b);
c = pow(a,b);
printf("Value of A^B : %d",c);
printf("Last Digit : %d",c%10);
return 0;
}