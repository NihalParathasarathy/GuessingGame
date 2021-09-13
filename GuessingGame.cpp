#include <iostream>
#include <stdio.h>
#include <stdlib>
#include <time.h>

int main () {
  int var = rand()%100;
  srand(time(NULL));
  cout << "Your random Number is: " << var << endl;
  
  return 0;
}
