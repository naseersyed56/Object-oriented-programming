#include<iostream>
using namespace std;

class salaar{
public:

	virtual void deva() = 0;
	virtual void varada() = 0;
	virtual void  prabha() {

		cout << " hi darlings from base class \n";
	}

};
class ceasefire :public salaar {
public:
	void deva() {
		cout << "khansar erupekkala \n";
	}
	void varada() {
		cout << "malli vastadu na salaar \n";
	}
	void prabha() {
		cout << " hi darlings from 1st derived class  \n ";
	}
};

class sauryanga : public ceasefire {
public:

	void deva() {
		cout << " pagilindha \n";
	}
	void varada() {
		cout << " khansar lo calculator to emi lekka pettalemu \n";
	}

		void prabha() {
			cout << " hi darlings from derived class of mutlilevel inheritance \n ";
		}
	
};

void display(ceasefire *ptr) {

	ptr->prabha();
}



int main() {

	salaar* ptr = new sauryanga();
	ptr->deva();

	ptr->prabha();
	delete ptr;
	cout << ptr << endl;
	salaar* ct = new ceasefire();
	ct->prabha();
	

}
