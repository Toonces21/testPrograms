#include<stdio.h>

typedef struct adder{
  int (*addInt)();
} adder;


int addInt(int x, int y){
  return x + y;
}


int main(){
  adder test1;
  test1.addInt = addInt;
  printf("Adding 3 and 2: %d\n",test1.addInt(3,2));
}

