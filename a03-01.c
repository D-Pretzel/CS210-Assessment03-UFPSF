/** a03-01.c
* ===========================================================
* Name:
* Section:
* Project: Assessment 3, Problem 1
* ===========================================================
*/

#include <stdio.h>

int nthMultipleOf7(int N) {
    // Recursively calculate the nth posiitve odd number
    if (N == 1) {
        return 7;
    } else {
        return 7 + nthMultipleOf7(N - 1);
    }
}


int main() {
    // The following is test code that you can use/modify
    //int num = 2;
    //printf("nthMultipleOf7(%d) = %d\n\n", num, nthMultipleOf7(num));

    return 0;
}