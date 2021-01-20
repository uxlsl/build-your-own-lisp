#include <stdio.h>

static char input[2048];

int main(int argc, char **argv)
{

    puts("Lispy Version 0.0.0.1");
    puts("Prest ctrl+c to Exit\n");

    while (1)
    {

        /* Output our prompt */
        fputs("lispy> ", stdout);

        /* Read a line of user input of maximum size 2048 */
        fgets(input, 2048, stdin);

        /* Echo input back to user */
        printf("No you're a %s", input);
    }

    return 0;
}
