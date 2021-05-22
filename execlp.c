#include <unistd.h>

int main() 
{
    char *binary_executable = "ls";
    char *arg1 = "-la";
    char *arg2 = ".";

    // System call to perform the ls -la operation in the
    // CWD (Current Working Directory)
    // NOTE: Since we are using execlp() we don't need the
    //       entire path for ls (a built-in executable)
    execlp(binary_executable, binary_executable, arg1, arg2, NULL);
 
    return 0;
}
