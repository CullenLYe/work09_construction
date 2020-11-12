#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "construction.h"

int main() {

  srand(time(NULL));

  struct Pokemon *Eevee;
  struct Pokemon *Infernape;
  struct Pokemon *Gogoat;
  struct Pokemon *Roserade;
  struct Pokemon *Crobat;

  Eevee = new_Pokemon("Eevee    ", 325, rand()%256);
  Infernape = new_Pokemon("Infernape", 534, rand()%256);
  Gogoat = new_Pokemon("Gogoat   ", 531, rand()%256);
  Roserade = new_Pokemon("Roserade ", 515, rand()%256);
  Crobat = new_Pokemon("Crobat   ", 535, rand()%256);

  print_Pokemon(Eevee);
  free(Eevee);
  print_Pokemon(Infernape);
  free(Infernape);
  print_Pokemon(Gogoat);
  free(Gogoat);
  print_Pokemon(Roserade);
  free(Roserade);
  print_Pokemon(Crobat);
  free(Crobat);

  return 0;

}
