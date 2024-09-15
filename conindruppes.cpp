#include <iostream>

 using namespace std;

class dollars
{
public:
    double amount;

    dollars(double amt) : amount(amt) {}
};

class rupees
{
public:
    double amount;

    rupees(double amt) : amount(amt) {}

    
    operator dollars() const
    {
        return dollars(amount / 100);
    }
};

int main()
{
    rupees inr(8300);
    dollars usd = inr;  

    std::cout << "Amount in dollars: " << usd.amount << std::endl;

    return 0;
}
