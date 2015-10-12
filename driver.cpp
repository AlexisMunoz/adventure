//s# adventure

// Labwork - Team Designing

//includes
#include<iostream>
#include<cassert>
using namespace std;
//prototypes
//char menu();
double climbing(int people);
double scuba(int people);
//double skyDive();
double discount(int people);
int numberOfPeople();
//double spelunk();


int main ()
{



    return 0;
}

//function definitions















int numberOfPeople()
{
	int people;
	cout << "List number of people going:\n";
	cin >> people;
	return people;
}
double discount(int people)
{
	double discountPrice;
	if(people >= 5)
		discountPrice = (0.10);
	else 
		discountPrice = (0.0);
	return discountPrice;
}
double climbing(int people){
    double priceTotal;
	string climbingInstruction, equipRental;
	
    cout << "Will you need any climbing instruction?\n";
    cin >> climbingInstruction;
    cout << "Will you need any equipment rentals?\n";
    cin >> equipRental;
    priceTotal = (people * 350.00);
    if ((climbingInstruction == "Yes") || (climbingInstruction == "yes")){
        priceTotal += (people*100);
    }
    if ((equipRental == "Yes") || (equipRental == "yes")){
        priceTotal += (people*40)*(3);
    }
    if ( people >= 5){
    	priceTotal -= (priceTotal*(discount(people)));
    }
    return priceTotal;
}
double scuba(int people){
	double priceTotal;
	string scubaInstruction;
	
	cout << "Will you need any scuba instruction\n";
	cin >> scubaInstruction;
	
	priceTotal = (people * 1000.00);
	if ((scubaInstruction == "Yes") || (scubaInstruction == "yes")){
		priceTotal += (people * 100);
	}
	return priceTotal;
}




