/*

Author  : Vidyadhar Bendre
Email   : vidyadhar.bendre@gmail.com
Data    : 9 November, 2023

Purpose : To print a countdown from 10 to 0 using a while loop.

Description:
- The program initializes the variable 'i' with the value 10.
- It then enters a while loop that continues as long as 'i' is greater than or equal to 0.
- Within the loop, it prints the current value of 'i' and decrements 'i' by 1 in each iteration.
- After the loop, a newline is printed for better formatting.
- The output of the program is a countdown from 10 to 0.

*/

#include <stdio.h>

int main() {

    int i=10;
    while (i>=0){
        printf(" %d", i);
        i--;
    }
    printf("\n");

    return 0;
}


// The output of the program is shown below

/*

 10 9 8 7 6 5 4 3 2 1 0


*/
