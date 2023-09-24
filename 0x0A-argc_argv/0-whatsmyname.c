#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
int main(void)
{
    char path[1024];
    ssize_t path_len = readlink("/proc/self/exe", path, sizeof(path) - 1);

    if (path_len != -1)
    {
        path[path_len] = '\0';
        printf("%s\n", path);
    }
    else
    {
        fprintf(stderr, "Error: Failed to retrieve program name.\n");
        return 1;
    }

    return 0;
}
