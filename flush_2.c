#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int useNewline = 0; // Flag to control adding '\n'

    // Check if the program was run with a command-line argument
    if (argc > 1) {
        if (strcmp(argv[1], "-n") == 0) {
            useNewline = 1; // Set flag to add '\n'
        }
    }

    // Output messages based on the flag and without fflush
    if (useNewline) {
        fputs("STDOUT\n", stdout);
        fputs("STDERR\n", stderr);
    } else {
        fputs("STDOUT", stdout);
        fputs("STDERR", stderr);
    }

    return 0;
}
