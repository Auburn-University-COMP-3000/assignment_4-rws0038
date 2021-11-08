#include <iostream>
#include <iomanip>

using namespace std;

class GasPump {
	private:
		double amountDispensed, amountCharged, costPerGallon, totalDispensed, totalCharged;
	public:
		double cost, time;
		double getAmountDispensed() { 
			amountDispensed = 0.10 * time;
			return amountDispensed;
		}
		double getAmountCharged() {
			amountCharged = cost * getAmountDispensed();
			return amountCharged;
	    }
		double getCostPerGallon() {
			costPerGallon = cost; 
			return costPerGallon; 
			}
		double getTotalDispensed() {
			totalDispensed = totalDispensed + amountDispensed;
			return totalDispensed;

		}
		double getTotalCharged() {
			totalCharged = totalCharged + amountCharged;
			return totalCharged;

			
		}
		void reset() {
			amountDispensed = 0.0;
			amountCharged = 0.0;
		}		
};
	
int main() {
	GasPump gas;
	char dispenseAgain = 'x';
  
	do {
		cout << "Enter the cost of gas per gallon: $";
		cin >> gas.cost;
		cout << "Enter how long the gas was pumped in seconds: ";
		cin >> gas.time;
		cout << "Amount of gas dispensed: " << fixed << setprecision(2) << gas.getAmountDispensed() << " gallons" << endl;
		cout << "Amount charged for gas: $" << fixed << setprecision(2) << gas.getAmountCharged() << endl;
		cout << "Cost per gallon: $" << fixed << setprecision(2) << gas.getCostPerGallon() << endl;
		cout << "Total amount of gas dispensed: "<< fixed << setprecision(2) << gas.getTotalDispensed() << " gallons" << endl;
		cout << "Total amount charged for gas: $" << fixed << setprecision(2) << gas.getTotalCharged() << endl;
		cout << "Enter Y to dispense again: ";
		cin >> dispenseAgain;
	}
	while(dispenseAgain == 'Y');
	

	return 0;
}
