#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handler(int);

int main
(int argc, char ** argv, char ** envp)
{
    if (SIG_ERR == signal(SIGTERM, &handler)) {
        perror("SIGTERM");
        return 1;
    }
    printf("My PID in this container is %d\nWaiting...\n", getpid());
    while (1)
        sleep(1);
    return 0;
}

void handler(int sig) {
    printf("SIGTERM ignored,\nStarting count..\n");
    for (int i = 0; ; i++) {
        printf("\r%i second%c", i, i > 1 ? 's' : 0);
        fflush(stdout);
        sleep(1);
    }
}