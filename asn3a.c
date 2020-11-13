/* CS2211a 2020 */
/* Assignment 03 */
/* Dario Melconian */
/* 251044493 */
/* dmelconi */
/* 10/20/20 */

#include <stdio.h>

int main() {

    int array[] = {12, 63, 44, 89, 3, 55, 73, 27, 37, 18, 23, 43, 85, 91, 23};

    printf("Size of array:  %d bytes", (int) sizeof(array));

    int size = sizeof(array) / sizeof(array[0]);
    printf("\nLength of array: %d elements", size);


    printf("\n");
    // Part 1:
    printf("\nPART 1: \nThe values store into the array are :\n");

    // create for loop to print entire array

    // create an integer to store the length of array
    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; ++i) {

        printf(" %d     ", array[i]);
    }


    printf("\n");
    // Part 2:
    printf("\nPART 2: \nThe values store into the array in reverse are :\n");

    // create for loop to print entire array in reverse
    for (int i = length - 1; i >= 0; --i) {

        printf(" %d     ", array[i]);
    }


    printf("\n");
    // Part 3:
    printf("\nPART 3: \nThe smallest value stored in the array is :\n");

    // transverse entire array finding lowest value; print out value & its position
    // create location where lowest current value can be stored
    int location = 0;

    for (int b = 1; b < length; b++) {
        if (array[b] < array[location]) {
            location = b;
        }
    }

    printf("value: %d at the %dth position from the left\n", array[location], location+1);


    printf("\n");
    // Part 4:
    printf("\nPART 4: \nThe sum (total) value of the array is :\n");

    // keep variable to calculate sum
    int sum = 0;

    // print the equation adding each element in array and print sum
    for (int i = 0; i < length; ++i) {

        // increase summation
        sum = sum + array[i];

        // to avoid extra (+) sign
        if (i < length-1) {
            printf("%d + ", array[i]);
        } else {
            printf("%d  ", array[i]);
        }
    }

    printf("equals: %d", sum);


    printf("\n");
    // Part 5:
    printf("\nPART 5: \nCopy the array into a new array, but in reverse order :\nOriginal array :\n");

    // original array
    for (int i = 0; i < length; ++i) {

        printf(" %d     ", array[i]);
    }

    printf("\nNew (Reversed) array :\n");

    // reversed array
    int i, j;
    i = length - 1;
    j = 0;

    int arrayReversed[length];

    while(i > j) {
        int temp = array[i];
        arrayReversed[i] = array[j];
        arrayReversed[j] = temp;
        i--;
        j++;
    }

    // print now-reversed array.
    for(i = 0; i < length; i++) {

        printf(" %d     ", arrayReversed[i]);
    }


    printf("\n");
    // Part 6:
    printf("\nPART 6: \nSwitch the first value in the array with the last value in the array :\nOriginal array : \n");

    // original array
    for (int i = 0; i < length; ++i) {

        printf(" %d     ", array[i]);
    }

    printf("\nChanged array :\n");
    // changed array
    int changedArray[length];

    // swap first and last position in array
    for (int i = 0; i < length; i++) {

        // copy elements of array into changedArray
        changedArray[i] = array[i];

        // swap only first with last
        if (i == 0 || i == length-1) {
            int first = array[0];
            changedArray[0] = array[length - 1];
            changedArray[length - 1] = first;
        }

        // print elements of changedArray
        printf(" %d     ", changedArray[i]);
    }


    printf("\n");
    // Part 7:
    printf("\nPART 7: \nSort the array in ascending order :\nOriginal array :\n");

    // print original array (which is now my changedArray)
    for (int i = 0; i < length; ++i) {

        printf(" %d     ", changedArray[i]);
    }

    printf("\nChanged array :\n");
    // changed (ascending array)

    // holding variable for switch
    int swap;
    // iterate through first compared element
    for (i = 0; i < length; ++i) {

        // iterate through second compared element
        for (j = i + 1; j < length; ++j) {

            // sort by ascending
            if (changedArray[i] > changedArray[j]) {

                swap =  changedArray[i];
                changedArray[i] = changedArray[j];
                changedArray[j] = swap;
            }
        }
    }

    // print new ascending array
    for (i = 0; i < length; ++i) {

        printf(" %d     ", changedArray[i]);
    }

    // end program
    return 0;
}  // class close
