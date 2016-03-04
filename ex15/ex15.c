#include <stdio.h>

int main(int argc, char *argv[]) {
  int ages[] = {23, 43, 12, 89, 2};
  char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  for(i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", names[i], ages[i]);
  }

  printf("---\n");

  int *current_age = ages;
  char **current_name = names;

  for(i = 0; i < count; i++) {
    printf("%s is %d years old.\n", *(current_name + i), *(current_age + i));
  }

  printf("---\n");

  for(i = 0; i < count; i++) {
    printf("%s is %d years old again.\n", current_name[i], current_age[i]);
  }

  printf("---\n");

  for(current_name = names, current_age = ages;
    (current_age - ages) < count;
    current_name++, current_age++) {
  printf("%s lived %d years so far.\n", *current_name, *current_age);
  }

  return 0;
}
