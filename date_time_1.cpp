#include <iostream>
#include <ctime>

using namespace std;

//get current date and time base on current time (include local time and Coordinated Universal Time (UTC))

int main(int argc, char const *argv[])
{
    /* code */
    // current date and time base on current system
    time_t now = time(0);

    cout << "the second number which from 1970.01.01 to today" << now << endl;

    tm* ltm = localtime(&now);

    // output the section of tm's struct
    cout << "year: " << 1900 + ltm->tm_year << endl;
    cout << "month: " << 1 + ltm->tm_mon << endl;
    cout << "day: " << ltm->tm_mday << endl;
    cout << "time: " << 1 + ltm->tm_hour << ":";
    cout << 1 + ltm->tm_min << endl;
    cout << 1 + ltm->tm_sec << endl;

    return 0;
}
