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

    for(int i = 0; i <= height - 1; i++) {

        for(int j = height; j > i + 1; j--) {
            printf("%c", space);
        }
            for(int k = 0; k <= i + 1; k++) {
                printf("%c", hash);
            }
        printf("\n");
    }
}