#include <stdio.h>
int main() {
    int age,Res;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 0 || age > 101)
        Res = -1;
    else if (age <= 5)
        Res = 0;
    else if (age <= 12)
        Res = 1;
    else if (age <= 19)
        Res = 2;
    else if (age <= 50)
        Res = 3;
    else if (age <= 60)
        Res = 4;
    else
        Res = 5;
    printf("%d\n",Res);
    return 0;
}
