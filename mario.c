#include <stdio.h>
#include <cs50.h>

int main(void) {

    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while(height < 0 || height > 23);

    char hash = '#';
    char space = ' ';

    //first loop sets height. i basically sets up the rest of the loops
    for(int i = 1; i <= height; i++) {

    //second loop prints spaces based on height & i
        for(int spaces = height; spaces > i; spaces--) {
            printf("%c", space);
        }
    //third loop prints hashes based on i from first loop
        for(int leftHash = 1; leftHash <= i; leftHash++) {
            printf("%c", hash);
        }
    //double space to start second pyramid
        printf("  ");

    //right pyramid
        for(int rightHash = 1; rightHash <= i; rightHash++) {
            printf("%c", hash);
        }

        printf("\n");
    }
}