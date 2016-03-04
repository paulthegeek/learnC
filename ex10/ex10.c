#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  int number_of_states = 4;
  char *states[] = {"California", "Colorado", "Oregon", "Washington"};

  for(i = 1; i < argc; i++)
  {
    printf("arg %d: %s\n", i, argv[i]);
  }

  for(i = 0; i < number_of_states; i++)
  {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
