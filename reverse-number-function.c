/* A C program that reads from the user input a positive integer and that finds and prints out the reverse of that number, using a function. 
For example, if the user input is 56745 then the program should output 54765.
*/

#include <stdio.h>
int reverse_number(int n);
int main(void){
    int n, reverse;
    
    printf("Please enter a number:\n");
    scanf("%d", &n);
    
    reverse = reverse_number(n);
    
    printf("The reverse number of %d is %d.", n, reverse);
    
    
    return(0);
    
}
int reverse_number(int n) {
    int remainder, reverse_number;
    reverse_number = 0;
    
    while (n != 0) {
        remainder = n%10;
        reverse_number = reverse_number * 10 + remainder; //I am building my reverse #
        n = n/10; //update my n to somehow get to the next digit of interest 
    }
    return(reverse_number);
    
}
