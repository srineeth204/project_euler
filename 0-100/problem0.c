#include <stdio.h>

int main() {
    long long sum = 0;

    for (int i = 1; i <= 790000; i+=2) {
        long long square = (long long)i*i;
        
        sum += square;
    }

    printf("%lld\n", sum);

    return 0;
}