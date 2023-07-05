#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
 
int main(void)
 {
int a=10;
int x=360;
  pid_t pid = fork();
 
  if(pid == 0) {
    printf("Child => PPID: %d PID: %d\n", getppid(), getpid());
//    exit(EXIT_SUCCESS);
  }
  else if(pid > 0) {
    printf("Parent => PID: %d ppid::::%d\n", getpid(),getppid());
    printf("Waiting for child process to finish.\n");
//    wait(NULL);
    printf("Child process finished.\n");
  }
  else {
    printf("Unable to create child process.\n");
  }
 printf("print the values:%d\n",a);
printf("print the values:%d\n",x);
return EXIT_SUCCESS;
}



