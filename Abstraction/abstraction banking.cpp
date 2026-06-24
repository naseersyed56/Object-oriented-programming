#include<iostream>
#include<vector>
using namespace std;

class bank_account {
public:
	virtual int deposiit(int a) = 0;
	virtual int withdraw(int b) = 0;
	virtual int display_balance() = 0;
	
};

class savings_account : public bank_account {
private:
	int amount =0;
public:
	int deposit_count = 0 ,deposit_tried =0;
	int display_bal = 0 ;
	int withdraw_count = 0, withdraw_tried =0;
	int deposit(int amount) {
		deposit_tried++;
		if (amount > 100000)cout << "demonstration should be less or equal to one lakh at a time \n ";

		if (amount % 10 == 0) {
			this->amount += amount;
			cout << amount << "is deposited \n deposit successful \n";
			deposit_count++;
		}
		else {
			cout << "demonstration should be 10 || 200 || 500 \n";
		}
	}
	int withdraw(int amount) {
		withdraw_tried++;

		if (amount <= 0)cout << "enter a valid amount \n";

		else if (this->amount >= amount) {
			if (withdraw_count < 6) {
				this->amount -= amount;
				cout << amount << " is withdrawn \n withdrawn successful\n ";
				withdraw_count++;
			}
			else {
				cout << " withdraw limit exceeded \n";

			}
		}
	
		else if (this->amount < amount) {
			cout << "insuffciant balance \n";
		}
	}
		
		int display_balance() {
			cout << "the amount in account is  "<<amount;
			display_bal++;
		}

		int count_details(){

			cout << " \n deposit count is \n" << deposit_count;
			cout << " \n deposit tried count is \n "<<deposit_tried;
			cout << "\n withdraw_tried count is \n " << withdraw_tried;
			cout << "\n withdraw_count is \n " << withdraw_count;
			cout << " \n display count is \n" << display_balance;

	}
};
class current_account :public bank_account {
private:
	int amount = 0;
	int draft_amount = 25000;
public:

	int count_deposit = 0, deposit_tried = 0, withdraw_count = 0, withdraw_access_tried = 0, display_bal = 0, draft_amount_withdraw = 0;
	int deposit(int amount) {
		deposit_tried++;
		if (amount % 10 == 0) {
			this->amount += amount;
			cout << amount << " debited in your account \n";
			count_deposit++;
		}
		else {
			cout << "demonstriation should be in 100 || 200 || 500 \n";
		}
	}
	int withdraw(int amount) {
		withdraw_access_tried++;
		if (this->amount >= amount && withdraw_count < 6) {
			this->amount -= amount;
			cout << amount << " withdrawn from ur account \n";
			withdraw_count++;
		}
		else if (draft_amount > 0 && this->amount + draft_amount >= amount && withdraw_count < 6) {
			if (this->amount > amount) {
				//amount is more than balance in acc and less than draft amount available in the acc .
				int balance_amount = this->amount -= amount;
				cout << amount << " amount withdrawn from acc \n";
				// balance amount is in negative so to get the draft account balance add balance amount .
				draft_amount += balance_amount;
				draft_amount_withdraw++;
				withdraw_count++;

			}
			else {
				cout << "insufficient balance \n";

			}
		}
	}
	int display_balance() {

		cout << amount << " balance amount \n";
		display_bal++;
	}

	int count_details() {
		cout << count_deposit << " times deposited \n";
		cout << deposit_tried << "times deposit tried \n";
		cout << withdraw_count << "times withdrawn amount \n";
		cout << withdraw_access_tried << " times tried to withdraw \n";
		cout << display_bal << " times displayed amount \n";
		cout << draft_amount_withdraw << " times draft amount withdrawn \n";

	}

};


int main() {
	
	savings_account n ,j;
	n.deposit(10);
	j.withdraw(5);
	j.display_balance();

}
