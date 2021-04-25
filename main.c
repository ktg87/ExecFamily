//
//  main.c
//  ExecFamily
//

#include <unistd.h>
#include <stdio.h>

int main()
{
    char *binary_path = "/bin/ls";
    char *arg1 = "-l";
    char *arg2 = "-a";
    char *arg3 = ".";
    
    // System call to perform the ls -la operation in the
    // CWD (Current Working Directory)
    
    printf("Getting ready to run execl.\n");
    execl(binary_path, binary_path, arg1, arg2, arg3, NULL);
    
    return 0;
    
}
