/**
 * @author Ofir Pele
 * @since 2017
 */

#include <iostream> 
using namespace std;

struct A {
   
   A(int i) { 
      cout << "Constructing A from int " << i << endl; 
   }
   
   A(const A& a) { 
      cout << "Constructing A from A" << endl; 
   }
   
   /*
   A& operator=(int i) { 
      cout << "Assigning A from int "  << i << endl; 
      return *this;
   }
   */
   
   A& operator=(const A& a) { 
      cout << "Assigning A from A" << endl; 
      return *this;
   }
   
};

void f (A a) {
   cout << "In f" << endl;
}

int main() {
   A a1 = 37; // calls the ctor that gets int
   cout << "-------------------" << endl;
   
   A a2(47);  // same
   cout << "-------------------" << endl;
   
   a1= 57; // builds a new A and then calls operator =
   cout << "-------------------" << endl;
   
   f(67); // builds a new A and then send it to f
   cout << "-------------------" << endl;

   return 0;
}
