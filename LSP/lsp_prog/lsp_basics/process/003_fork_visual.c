#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void print_process_info(int level) {
    // Indentation to visualize process hierarchy
    for (int i = 0; i < level; i++) {
        printf("    "); // Four spaces for each level
    }
    printf("Process ID: %d; Parent ID: %d\n", getpid(), getppid());
}

int main() {
    int level = 0; // This variable helps track the level of hierarchy.

    printf("1: Starting with the parent process:\n");
    print_process_info(level);

    // First fork
    pid_t pid1 = fork();
    if (pid1 == 0) {
        // This is the child process
        level++;
        printf("\nFork 1: Child process created.\n");
    } else {
        // This is the parent process
        printf("\nFork 1: Parent process continues.\n");
    }
    print_process_info(level);

    // Second fork
    pid_t pid2 = fork();
    if (pid2 == 0) {
        // Child of the current process
        level++;
        printf("\nFork 2: Child process created.\n");
    } else {
        printf("\nFork 2: Parent process continues.\n");
    }
    print_process_info(level);

    // Third fork
    pid_t pid3 = fork();
    if (pid3 == 0) {
        // Child of the current process
        level++;
        printf("\nFork 3: Child process created.\n");
    } else {
        printf("\nFork 3: Parent process continues.\n");
    }
    print_process_info(level);

    sleep(1);  // Sleep to see the output more clearly
    printf("Hello from Process ID: %d\n", getpid());
    return 0;
}



























































































