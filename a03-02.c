/** a03-02.c
* ===========================================================
* Name:
* Section:
* Project: Assessment 3, Problem 2
* ===========================================================
*/

#include <stdio.h>

// YOUR CODE GOES HERE
int mySequence(int N) {
    if (N == 1) {
        return 22;
    } else if (N == 2) {
        return -1;
    } else {
        return mySequence(N - 1) + mySequence(N - 2);
    }
}

int main() {
    // The following is test code that you can use/modify
    //int seq = 5;
    //printf("mySequence(%d) = %d\n\n", seq, mySequence(seq));

    return 0;
}