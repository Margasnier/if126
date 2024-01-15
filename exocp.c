#include <assert.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

#define MAX 50

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
 
  for(int i = 0; i < 5; i++){
    char buf[50];
    fgets(buf, MAX, fd);
    fputs(buf, stdout);
  //  fputc('\n', stdout);
    
  }
  fclose(fd);
  printf("\n");
  return 0;
}
