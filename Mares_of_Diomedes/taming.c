#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int		main(void)
{
	while (42)
	{
		if (!fork())
		{
			we_are_horses();
			sleep(2);
		}
		else
			sleep(2);
	}
	return (0);
}
