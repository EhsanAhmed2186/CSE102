#include <stdio.h>

int main() {
    float p_q_r = 40.0;
    // float 6x = 55.7; // Invalid: cannot start variable with a digit
    float _0 = 30.0;
    // float a b = 12.12; // Invalid: space not allowed in variable name

    float sum = p_q_r + _0;
    printf("Sum of valid variables: %.2f\n", sum);
    return 0;
}