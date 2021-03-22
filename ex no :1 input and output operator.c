//choose any one

//1.first program

#include <stdio.h>
void main()
{
    char line[30];
    gets (line);
    puts (line);
}

//2.second program

#include<stdio.h>
void main()
{
    // defining a variable
    int i;
    /* 
        displaying message on the screen
        asking the user to input a value
    */
    printf("Please enter a value...");
    /*
        reading the value entered by the user
    */
    scanf("%d", &i);
    /*
        displaying the number as output
    */
    printf( "\nYou entered: %d", i);
}
