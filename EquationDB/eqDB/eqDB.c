#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[])
{
	int arg = 0;
	while (arg < argc)
	{
		printf("Arg %d is %s\n", arg, argv[arg]);
		arg++;
	}
	if (strcmp(argv[1], "idealgas") == 0)
	{
		//User wants to solve a PV = NRT equation
	}
	else
	{
		printf("who the hekc knows what they want to solve");
	}
}
