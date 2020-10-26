#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "construction.h"

// Write a function that creates a new struct in heap memory.
// It should have parameters appropriate to your struct.
struct Pokemon *new_Pokemon(char *n, int i, int f) {

  struct Pokemon *np;

  np = malloc(sizeof(struct Pokemon));

  strncpy(np->name, n, sizeof(np->name)-1);
  np->pokedex = i;
  np->friendship = f;

  return np;

}

// Write a function that prints out variables of your struct type in a reasonable way.
void print_Pokemon(struct Pokemon *p) {

  printf("Pokemon: %s\tPokedex: #%d\tFriendship Level: %d\n", p->name, p->pokedex, p->friendship);

}
