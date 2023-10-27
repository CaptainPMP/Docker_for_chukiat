#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    int pid;
    int status;
    
    printf("Parent: PID %d and PPID %d, and waiting for my child process to terminate.\n", getpid(), getppid());
    
    pid = fork();
    
    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed\n");
        return -1;
    } else if (pid == 0) { /* child process */
        printf("I'm the child with PID %d and PPID %d, about to call ps using execlp\n", getpid(), getppid());
        execlp("ps", "ps", NULL);
    } else { /* parent process */
        // Wait for the child to complete
        wait(&status);
        if (WIFEXITED(status)) {
            printf("Parent: I see my child completed.\n");
        }
    }

    return 0;
}
