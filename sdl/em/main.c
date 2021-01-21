#include "compiler.h"
#include "np2.h"

int main(int argc, char *argv[])
{
	char *_argv[2];

	char _argv0[] = "emnp21kai";
	char _argv1[] = "Floppy-FreeDOS-SE3-LHA.D88";
	_argv[0] = _argv0;
	_argv[1] = _argv1;

	return np2_main(2, _argv);
}
