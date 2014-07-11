#include <stdio.h>
#include <unistd.h>

void
serve(void)
{
	sleep(1);
}

int
main(void)
{
	for (;;)
	{
		serve();
	}
}
