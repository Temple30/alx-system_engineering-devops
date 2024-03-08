#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    pid_t zombie_pid;
    int i;

    for (i = 0; i < 5; i++)
    {
        zombie_pid = fork();

        if (zombie_pid < 0)
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        else if (zombie_pid == 0)
        {
            // Child process
            exit(EXIT_SUCCESS);
        }
        else
        {
            // Parent process
            printf("Zombie process created, PID: %d\n", zombie_pid);
            sleep(1); // To allow the parent to print the message
        }
    }

    return (0);
}
