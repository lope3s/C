#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void get_random_number(void);

int main(int argc, char *argv[]) {
  const int NOW = time(NULL);
  srand(NOW);

  if (argc == 2) {
    char *received_value = argv[1];

    int conversion = atoi(received_value);

    if (conversion == 0) {
        printf("Expect a number of times to roll the dice, %s is not a number.\n", received_value);
        return 0;
    }

    for (int i = 0; i < conversion; i++) {
      get_random_number();
    }
    return 0;
  }

  get_random_number();
  return 0;
}

void get_random_number(void) {
  int random = (rand() % 6) + 1;
  printf("You rolled: %d\n", random);
}
