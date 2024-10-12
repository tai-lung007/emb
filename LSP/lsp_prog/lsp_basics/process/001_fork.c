#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int pid;

	printf("fork demonstration \n");
	pid= fork();
	if(0==pid)
	{
	printf("\n child process --> %d %d %d\n ",pid,getpid(),getppid());
	}
	else
	{
	printf("parent process-->%d %d %d \n",pid,getpid(),getppid());
	
	}
	return 0;
}


