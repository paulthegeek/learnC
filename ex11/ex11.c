#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  int number_of_states = 4;
  char *states[] = {"California", "Colorado", "Oregon", "Washington"};

  while(i < argc)
  {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  i = 0;
  while(i < number_of_states)
  {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  return 0;
}
