/*
TOPIC : ARRAYS
PROBLEM LEVEL: EASY
PROBLEM: Find Largest Number in a Array
PLATFORM: Geeksforgeeks
DATE: 12.03.2026
LANGUAGE:C
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int arr[50],i,j,n,largest;
printf("Enter Number of Elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
largest=arr[0];
for(i=0;i<n;i++){
if(arr[i]>largest){largest=arr[i];}
}
printf("The Largest Number in a array is: %d",largest);
return 0;
}
