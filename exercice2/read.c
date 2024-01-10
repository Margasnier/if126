#include <assert.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *fd=fopen("argv", "r");
  int c = fgetc(fd);
  printf("%c\n",c);
  fclose(fd);
  return EXIT_SUCCESS;
}
