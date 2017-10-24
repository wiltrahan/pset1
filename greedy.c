#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float change;
    int coins = 0;
    int amount = 0;

    do {
        printf("O hai! How much change is owed? ");
        change = get_float();
        //do this while change is invalid. needs to be a positive float.
    }
    while (change < 0);

    change *= 100.00;
    amount = (int) round(change);

    while(amount > 0) {
        if(amount >= 25) {
            coins++;
            amount -= 25;
        } else if(amount >= 10) {
            coins++;
            amount -= 10;
        } else if(amount >= 5) {
            coins++;
            amount -= 5;
        } else {
            coins++;
            amount -= 1;
        }

    }
    printf("%i\n", coins);
}