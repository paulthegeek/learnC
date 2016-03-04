#include <stdio.h>

int main(int argc, char * argv[])
{
  int distance = 100;
  float power = 2.345;
  double super_power = 56789.4532;
  char first_name[] = "Paul";
  char middle_name[] = "Ryan";
  char last_name[] = "Jackson";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have a first name %s.\n", first_name);
  printf("I have a middle name %s.\n", middle_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole is %s %s %s.\n", first_name, middle_name, last_name);

  return 0;
}
