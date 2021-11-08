#include <iostream>

using namespace std;

class Temperature {
	private:
		double kelvin, fahrenheit, celsius;
		       
	public:
		void setTempKelvin(double degreesKelvin) { 
			kelvin = degreesKelvin;
		}
		double getTempKelvin() {
			return kelvin;
	    }
		void setTempCelsius() {  
			celsius = kelvin - 273.15;
		}
		double getTempCelsius() { 
			return celsius;
		 } 
		void setTempFahrenheit() { 
			fahrenheit = celsius * 9.0 / 5.0 + 32;
		 }
		double getTempFahrenheit() {
			return fahrenheit;
		}
};

int main() {
	Temperature temp;
	double kelv;
	cout << "Enter a temperature in Kelvin: ";
	cin >> kelv;
	temp.setTempKelvin(kelv);
	temp.setTempCelsius();
	temp.setTempFahrenheit();
	cout << "Temperature in Kelvin: " << temp.getTempKelvin() << " Kelvins" << endl;
	cout << "Temperature in Celsius: " << temp.getTempCelsius() << " degrees Celsius" << endl;
	cout << "Temperature in Fahrenheit: " << temp.getTempFahrenheit() << " degrees Fahrenheit" << endl;
	return 0;
}
