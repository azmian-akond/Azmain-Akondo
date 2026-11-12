// Problem 01: Find the Largest Element in an Array
// Problem Statement:

// Write a C program to find the largest element in an array.

// Input:
// - First, take an integer n (number of elements).
// - Then take n integer values in an array.
// Output:

// - Print the largest element in the array.

// Example:
// Input:
// 5
// 10 25 7 40 15

// Output:
// Largest element = 40


// Constraints:
// - 1 ≤ n ≤ 100
// - Array elements can be positive or negative.
#include<stdio.h>
#include <stdlib.h>
int main(){
int arr [10],n;
printf (" Enter the numbers : ");

scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Largest element = %d",arr[0]);
for(int i=1;i<n;i++){
    if(arr[i]>arr[0]){
        arr[0]=arr[i];
    }
}   











    return 0;
}
