// Author : Ramin Farajpour Cami
// usage : gcc -fsanitize=address -g uninitialized_memory_access.c
// execute : ./a.out
// errors message of ASAN

#include <stdlib.h>
#include <stdio.h>


int main(int argc, char **argv) {

  char *ptr = (char*) malloc(100);
  char c = ptr[0];
  return 0;

}
