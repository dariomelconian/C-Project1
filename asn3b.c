/* CS2211a 2020 */
/* Assignment 03 */
/* Dario Melconian */
/* 251044493 */
/* dmelconi */
/* 10/20/20 */

#include <stdio.h>

// this program takes the sum after taking the modulo of values from 1 to the inputted value
// it then prints this value depending on modulo between numerator and denominator up to inputted value


int main() {

    // declaration of integer variables
    int sum, denominator, input, counter;

    // while not done
    while(1) {

        // ask for input from user; and take in their integer as value c
        sum = 0;
        printf("Input? ");
        scanf("%d", &input);

        // if input == 0
        if (input == 0) {

            // escape while loop, terminate
            break;
        }

        // if input is not 0, create loop from 1 to the input
        for (int numerator = 1; numerator <= input; numerator++) {

            // initialize counter to 0
            counter = 0;

            // loop through from 2 to the value of e, comparing the two integers
            for (denominator = 2; denominator <= numerator; denominator++) {

                // if e mod b is equal to 0, increment counter d
                if (numerator % denominator == 0) {

                    // increment it
                    counter++;
                }

                // if d is 1, add e to existing a (initially at 0), and this adds e's everytime d == 1.
                if (counter == 1) {

                    // summation for e each time counter == 1
                    sum = sum + numerator;
                }
            }
        }
        // print final total of a
        printf("The final total is: %d\n", sum);
    }
    return 0;
}

