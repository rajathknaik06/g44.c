/*Emma is intrigued by a program designed to calculate the sum of numbers provided by a user. The program repeatedly prompts the user to input a number. The entered number is then added to a running total.



Write a program using the do-while loop that calculates the sum of all numbers to achieve the final result.



Note: The last line consists of zero, indicating the end of the inputs.

Input format :
The input consists of the numbers (excluding 0) in separate lines.

The last line of input consists of "0" indicating the end of the inputs.

Output format :
The output prints the sum of the entered numbers.*/

#include <stdio.h>
int main() {
    int number, sum = 0;
    do {
        scanf("%d", &number);
        sum += number;
    }
    while(number != 0);
    printf("Sum = %d",sum);
    return 0;
}
