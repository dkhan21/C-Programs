#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char * envp[]){
    int i = 0;
    printf("Before: \n");
    while(envp[i]){
        printf("%s \n", envp[i]);
        i++;
    }

    if(i == 0){
        exit(1);
    }

     for (int k = 0; k < i; k++) {
        for (int f = 0; f < i - 1; f++) {
            char *t1 = strtok(envp[f], "=");
            char *t2 = strtok(envp[f + 1], "=");

            int a = strcmp(t1, t2);
            if (a > 0) {
                char *temp = envp[f];
                envp[f] = envp[f + 1];
                envp[f + 1] = temp;
            }
        }
    }
    printf("\nAfter\n");
    i= 0;
    while (envp[i])
    {
        printf(" %s\n", envp[i]);
        i++;
    }
    
    return 0;
}