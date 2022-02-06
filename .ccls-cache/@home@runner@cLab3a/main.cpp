/*Author Charles Yingling*/
#include <iostream>
using namespace std;

int main() {
  double cel;
    //ask for temp in Celsius
    cout << "Enter temperature in Celsius\n";
    cin >> cel;
    //display Farehneit
    double far = (cel * 9/5) + 32;
    cout << "Farenheit equivalent for " << cel << " degree Celsius is " << far << "\n";
    if (far < 32) {
    cout << "This temperature is below freezing of 32 degrees Farenheit";
    } 
   if (far > 212) {
    cout << "This temperature is above boiling point of 212 degrees Farenheit";
    }
}