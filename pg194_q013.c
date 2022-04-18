#include <stdio.h>

int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads a natural number as input (1, 2, 3 …)
    * 2. If input was not a natural number then print "Invalid input" - without quotes with no trailing newline
    * 3. Define a function is_sum_of_primes() that determines if a number can be expressed as sum of prime numbers
    * 4. Call is_sum_of_primes from main with the user input 
    * 5. In main, use the returned value to print "yes" if number is a sum of prime numbers else print "no" - no trailing newline */
   int num = 0, prime=-1;

    printf("Enter a number > 2: ");
    scanf("%d",&num);

    if (num > 2) {
        prime = is_sum_of_prime(num);
        if (prime) {
            printf("yes");
            return 0;
        }
    } else {
        printf("Invalid input");
    }
    if(!prime) {
        printf("No");
    }
    return 0;
}
