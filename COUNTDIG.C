/*PROBLEM LEVEL : EASY
PROBLEM :FINDING LAST DIGIT OF AFTER CALCULATING POWER
PLATFORM : GeeksforGeeks
DATE : 10.03.2026
LANGUAGE : C
DES: Given a Positive integer n,count the number of digits in n that divides n evenly(without remainder).
return the total number of such didgits
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int r,n,cnt=0,i;
printf("\tNo of digits that divides n equally\n");
printf("Enter N:");
scanf("%d",&n);
i=n;
while(i>0){
r=i%10;
if(n%r==0)
cnt++;
i/=10;
}
printf("%d",cnt);
return 0;
}