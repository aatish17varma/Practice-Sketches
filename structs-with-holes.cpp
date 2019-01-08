#include <cstdio>
#include <assert.h>
#include <iostream>
using namespace std;
#include "vops.h"
#include "structs-with-holes.h"
namespace ANONYMOUS{

Point* Point::create(int  x_, int  y_){
  void* temp= malloc( sizeof(Point)  ); 
  Point* rv = new (temp)Point();
  rv->x =  x_;
  rv->y =  y_;
  return rv;
}

void main__Wrapper() {
  _main();
}

void main__WrapperNospec() {}

void _main() {
  Point*  apple=Point::create(5, 7);
  assert (((apple->x) == (5)) && ((apple->y) == (7)));;
}

}
