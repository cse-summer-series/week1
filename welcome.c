#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  if(argc < 2) {
    printf("Try running with ./welcome your-name\n");
    return 1;
  }
  char* name = argv[1];
  int length = strlen(name);
  printf("Hi %s, your name is %d characters long according to strlen.\n", name, length);
  return 0;
}
