#include<iostream>
using namespace std;

class shape{
public :
virtual void area()=0;
virtual void perimeter()=0;

}
class circle :public shape{
public :
void area(){
  cout<<"this is circle area\n";
}
void perimeter(){
  cout<<"this is circle perimeter";
}
};
int main(){
  circle s;
s.area();
s.perimeter();

return 0;
};

