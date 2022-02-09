#include <iostream>

int main(){
int myData[10];
int x = 0;
for (x; x < 10; x++){
  myData[x] = 1;
}
int i, v;
do{

for (x = 0; x < 10; x++){
  std::cout << myData[x] << std::endl;
}
  std::cout << "Please input the cell index: " << std::endl;
  std::cin >> i;
  std::cout << "Please input the value you want to change it to: " << std::endl;
  std::cin >> v;
  std::cout << std::endl;


  if ((i < 10) && (i >= 0)){
    myData[i] = v;
  }

} while ((i < 10) && (i >= 0));



  return 0;
}
