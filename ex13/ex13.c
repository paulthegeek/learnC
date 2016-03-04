#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc != 2)
  {
    printf("ERROR: You need one argument. \n");
    return 1;
  }

  int i = 0;
  int uppercase_A = 65;
  int uppercase_Z = 90;

  for(i = 0; argv[1][i] != '\0'; i++)
  {
    char letter = argv[1][i];
    if(letter >= uppercase_A && letter <= uppercase_Z)
    {
      letter = letter + 32;
    }
    printf("Letter: %c\n", letter);
    switch(letter)
    {
      case 'a':
        printf("%d: 'A'\n", i);
        break;

      case 'e':
        printf("%d: 'E'\n", i);
        break;

      case 'i':
        printf("%d: 'I'\n", i);
        break;

      case 'o':
        printf("%d: 'O'\n", i);
        break;

      case 'u':
        printf("%d: 'U'\n", i);
        break;

      case 'y':
        if(i > 2)
        {
          printf("%d: 'Y'\n", i);
        }
        break;

      default:
        printf("%d: %c is not a vowel\n", i, letter);
    }
  }
  return 0;
}
