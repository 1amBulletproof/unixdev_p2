#include <sys/file.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *logfile = "logfile";

void
main (int argc, char *argv[])
{
	int fd;
	int i;
	char buffer[80];

	if ((fd = open (logfile, O_CREAT | O_WRONLY | O_APPEND, 0600)) < 0)
	{
		printf ("%s: cannot open or create %s for appending(%d)\n", argv[0], logfile, getpid());
		exit (1);
	}
	for (i=0; i<10000; i++)
	{
		sprintf (buffer, "%d - %s: this is #%d\n",getpid(), argv[0], i);
		write (fd, buffer, strlen(buffer));
	}
	close (fd);
	exit (0);
}
