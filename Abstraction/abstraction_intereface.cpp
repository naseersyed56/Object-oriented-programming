#include<iostream>
using namespace std;


class shape {
public:
	virtual void area() = 0;
	virtual void perimeter() = 0;
};
class circle :public shape {
	public:
		

      void area() {

		int radius;
		cout << "about circle \n";
		cout << "enter radius\n";
		cin >> radius;
		cout<< 3.14 * radius * radius<< "is the area of the circle \n ";
	}
	void perimeter() {
		int radius;
		cout << "about circle \n";
		cout << "enter the radius\n";
		cin >> radius;

		cout<< 2 * 3.14 * radius<<" is the perimeter of the circle  \n";
	}
};

class rectangle : public shape {

public:
	
void area() {
		int l,b;
		cout << "about rectangle \n";
		
		cout << "enter a length \n"<<"enter breadth\n";
		cin >>l>>b;
	cout<<2* l * b<<" is the area  of the rectangle \n";
		
	}
	void perimeter() {

		int l, b;
		cout << "about rectangle \n";
		cout << "enter the length \n" << "enter the breadth of recct\n";
		cin >> l >> b;
		cout << 2 * (l + b);
	}
};
class triangle :public shape {
public:

	void area() {
		int b, h;
		cout << " about triangle \n";
		cout << "enter the details of triangle \n";
		cout << " enter the base   \n" << " enter the height  \n";
		cin >> b >> h;
		cout << 0.5* b * h << "  is the areaa of n the triangle  \n";
	}

	void perimeter() {
		int a, b, c;
		cout << "enter the details of triangle \n ";
		cout << " enter the length of side a \n" << " enter the length of side b  \n " << " enter the length of sidde c \n";
		cin >> a >> b >> c;
		cout << a + b + c <<" this is the area of triangle \n";
	}

};

int main() {
	triangle s ,z;
	
	




	return 0;
}