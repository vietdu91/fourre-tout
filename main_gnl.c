#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    //int fd = open("test", O_RDONLY);
    //int fd2 = open("test2", O_RDONLY);
    char *line = get_next_line(0);
    while (line != NULL && strcmp(line, "exit\n") != 0)
    {
        printf("line = %s", line);
        free(line);
        line = get_next_line(0);
        //printf("line = %s", line);
        //free(line);
        //line = get_next_line(fd2);
    }
    /*
    line = get_next_line(fd);
    while (line != NULL)
    {
        printf("line = %s", line);
        free(line);
        line = get_next_line(fd);
    }
    line = get_next_line(fd2);
    while (line != NULL)
    {
        printf("line = %s", line);
        free(line);
        line = get_next_line(fd2);
    }
    */
    printf("line = %s", line);
    free(line);
    return (0);
}
