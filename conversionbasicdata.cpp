#include <iostream>
using namespace std;

class time
{
private:
    int hour;
    int mins;

public:
    time() : hour{0}, mins{0} {}

    time(int totalmin)
    {
        hour = totalmin / 60;
        mins = totalmin % 60;
    }

    void display()
    {
        cout << "Hour :" << hour << " " << "Mins :" << mins << endl;
    }
};

int main()
{
    int dur = 95;

    time t1(dur);

    t1.display();
}