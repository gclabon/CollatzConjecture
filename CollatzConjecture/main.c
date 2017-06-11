#include <stdio.h>
#include <stdlib.h>

//Collatz Conjecture - Start with a number n > 1. Find the number of steps it takes to reach one using the following process:
//  If n is even, divide it by 2. If n is odd, multiply it by 3 and add 1.
int main()
{
    int stepsTaken, startNum, currNum = 0;

    printf("Enter the start Number: \n");
    scanf(" %d", &startNum);
    currNum = startNum;

    while (currNum != 1){
        if(currNum % 2 == 0){
            currNum = currNum / 2;
            stepsTaken ++;
        } else {
            currNum = (currNum * 3) + 1;
            stepsTaken ++;
        }
    }
    printf("Steps taken in the Collatz Conjecture starting with %d is: %d", startNum, stepsTaken);
    return 0;
}
