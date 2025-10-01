#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += i;
    }

    if (sum < n)
        printf("Smaller\n");
    else if (sum > n)
        printf("Bigger\n");
    else
        printf("Equal\n");

    return 0;
}
