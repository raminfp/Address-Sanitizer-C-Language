// Author : Ramin Farajpour Cami
// usage : gcc -fsanitize=address -g use_after_free.c
// ./a.out


#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  int *ptr;
  ptr = (int *)malloc(sizeof(ptr));
  *ptr = 0;
  free(ptr);
  return *p;
}
