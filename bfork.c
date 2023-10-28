#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#define MAX 20
#define PROCTIME 30

void createChildProcess(int childNumber) {
    int pid = fork();
    if (pid < 0) {
        fprintf(stderr, "Fork Failed\n");
        return;
    } else if (pid == 0) {
        // Child process
        printf("Child(%d) PID %d PPID %d, about to terminate in %d sec.\n", childNumber, getpid(), getppid(), PROCTIME);        sleep(PROCTIME);
        exit(0);
    }
}

int main() {
    printf("Parent: My PID is %d, and I'm creating child processes.\n", getpid());

    for (int i = 0; i < MAX; i++) {
        createChildProcess(i);
        sleep(1); // Wait for 1 second before creating the next child
    }
    for (int i = 0; i < MAX; i++) {
        wait(NULL); // Wait for all child processes to complete
        printf("Parent: I see my child #%d completed.\n", i);
    }

    return 0;
}