/* A C program that prompts the user to enter a positive integer (num) and then calls a function, 
to which you pass the value num, and which displays the shape of a parallelogram of that size using "*". */

#include <stdio.h> 
int printstars(int num); //has to know what functions to find before we go to main
int main(void) {
    int num, i, j;
    
    printf("Enter a positive interger:");
    scanf("%d", &num);
    
    if (num < 0) {
        num = num * -1; // makes it positive if input a negative number in scan
    }

    printstars(num);
    
    return(0);
    
}

/*PRINT STARS FUNCTION*/

int printstars(int num) {
    int i,j, g, spaces;
    spaces = num; 
    for (i=1; i <= num; i++) {
        for (g=1; g<=2*spaces; g++) {
            printf(" ");
        }    
        spaces = spaces - 1; //for the next row
        for (j=1; j <= num; j++) {
            printf("*");
        } 
        printf("\n");
    }
}
