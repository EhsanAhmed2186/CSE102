#include <stdio.h>

int main() {
    int physics = 03;
    int chemistry, biology, math, computer;

    printf("Enter marks for Chemistry, Biology, Mathematics, Computer: ");
    scanf("%d %d %d %d", &chemistry, &biology, &math, &computer);

    int total = physics + chemistry + biology + math + computer;
    float average = total / 5.0;
    float result = ((float)biology / chemistry) * (math - computer);

    printf("Total marks: %d\n", total);
    printf("Average marks: %f\n", average);
    printf("Result: %f\n", result);

    return 0;
}
