#include <iostream>


int main(){
int n = 0;
int x = 0;
std::cout << "Please enter in an integer value: " << std::endl;
std::cin >> n;

while (n < 0 or n > 100){
  std::cout << "Please re-enter: " << std::endl;
  std::cin >> n;

}
n = n * n;
std::cout << "Number squared is " << n << std::endl;

  return 0;
}
