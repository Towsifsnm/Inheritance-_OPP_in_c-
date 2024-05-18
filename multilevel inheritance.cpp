
#include <iostream>
using namespace std;
class Transport
{
public:
Transport ()
{
cout << "This is a Transport" << endl;
}
};
class fourWheelr: public Transport
{
public:
fourWheelr()
{
cout<<"Transport have 4 wheels as object"<<endl;
}
};
class AutoRikshaw: public fourWheelr{
public:
AutoRikshaw()
{
cout<<"AutoRikshaw has 4 Wheels"<<endl;
}
};
int main ()
{
AutoRikshaw obj;
return 0;
}
