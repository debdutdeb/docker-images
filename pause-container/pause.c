#include <stdio.h>
#include <unistd.h>

int main
(int argc, char ** argv, char ** envp)
{
    for (int i = 0; ; i++) {
        printf("\rCount at %i", i);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}