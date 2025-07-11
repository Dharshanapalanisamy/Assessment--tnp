#include <stdio.h>
int main() {
    int price[5], max=0, prof;
    printf("Enter prices :\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &price[i]);
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            prof = price[j]-price[i];
            if (prof>max)
                max=prof;
        }
    }
    printf("Maximum Profit = %d\n", max);
    return 0;
}
