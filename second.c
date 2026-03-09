#include <stdio.h>

int main() {
    int i, n;
    // Initialize first and second terms
    int t1 = 0, t2 = 1;
    // Initialize the next term (3rd term)
    int nextTerm = t1 + t2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle 0 or negative terms
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

