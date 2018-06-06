#include <stdio.h>
#include <string.h>

//this code represents a demo equation for pressure,volume, and temperature (PV=nRT)

int pos = 1;
int P;
int V;
int n;
int R = 8.314;
int T;
int answer;
char varlist[5] = {'P', 'V', 'n', 'T', '\0'};

int calculator(int var)
{
  if (var == 1)
  {
    answer = (n*R*T)/V;
  }
  if (var == 2)
  {
    answer = (n*R*T)/P;
  }
  if (var == 3)
  {
    answer = (P*V)/(R*T);
  }
  if (var == 4)
  {
    answer = (P*V)/(n*R);
  }
  return answer;
}

int stringcomp()
{
  char varselect[1];

  printf("Which variable would you like to solve for? (P, V, n, or T)\n");
  scanf("%s", varselect);

  if (strcmp(varselect, &varlist[0]))
  {
    return 1;
  }
  if (strcmp(varselect, &varlist[1]))
  {
    return 2;
  }
  if (strcmp(varselect, &varlist[2]))
  {
    return 3;
  }
  if (strcmp(varselect, &varlist[3]))
  {
    return 4;
  }
}

int othervalues(int var)
{
  if (var == 1)
  {
    printf("What is your V value?\n");
    scanf("%d", V);
    printf("What is your n value?\n");
    scanf("%d", n);
    printf("What is your T value?\n");
    scanf("%d", T);
  }
  if (var == 2)
  {
    printf("What is your P value?\n");
    scanf("%d", P);
    printf("What is your n value?\n");
    scanf("%d", n);
    printf("What is your T value?\n");
    scanf("%d", T);
  }
  if (var == 3)
  {
    printf("What is your P value?\n");
    scanf("%d", P);
    printf("What is your V value?\n");
    scanf("%d", V);
    printf("What is your T value?\n");
    scanf("%d", T);
  }
  if (var == 4)
  {
    printf("What is your P value?\n");
    scanf("%d", P);
    printf("What is your V value?\n");
    scanf("%d", V);
    printf("What is your n value?\n");
    scanf("%d", n);
  }
}
int main()
{
  int x = stringcomp();
  if (x == 1)
  {
    pos = 1;
  }
  if (x == 2)
  {
    pos = 2;
  }
  if (x == 3)
  {
    pos = 3;
  }
  if (x == 4)
  {
    pos = 4;
  }
  othervalues(pos);
  answer = calculator(pos);
  printf("Your answer is %d\n", answer);
}
