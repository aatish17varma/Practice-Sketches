#ifndef STRUCTS-WITH-HOLES_H
#define STRUCTS-WITH-HOLES_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class Point; 
}
namespace ANONYMOUS{
class Point; 
class Point{
  public:
  int  x;
  int  y;
  Point(){}
  static Point* create(  int  x_,   int  y_);
  ~Point(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper();
extern void main__WrapperNospec();
extern void _main();
}

#endif
