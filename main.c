
#include <sys/stat.h> //open
#include <fcntl.h> // open
#include <stdio.h>
#include "get_next_line.h"

int main ()
{
	int fd,l;
	char *line;

	fd = open("text.txt", O_RDONLY);
	while (1 == (l = get_next_line(fd, &line)))
	{
		printf("%d ",l);
    	printf("%s\n", line);
    	free(line); 
	}
	printf("%d ",l);
	printf("%s\n", line);
	free(line); 
}