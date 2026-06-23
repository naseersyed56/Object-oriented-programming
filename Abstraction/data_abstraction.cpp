#include<iostream>
#include<vector>
using namespace std;

class shape{

    public:
    virtual void area()=0;
    virtual void perimeter()=0;
};
class circle:public shape{
public:
       int n;
    void area(){
        cout<<"about circle \n";
        
        cout<<"enter radius of circle to find area \n";
        cin>>n;
        cout<<3.14*n*n<<" radius of circle \n";
    }
    void perimeter(){
     cout<<"enter radius of circle to find perrimeter \n";
     cin>>n;
     cout<<2*3.14*n<<"radius of perimeter \n";
        
    }
};
class rectangle :public shape{
    public:
    int l ,b;
    void area(){
        cout<<"about rectangle area \n"<<"enter the length of rectagle \n";
        cin>>l;
        cout<<"ener the breadth of rectangle\n";
        cin>>b;
        cout<<l*b<<"this is the area of rectangle\n";
    };
    void perimeter(){
        cout<<"about perimeter of rectangle\n"<<"enter the lengt of rech\n ";
        cin>>l;
        cout<<"enter the breadth of rect \n";
        cin>>b;
        cout<<2*(l+b);
    }

};

int main(){

    circle c;
    c.area();
    rectangle d;
    d.area();
    c.perimeter();
    d.perimeter();

    return 0;
}