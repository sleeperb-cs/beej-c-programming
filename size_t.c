#include <stdio.h>

int main() {
    int a = 999;

    // %zu is the format specifier for type size_t

    printf("%zu\n", sizeof a);      // Prints 4 on my system
    printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system
    printf("%zu\n", sizeof 3.14);   // Prints 8 on my system

    // If you need to print out negative size_t values, use %zd

}
