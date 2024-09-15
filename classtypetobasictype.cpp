#include <iostream>

 using  namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    
    Distance(int f, float i) : feet(f), inches(i) {}

    
    operator float()  {
        return (feet * 12.0f) + inches;
    }

    
    void Display()  {
        cout << "Distance: " << feet << " feet " << inches << " inches" << std::endl;
    }
};

int main() {
    
    Distance d(5, 9.5f); 

    
    float totalInches = d;

    
    cout << "Total distance in inches: " << totalInches << " inches" << std::endl;

    d.Display();

    return 0;
}
