#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char first_name[] = "Paul";
  char full_name[] = {
    'P', 'a', 'u', 'l', ' ',
    'R', ' ',
    'J', 'a', 'c', 'k', 's', 'o', 'n', '\0'
  };

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of first_name (char[]): %ld\n", sizeof(first_name));
  printf("The number of chars: %ld\n", sizeof(first_name) / sizeof(char));
  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
  printf("first_name = \"%s\" and full_name = \"%s\"\n", first_name, full_name);

  return 0;
}
