#include "compare.h"

int whichIsBigger(int x, int y, bool &same){
same=false;
if(x==y){
  same=true;
  return x;
}
else if(x>y){
  return x;
}
return y;
}

int makeBothSame(int x, int& y){
int temp=y;
y=x;
return temp;
}

int makeFirstBigger(int& x, int& y, bool& swapped){
if(x>=y){
swapped=false;
return 0;
}
swapped=true;
int temp=y;
y=x;
x=temp;
return 0;

}

