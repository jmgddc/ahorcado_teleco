#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/msg.h>
#include <string.h>
#include <unistd.h>

int main() { 
  int i;
  for(i=0;i<3;i++){
  printf("Limpiando en %d...\n",3-i);
  sleep(1);
  }
  system("clear");
  
  return 0; 
} 
