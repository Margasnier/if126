#include <assert.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

void exit_if(int condition, const char *prefix)
{
    if (condition) {
        perror(prefix);
        exit(EXIT_FAILURE);
    }
}

int main(int argc, char *argv[])
{
  exit_if(argc < 2, "Syntaxe: write <fichier> [contenu...]";
  FILE *fd=fopen(argv[1], "w");
  for (int i=2; i<argc; i++)
    fputs(argv[i], fd);
  fclose(fd);
  return EXIT_SUCCESS;
}
