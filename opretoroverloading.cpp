// #include <iostream>
// using namespace std;

// class rectangle
// {
// private:
//     int lenght;
//     int width;

// public:
//     rectangle() : lenght(0), width(0) {}

//     friend istream &operator>>(istream &in, rectangle &rect);

//     friend ostream &operator>>(ostream &out, rectangle &rect);

//     istream operator>>(istream &in,  rectangle &rect);
//     {
//         cout << "enter the lengh";
//         cin >> rect.lenght;

//         cout << "enter the width";
//         cin >> rect.width;
//         return in;
//     }

//     ostream &operator<<(ostream &out, rectangle &rect);
//     {
//         cout << "length" << rect.lenght << "width" << rect.width;
//         return out;
//     }

// };

// int
// main()
// {
//     rectangle rect;

//     cin >> rect;

//   cout<<rect<<endl;
//     return 0;
// }






#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int width;

public:
    // Default constructor
    rectangle() : length(0), width(0) {}

    // Friend function to overload >> operator
    friend istream& operator>>(istream& in, rectangle& rect);

    // Friend function to overload << operator
    friend ostream& operator<<(ostream& out, const rectangle& rect);
};

// Overload >> operator using friend function
istream& operator>>(istream& in, rectangle& rect) {
    cout << "Enter length: ";
    in >> rect.length;

    cout << "Enter width: ";
    in >> rect.width;

    return in;
}

// Overload << operator using friend function
ostream& operator<<(ostream& out, const rectangle& rect) {
    out << "Length: " << rect.length << ", Width: " << rect.width;
    return out;
}

int main() {
    rectangle rect;  // Create an object of rectangle class

    // Use overloaded >> operator to input dimensions
    cin >> rect;

    // Use overloaded << operator to display dimensions
    cout << rect << endl;

    return 0;
}
