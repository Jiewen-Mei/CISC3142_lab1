#include <iostream>
#include <cstdlib> 
#include "compare.h"


int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  bool isSame =false;
  // std::cout << "X: " << x << " Y:" << y<<"\n";
  int bigger = whichIsBigger(x,y,isSame);
  if(isSame){
    std::cout<< "X and Y are the same\n";
  }
  else {
    std::cout<< bigger <<" is bigger\n";
  }
  bool swap=false;
  int firstBigger= makeFirstBigger(x,y,swap);
  if(swap){
    std::cout<< "x's new value is " << x <<" and y's new value is "<< y << "\n";
  }
  else{std::cout<<"x and y were not swapped because they were already in the right order.\n";}
  if(!isSame){
    std::cout<<"Now x and y both equal "<< x <<". Previously y's value was "<<makeBothSame(x,y);
  }
}