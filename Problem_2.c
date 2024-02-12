#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

int main(int argc, char *argv[]) {

    int opt;
    while ((opt = getopt(argc, argv, "cduf:s:")) != -1) {
        switch (opt) {
            case 'c':
            case 'd':
            case 'u':
                printf("Option is %c\n", opt);
                break;
            case 'f':
            case 's':
                printf("Filename is %s\n", optarg);
                break;
            case ':':
                printf("Option %c requires a value\n", optopt);
                break;
            case '?':
                printf("Unknown option: %c\n", optopt);
                break;
        }
    }

    for (; optind < argc; optind++) {
        printf("Argument: %s\n", argv[optind]);
    }

    return 0;
}
