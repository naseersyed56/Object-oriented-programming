#include<iostream>
using namespace std;

class payment {
public:
	virtual void  pay() = 0;
	virtual void show_msg() {
		cout << " payment processing \n";
	}
	virtual void receipt() {
		cout << "payment successful \n";
	}
	virtual void feed_back() {
		int rating;
		cout << " enter rating  out of 5\n or \n enter feedback";
			
		cin >> rating;
		cout << "thanks for the valuable feedback \n" << rating;


	}

};
class upi :public payment {
	void pay() {
		int amount;
		cout << "enter amount \n";
		cin >> amount;
		cout << " amount is" << amount << " through upi \n";
	}

};
class credit_card :public payment {
  
	void pay() {
		int amount, processing_fee;
		cout << "enter amount \n";
		cin >> amount;
		cout << " amount is" << amount << endl;
		processing_fee = amount * 0.01;
		amount = amount - processing_fee;
		cout << "processing fee is \n" <<
			" through credircard \ngoing to cut \n" << processing_fee <<
			" \n final amount is" << amount;
	}
};


int main() {


	payment* p = new credit_card();
	p->pay();

	p->show_msg();
	p->receipt();
	p->feed_back();

	p = new upi();

	p->pay();
	p->show_msg();
	p->receipt();
	p->feed_back();

}