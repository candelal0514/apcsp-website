#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int pvnrt(const char solve,int var1,int var2,int var3){
	int p; //Atmospheres
	int v; //Liters
	int n; //moles of gas
	const double r = 0.0821; // J / (mol * k)
	int t; //kelvins
	printf("User attempting to solve PV = nRT equation <br>");
	if (solve == 'P')
	{	/*P = ((nRT)/V) */
		printf("User wi	shes to solve for 'P'...<br>");
	//	p = solve;
		v = var1;
		n = var2;
		t = var3;
		return (n*r*t)/v;
	}
	else if (solve == 'V')
	{	//V = ((nRT)/P
		printf("User wishes to solve for 'V'...<br>");
		p = var1;
	//	v = solve;
		n = var2;
		t = var3;
		return (n * r * t) / p;
	}
	else if (solve == 'N')
	{
		printf("User wishes to solve for 'n'...<br>");
		p = var1;
		v = var2;
	//	n = solve;
		t = var3;
	}
	else if (solve == 'T')
	{
		printf("User wishes to solve for 'T'...<br>");
		p = var1;
		v = var2;
		n = var3;
	//	t = solve;
	}
	else 
	{
		printf("none of the values are matching up<br>");
	}
}

int main(int argc, char* argv[])
{
	int arg = 0;
	while (arg < argc)
	{
		printf("Arg %d is %s <br>", arg, argv[arg]);
		arg++;
	}
	if (strcmp(argv[1], "idealgas") == 0)
	{
		/*Trying to solve for a PV = NRT equation
		Only needs a variable to solve for and three
		known va/riables because R is a constant */
		const char solvefor = *argv[2];
		const char in1 = *argv[3];
		const char in2 = *argv[4];
		const char in3 = *argv[5];
		int answer = pvnrt(solvefor, in1, in2, in3);
		printf("%d is the answer",answer);
	}
	else
	{
		printf("who the hekc knows what they want to solve");
	}
}
