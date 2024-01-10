#include <assert.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *fd=fopen("Hello.txt", "w");
  for (int i=1; i<argc; i++){
    fputs(argv[i], fd);
    fputs(" ", fd);
  }
  fclose(fd);
  return EXIT_SUCCESS;
}
