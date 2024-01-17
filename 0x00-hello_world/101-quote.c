#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void)
{
	if (write(STDERR_FILENO, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 60) != 60)
	{
		return (1);
	}
	return (0);
}
