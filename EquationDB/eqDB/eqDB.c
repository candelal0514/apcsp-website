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
void qmct(char in1[], char in2[], char in3[], char in4[])
{
	int q;
	int m;
	int c;
	int t;
	float answer;
	if (strcmp(in1,"blank")==0)
	{	//q = mct
		printf("Solving for q...<br>");
		sscanf(in2,"%d",&m);
		sscanf(in3,"%d",&c);
		sscanf(in4,"%d",&t);
		answer = m * c * t;
		printf("The answer is %f Joules<br>",answer);
	}
	else if (strcmp(in2,"blank")==0)
	{	//m = q/ct
		printf("Solving for m...<br>");
		sscanf(in1,"%d",&q);
		sscanf(in3,"%d",&c);
		sscanf(in4,"%d",&t);
		printf("q = %d<br>",q);
		printf("c = %d<br>",c);
		printf("t = %d<br",t);
		answer = q/(c*t);
		printf("The answer is %f grams<br>",answer); 
	}
	else if(strcmp(in3,"blank")==0)
	{	//c = q / (mt)
		printf("Solving for c...<br>");
		sscanf(in1,"%d",&q);
		sscanf(in2,"%d",&m);
		sscanf(in4,"%d",&t);
		answer = q / (m * t);
		printf("The answer is %f Joules per degree gram Celsius<br>",answer);
	}
	else if(strcmp(in4,"blank")==0)
	{	//t = q/ mc
		printf("Sovling for t..<br>");
		sscanf(in1,"%d",&q);
		sscanf(in2,"%d",&m);
		sscanf(in3,"%d",&c);
		answer = q / (m*c);
		printf("The answer is %f degrees Celsius<br>",answer);
	}
	else
	{
		printf("Something went wrong");
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
		printf("trying to solve for first thermodynamic law<br>");
		//char q[];
		//char m;
		//char c;
		//char t;

		//sscanf(argv[2],"%s",&q);
		//sscanf(argv[3],"%s",&m);
		//sscanf(argv[4],"%s",&c);
		//sscanf(argv[5],"%s",&t);
		qmct(argv[2], argv[3], argv[4], argv[5]);
	}

	else
	{
		printf("error");
	}
}
