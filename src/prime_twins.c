//MariaGorelik
#include <stdio.h>
#include "prime_twins.h"

// A function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // A number less than or equal to 1 is not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // The divisor is found, the number is not simple
    }
    return 1; // The number is simple
}

// A function for printing all pairs of "twin" primes up to a given limit
void printTwinPrimes(int limit) {
    printf("Twin prime pairs up to %d are:\n", limit);
    for (int i = 2; i <= limit - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("(%d, %d)\n", i, i + 2);
        }
    }
}
