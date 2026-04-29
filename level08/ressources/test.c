#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	open("/tmp/ts", 0, 014435162522);
	open("/tmp/ts", O_RDONLY, S_);
}