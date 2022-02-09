#include <iostream>

int main(){

int fib[60];

fib[0] = 0;
fib[1] = 1;

int i = 2;

for (i; i < 60; i++){
  fib[i] = fib[i-1] + fib[i-2];
}


for (int x = 0; x < 60; x++){
  std::cout << fib[x] << std::endl;
}




  return 0;
}
