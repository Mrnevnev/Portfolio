#include <iostream>

using namespace std;


int main() {
   double originalPrice;
   double markUpPercentage;
   double taxRate;

    cout << "Please enter the item price: " << endl;
    cin >> originalPrice;
    cout << "Item price is $ " << originalPrice << endl;
   
    cout << "Please enter the item mark up percentage: " << endl;
    cin >> markUpPercentage;
    
    double markUpPrice = originalPrice + (originalPrice * (markUpPercentage/100)); 

    cout << "Store selling price is $ " << markUpPrice << endl;

    cout << "Please enter the tax rate: " << endl;
    cin >> taxRate;

    double salesTax = markUpPrice * (taxRate/100);
    double finalPrice = markUpPrice + salesTax;
    
    cout << "The final price is " << finalPrice << endl;
    
    cout << "Original Price: $" << originalPrice << endl;
    
    cout << "Markup Percentage: " << markUpPercentage << "%" << endl;
    
    cout << "Store's Selling Price: $" << markUpPrice << endl;
    
    cout << "Sales Tax Rate: " << taxRate << "%" << endl;
    
    cout << "Sales Tax: $" << salesTax << endl;

    cout << "Final Price of the Item: $" << finalPrice << endl;

    return 0;
}