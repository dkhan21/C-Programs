#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("argv      | %p\n", (void*)&argv);

    for(int f = 0; f < argc; f++){
        printf("argv[%d]   | %p\n", f, (void*)&argv);

    }

    printf("\n");

    for (int a  = 0; a < argc; a++){
        printf("argv[%d]: %s\n", a, argv[a]);
        int v;
        for(v = 0; argv[a][v] != '\0'; v++){
            printf("argv[%d][%d]: %c   |  %p\n", a, v, argv[a][v], (void*)&argv[a][v]);
        } 
        if(argv[a][v] == '\0'){
            printf("argv[%d][%d]: \\0   |  %p\n", a, v, (void*)&argv[a][v]);
        }
    }


    return 0;
}
