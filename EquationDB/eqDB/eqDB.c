#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pvnrt(const char solve,float var1,float var2,float var3){
	float p; //Atmospheres
	float v; //Liters
	float n; //moles of gas
	const float r = 0.0821; // J / (mol * k)
	float t; //kelvins
	float answer;
	printf("User attempting to solve PV = nRT equation <br>");

	if (solve == 'P')
	{	/*P = ((nRT)/V) */
		printf("User wishes to solve for 'P'...<br>");
	//	p = solve;
		v = var1;
		n = var2;
		t = var3;
		printf("User inputted variables:<br>");
		printf("v = %f<br>",v);
		printf("n = %f<br>",n);
		printf("t = %f<br>",t);
		printf("\nr = %f<br>",r);
		answer = (n * r * t) / v;
		printf("The answer is %f atmospheres<br>",answer);
	}
	else if (solve == 'V')
	{	//V = ((nRT)/P
		printf("User wishes to solve for 'V'...<br>");
		p = var1;
	//	v = solve;
		n = var2;
		t = var3;
		answer = (n * r * t) / p;
		printf("The answer is %f liters", answer);
	}
	else if (solve == 'N')
	{	//n = PV/RT
		printf("User wishes to solve for 'n'...<br>");
		p = var1;
		v = var2;
	//	n = solve;
		t = var3;
		answer = (p * v ) /(r * t );
		printf("The answer is %f moles",answer);
	}
	else if (solve == 'T')
	{	//T = PV/nR
		printf("User wishes to solve for 'T'...<br>");
		p = var1;
		v = var2;
		n = var3;
	//	t = solve;
		answer = (p * v) / (r * n);
		printf("The answer is %f Kelvins", answer);
	}
	else
	{
		printf("Did not choose a variable to solve for<br>");
	}
}
void qmct(char q, char m, char c, char t)
{

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
		known variables because R is a constant */
		const char solvefor = *argv[2];
		float in1;
		sscanf(argv[3], "%f",&in1);
		float in2;
		sscanf(argv[4],"%f",&in2);
		float in3;
		sscanf(argv[5],"%f",&in3);
		pvnrt(solvefor, in1, in2, in3);
	}

	else if (strcmp(argv[1], "thermo") == 0)
	{
		printf("trying to solve for first thermodynamic law");
		int q;
		int m;
		int c;
		int t;
		char solve;
		printf(sscanf(argv[2],"%d"));
		if (sscanf(argv[2],"%d") == 0)
		{
			sscanf(argv[2],"%c",&solve);
			sscanf(argv[3],"%d",&m);
			sscanf(argv[4],"%d",&c);
			sscanf(argv[5],"%d",&t);
		}
	}

	else
	{
		printf("error");
	}
}
