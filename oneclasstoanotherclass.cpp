
#include <iostream>
using namespace std;

class Rupees
{
public:
    double amount;

    Rupees(double amt) : amount(amt) {}
};

class Dollars
{
public:
    double amount;

   
    Dollars(const Rupees& rupees1)
    {
        amount = rupees1.amount / 83.0;  
    }
};

int main()
{
    Rupees inr(8300);  
    Dollars usd(100);  

    cout << "Amount in dollars: " << usd.amount << endl; 

    return 0;
}