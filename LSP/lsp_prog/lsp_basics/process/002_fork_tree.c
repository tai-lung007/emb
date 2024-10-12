#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{

	pid_t pid1,pid2,pid3;


	printf("1. this is pid : %d \n",getpid());
	pid1=fork();
	printf("2. this is pid : %d \n",getpid());
	pid2=fork();
	printf("3. this is pid : %d \n",getpid());


}
