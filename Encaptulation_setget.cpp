
#include <iostream>
using namespace std;

class Rectangle {
   private:
    int length;
    int breadth;

   public:

    void setLength(int l) {
      length = l;
    }


    void setBreadth(int b) {
      breadth = b;
    }


    int getLength() {
      return length;
    }


    int getBreadth() {
      return breadth;
    }

    int getArea() {
      return length * breadth;
    }
};

int main() {

  Rectangle r1;


  r1.setLength(8);


  r1.setBreadth(6);


  cout << "Length = " << r1.getLength() << endl;


  cout << "Breadth = " << r1.getBreadth() << endl;


  cout << "Area = " << r1.getArea()<<endl;

  return 0;
}
