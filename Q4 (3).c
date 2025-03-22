/* Q4: Function Versions of Home Value Calculation */

#include <stdio.h>
#include <math.h>

// Part A: With return value
int computeHomeValue(int popularity, int size) {
    return (pow(popularity, 3) + pow(size, 2)) * 10000;
}

// Part B: Void function with internal scanf/printf
void computeHomeValueVoid(void) {
    int popularity, size;
    long long homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;
    printf("Home value is: %lld TL\n", homeValue);
}

int main(void) {
    int pop, sz;
    printf("Enter popularity: ");
    scanf("%d", &pop);

    printf("Enter size: ");
    scanf("%d", &sz);

    printf("Home value is: %d TL\n", computeHomeValue(pop, sz));

    computeHomeValueVoid();
    return 0;
}
