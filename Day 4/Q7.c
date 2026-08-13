/*Q7: Write a program to swap two numbers without using a third variable.


Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>

int main() {
    int a;
    int b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("before swapping: a = %d, b = %d\n", a, b);
    // Swapping the values of a and b
    a = a + b; // Step 1: Add both numbers and store the result in a
    b = a - b; // Step 2: Subtract the new value of a by b to get the original value of a
    a = a - b; // Step 3: Subtract the new value of b from the new value of a to get the original value of b
    printf("after swapping: a = %d, b = %d\n", a, b);
    return 0;
        
}

