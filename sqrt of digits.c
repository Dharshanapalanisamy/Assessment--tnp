#include <stdio.h>
int main() {
    int sq, digit, sqres = 0;
    printf("Enter number: ");
    scanf("%d", &sq);
    while (sq!= 0) {
        digit=sq % 10;
        sqres += digit * digit;
        sq /= 10;
    }
    printf("Sum of squares = %d\n", sqres);
    return 0;
}
