#include <iostream>

#include "x/x.hpp"
#include "x/internal_x.hpp"

namespace x
{

   void
   hello ()
   {
      std::cout << "hello x\n";
      x::internal_hello ();
   }

}
