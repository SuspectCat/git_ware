#include <iostream>
#include <ctime>

using namespace std;

/*typedef struct tm {
    /* data 
    int tm_sec;         //second    normal range is zero to fifty-nine, but allow to sixty-one
    int tm_min;         //minter    this range is from zero to fifty-nine
    int tm_hour;        //hour      range is from zero to twenty-three
    int tm_mday;        //day       how many day which from this month, range is from zero to thirty-one
    int tm_mon;         //month     from zero to eleven
    int tm_year;        //how many year which from 1900
    int tm_wday;        //how many day from this weekend
    int tm_yday;        //how many day from this year
    int tm_isdst;       //summer time (夏令时)
}tm;*/


int main() {
    //current date/time which is base on current system
    time_t now = time(0);

    //make now change to string type 
    char* dt = ctime(&now);

    cout << "local time is : " << dt << endl;

    //make now change to tm structure
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);

    cout << "UTC time and date : " << dt << endl;
}