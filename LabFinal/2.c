#include <stdio.h>

int main() {
    int physics, chemistry, biology, math, computer;
    printf("Enter marks for Physics, Chemistry, Biology, Mathematics, Computer: ");
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &math, &computer);

    int total = physics + chemistry + biology + math + computer;
    float percentage = total / 5.0;

    printf("Percentage: %.1f%%\n", percentage);

    if (percentage < 70.0) {
        percentage += 10.0;
        printf("Percentage after adding 10.0: %.1f%%\n", percentage);
    }

    char grade;
    if (percentage >= 90) grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else if (percentage >= 40) grade = 'E';
    else grade = 'F';

    printf("Grade: %c\n", grade);

    return 0;
}
