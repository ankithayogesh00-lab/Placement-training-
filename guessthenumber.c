#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, max_attempts = 5, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // random number between 1 and 100

    printf("Welcome to the Number Guessing Game!
");
    printf("Guess the number between 1 and 100. You have %d attempts.
", max_attempts);

    while (attempts < max_attempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Congratulations! You guessed the correct number %d in %d attempts.
", number, attempts);
            break;
        } else if (guess < number) {
            printf("Too low! Try again.
");
        } else {
            printf("Too high! Try again.
");
        }
    }

    if (attempts == max_attempts && guess != number) {
        printf("Sorry, you've used all your attempts. The correct number was %d.
", number);
    }

    return 0;
}
