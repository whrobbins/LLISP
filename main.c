#include <stdio.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char** argv) {

    /* Print Version and Exit Information */
    puts("LLISP");
    puts("Press Ctrl+c to Exit\n");

    while (1) {

        fputs("llisp> ", stdout);

        fgets(input, 2048, stdin);

        fputs(input, stdout);
    }

    return 0;
}
