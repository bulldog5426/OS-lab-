#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	pid_t pidval = fork();
	if (pidval ==0)
	{
		printf("PID of child process : %d \n",getpid());
		printf("PPID of child process : %d \n",getpid());
	}
	else if (pidval>0)
	{
		printf("PID of parent process : %d\n",getpid() );
		printf("PPID of parent process: %d \n", getpid());
	}
	else {
		printf("fork failed ");
	}
	return 0;
}