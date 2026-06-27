#include<iostream>
using namespace std;

class animal {

public:
	int legs = 0;
public:

	virtual void leg_num() {
		cout << " enter the legs \n";
		cin >> legs;
		
	}
	virtual void sound() {
		cout << "animal sound \n";
	}
};
class dog :public animal {

	void leg_num() {
		cout << " how many legs dog have \n";
		cin >> legs;
		 (legs == 4)?cout << "right answer \n":cout<<"wrong answer it should have 4 legs \n not "<<legs;
	}
	void sound() {
		cout << "bow bow \n";
	}
	
};
class hen :public animal {

	void leg_num() {
		cout << "how many legs does hen have \n";
			cin >> legs;
			 (legs == 2) ? cout << "right answer \n" : cout << " wrong answer it should have 2 legs \n"<<"not"<<legs;
	}

	void sound() {
		cout << "kuk kuk \n";
	}
};

animal* select_derived_cls() {

	int choice;
	cout << "enter 1 dog \n" << "enter 2 for hen \n";
	cin >> choice;

	switch (choice) {

	case 1:
		cout << "u chose dog object \n";
		return new dog();
	case 2:
		cout << "you chose hen object \n";
		return new hen();
	default:
		cout << "Invalid choice  \n";
	}
		return nullptr;	
}

void select_function(animal* ptr) {

	int func;
	cout << " enter 1 for dog function \n" << " enter 2 for hen functions\n";
	cin >> func;
	switch (func) {

	case 1:
		ptr->leg_num();
	case 2:
		ptr->sound();
	default:
		cout << " invalid  choice \n";
	}



}




int main() {
	int count = 0;
	animal* qw = select_derived_cls();
		
	select_function(qw);
		
		
		delete qw;

		cout << qw << " is the memory addrerss  before deleting memory -heap " << endl;

		qw = nullptr;
		cout << qw << " is the memory addrerss  after deleting memory -heap ";
		
	return 0;
}