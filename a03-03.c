/** a03-03.c
* ===========================================================
* Name:
* Section:
* Project: Assessment 3, Problem 3
* ===========================================================
*/

#include <stdio.h>

// YOUR CODE GOES HERE
int alternatingCubes(int N, int accum) {
    // Use tail recursion to return the sum of the first N integers cubed
    // If N is even multiply the term by negative 1
    // If N is odd don't

    if (N == 0) {
        return accum;
    } else if (N % 2 == 0) {
        return alternatingCubes(N - 1, accum - (N * N * N));
    } else {
        return alternatingCubes(N - 1, accum + (N * N * N));
    }
}

int main() {
    // The following is test code that you can use/modify
    //int value = 1;
    //int answer = alternatingCubes(value, 0);
    //printf("alternatingCubes(%d, 0) = %d\n\n", value, answer);

    return 0;
}