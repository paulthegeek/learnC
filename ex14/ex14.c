#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_letters(char arg[], int string_length);


void print_arguments(int argc, char *argv[])
{
  int i = 0;

  for(i = 0; i < argc; i++)
  {
    print_letters(argv[i], strlen(argv[i]));
  }
}

void print_letters(char arg[], int string_length)
{
  int i = 0;

  for(i = 0; i <= string_length; i++)
  {
    char letter = arg[i];

    if(isalpha(letter) || isblank(letter))
    {
      printf("'%c' == %d ", letter, letter);
    }
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
  return 0;
}
