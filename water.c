#include <stdio.h>
#include <cs50.h>

int main(void) {

    printf("Minutes: ");
    int user = get_int();

    int bottles = user * 12;

    printf("Bottles: %i\n", bottles);
}