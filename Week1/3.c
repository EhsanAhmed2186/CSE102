#include <stdio.h>

int main() {
    int a_ = 50;
    int m_2 = 10;
    // int 3_c = 33; // Invalid: cannot start with digit
    // int this variable = 20; // Invalid: cannot have space in name

    int subtraction = a_ - m_2;
    printf("Subtraction of valid variables: %d\n", subtraction);

    /*
    Invalid variables:
    3_c  -> starts with digit
    this variable -> contains space
    */
    return 0;
}