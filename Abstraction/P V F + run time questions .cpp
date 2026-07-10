#include<iostream>
#include<string>
using namespace std;

class base {

public:
	virtual void question1() = 0;
	virtual void question2() = 0;
};
class child1: public base{
public:
	void question1() {

		cout << "this is 1st child class 1st func \n "<<" this is 1 mark questtion \n";

		string s;
			cout << "enter ur question and  it is string  \n";
			getline(cin, s);
			cout << s<<endl<<"this is the enterred input \n";
	}
	void question2() {

	  long long j ,l=0;

		cout << "this is 1st child class 2st func \n "<<"this is  reverse a number  quention \n"<<"enter  any number u will get reverse of it\n";
		cin >> j;

		while (j) {

			int k = j % 10;
			l = l * 10 + k;

			j = j / 10;
		}
		cout << "the reversed number is :\n" << l;	
	}
};
class child2 :public base {
public:
	void question1() {

		string q;
		cout << "this is the func of 2nd child class and its 1st functiom \n" << "this give no of characters in a  question \n"; cout << "enter the question \n";
		getline(cin, q);
		int count = 0;

		for (char k : q) {

			if (k != ' ' )
				count++;

		}
		cout << "no of characters  in the given word  :\n" << count;
	}

	void question2() {
		long long k;
		cout << "\n this is the func of 2nd child class and its 2st functiom \n" << "enter the number which is perfect square of 2  or not \n";
		cout << "enter the number \n";
		cin >> k;
		while (k>1) {
			if (k % 2 != 0) {
				cout << "not a perfect square \n";
				break;
			}
			k /= 2;
		}
		if (k == 1)cout << " it is a perfect square \n";

	}
};
class child3 : public base {

public:

	bool is_prime(int n) {

		bool check = true;

		if (n < 2 || n % 2 != 0)return false;
		else {

			for (int i = 2; i < n / 2; i++) {
				if (n % 2 != 0) {
					check = false;
					break;

				}
			}
			if (check)return true;
			else return false;
		}
	}
		

	void question1() {
		int n;
		cout << "this is the func of 3nd child class and its 1st functiom \n" << "enter the prime number \n";
		cin >> n;
		if (is_prime(n))cout << " num is prime \n";
		else {
			cout << "num is not prime; \n";
		}

	}

	void question2()
	{
		string e;
		cout << "enter the  string  to get the lehgth of last word \n";
		getline(cin, e);
		int count = 0;

		for (int i = e.size(); i >= 0; i--) {
			if (e[i] != ' ')
				count++;
			else if (e[i] == ' ' && count != 0)
				break;
		}
		cout << " the characters of last digit is : \n" << count;
	}

};
int main() {
	base* ptr = new child2();


	


	delete ptr;

	cout << ptr<<endl;
	ptr = nullptr;
	cout << ptr << endl;
	
	
	ptr = new child2();
	cout << ptr << endl;
	ptr->question2();
	cout << ptr << endl;

}
