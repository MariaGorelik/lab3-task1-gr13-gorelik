#include <stdio.h>
#include <stdlib.h>
#include "prime_twins.h"

int main(int argc, char *argv[]) {
    int limit;

    if (argc != 2) {
        printf("Usage: %s <limit>\n", argv[0]);
        return 1; // Returning a non-zero error code
    }

    limit = atoi(argv[1]); // Converting a string to an integer

    if (limit <= 0) {
        printf("Limit must be a positive integer.\n");
        return 1; // Returning a non-zero error code
    }

    printTwinPrimes(limit);

    return 0;
}
