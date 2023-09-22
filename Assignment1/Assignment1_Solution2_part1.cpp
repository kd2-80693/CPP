#include<iostream>

using namespace std;
class Date
{
    int day;
    int month;
    int year;
public:
void initDAte(){
    this->day = 0;
    this->month = 0;
    this->year = 0;
    cout<<"DATE INITIALIZED SUCCESFULLY \n";
}


void printDateOnConsole(){
    cout<<"Date is  =\n"<<this->day<<"-"<<this->month<<"-"<<this->year;
}

void acceptDateFromConsole(){
    cout<<"PLEASE ENTER DAY , MONTH , Year :";
    cin>>this->day>>this->month>>this->year;
    cout<<"DATE ENERED SUCCESFULLY\n";
}

bool isLeapYear(){
    if((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0)){
        return true;
    }
    return false;
}

    
};




int main(){
    int x = 1;
    struct Date dt ;
    
    do
    {
    int flag = 0;
    cout<<"--------------------------------------------------------------------------------\nWelcome to C programming \n";
    cout<<"To initialize the Date as 00-00-0000 press 1 \n";
    cout<<"To print the date press 2 \n";
    cout<<"To enter a DATE press 3 \n";
    cout<<"To Check for a leap year press 4 \n";
    cout<<"To exit press 0 \n";
    cout<<"PLEASE ENTER YOUR NUMBER = ";
    cin>>x;
    switch (x)
    {
    case 1:
        dt.initDAte();
        break;
    
    case 2:
        dt.printDateOnConsole();
        break;
    
    case 3:
        dt.acceptDateFromConsole();
        break;
    case 4:
        if(dt.isLeapYear()==0){
            cout<<"NOT a LEAP YEAR\n";
        }
        else{
            cout<<"LEAP year\n";
        }
        break;
    default:
        cout<<"ENTER VALID INPUT\n";

    
    }

    
    
    } while (x!=0);
    




    return 0;
}