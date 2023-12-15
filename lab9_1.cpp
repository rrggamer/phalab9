#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;



int main(){	
	double PrevBalance;
	double rate ;
	double Payment; 
	double NewBalance; 
	double interest; 
	double Total;
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	for(int year = 1; true ;year++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	interest = PrevBalance*(rate/100);
	cout << setw(13) << left << interest;
	Total = PrevBalance + interest;
	cout << setw(13) << left << Total;
	if(Total <= Payment){

		Payment = Total;
	}
	cout << setw(13) << left << Payment;
	NewBalance = Total - Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	if(NewBalance == 0){
		break;
	}
	PrevBalance = NewBalance;
	}
	
	
	return 0;
}