#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc , char **argv)
{
	pid_t pidval =fork();
	int i,j;
	pid_t *turn;


	if (pidval == 0)
	{
		printf("entering child process \n");
		printf("sorted orderc:");
		for (i=2;i<argc-1;i++)
		{
			for (j=i+1;j<argc;j++)
			{
				if (strcmp(argv[i],argv[j])>0)
				{
					char *temp = argv[i];
					argv[i]=argv[j];
					argv[j] = temp ;
				}
			}
		}
		for (i=2 ; i<argc;i++)
		{
			printf("%s", argv[i]);
		}
		printf("EXITING Child process\n");

	}
	else if (pidval >0)
	{
		wait(turn);
		printf("entering parent proxcess");
		printf("unsorted order :");
		for (i=2 ; i<argc ; i++)
		{
			printf("%s" , argv[i]);
		}
		printf("exiting parent process");

	}
	else 
	{
		printf("unsuccessful fork attempt .....");
	}
	return 0;
}