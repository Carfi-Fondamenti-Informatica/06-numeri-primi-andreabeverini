#include "lib.h"

bool numprimi (int a) {
  bool risultato=1;
  for (int i=2; i<a; i++) {
    if (a%i==0) {
      return risultato; 
    }
  }
  risultato=0;
  
  return risultato;
}
