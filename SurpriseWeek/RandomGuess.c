#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, count;
    char choice;

    srand(time(0));

    do {
        number = rand() % 100 + 1; 
        count = 0; 
        printf("\nWelcome to the Number Guessing Game!\n");
        printf("I have selected a number between 1 and 100. Can you guess it?\n");
        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            count++; 
            if (guess < number) {
                printf("Too low! Try again.\n");
            } else if (guess > number) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", count);
            }
        } while (guess != number);
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y');
    printf("Thank you for playing! Goodbye.\n");
    return 0;
}
