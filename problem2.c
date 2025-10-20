#include <stdio.h>

int main(void) {
    long long a = 1, b = 2, sum = 0;

    while (a <= 4000000) {
        if (a % 2 == 0)
            sum += a;
        long long next = a + b;
        a = b;
        b = next;
    }

    printf("%lld\n", sum);
    return 0;
}
