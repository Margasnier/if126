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
 
  FILE *fd=fopen(argv[1], "r");
  exit_if(fd == NULL, "ouverture fichier");
  int c;
  while((c = fgetc(fd)) != EOF){
    fputc(c, stdout);
  //  fputc('\n', stdout);
    
  }
  fclose(fd);
  return 0;
}
