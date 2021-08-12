/* A C program that reads from the user input a positive integer n and prints out all prime numbers between 1 and n.  
Your program should use a function to check whether a particular number is prime and then call this function from within 
a loop that checks all numbers between 1 and n. */

#include <stdio.h> 
int is_it_prime(int number);

int main(void){
    int number, j;
    
    printf("Please enter a number:");
    scanf("%d", &number);

    printf("\"The prime numbers between 1 and %d are", number);
    
    for (j=1; j <= number; j++){
        is_it_prime(j); //called the prime function i created
    }
    
    printf(".\"");
    return(0);
    
}

/*PRIME FUNCTION*/

int is_it_prime(int j){
    int i, store;
    store=0;
    for (i=2; i<=j; i++) {
        if (j%i==0) {
            store = store + i;
        }
        if (j==store) {
            printf( " %d,", store);
        }
    }
    }
