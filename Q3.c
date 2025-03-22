/* Q3: Home Value Calculation */
#include <stdio.h>
#include <math.h>

int main(void) {
    int popularity, size;
    long long homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;
    printf("Home value is: %lld TL\n", homeValue);

    return 0;
}
