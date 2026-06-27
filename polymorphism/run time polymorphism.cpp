#include<iostream>
using namespace std;

class kalki {
public:
	virtual void karna() {
		cout << " this is the 1st base class virtual function  "<<" alasyamindi aacharaya putra \n";
	}
	virtual void ashwath_dama() {

		cout << " sodara 2nd virtual function of base class \n";
	}
};

class kalki_2 :public kalki {
public:
	void  karna() {
		cout << " this is 1st derived class derived class \n";
	}
};
class kgf : public kalki_2 {
public:
	void karna() {
		cout << " this is derived clas of derived class \n ";
	}
	void ashwath_dama() {
		cout << " this is derived clas of derived class  "<<" arjun is not greater than karna \n";
	}
};

class kgf_2 :public kalki {
public:
	void karna() {
		cout << " this is the last dedrived class of  1st base class  1st function\n";
	}
	void ashwath_dama() {
		cout << "  last derived class of 2nd function";
	}
};
int main() {

	//this is called run timee polymorphism

	kalki_2* ptr = new kgf();
		ptr->karna();
		ptr->ashwath_dama();

		kalki* st = new kalki_2();
		st->karna();
		st = new kgf_2();
		st->karna();

		cout << ptr << " " << st<<endl;
		delete ptr ,st;
		ptr = nullptr;
		st = ptr;

		cout << ptr << " <- is the address of 1st ptr after allocation null  \n" << st<<"<- this is the address of second ptr after alocation null \n";
	
		kalki k;
		k.karna();
	return 0;
}