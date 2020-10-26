#ifndef POKEMON_STRUCT_H
#define POKEMON_STRUCT_H

struct Pokemon {
  char name[256];
  int pokedex;
  int friendship;
};

struct Pokemon *new_Pokemon(char *n, int i, int friendship);

void print_Pokemon(struct Pokemon *p);

#endif
