#include<iostream>
using namespace std;

class Tollbooth{
    private:
    double toll = 0.5;
    unsigned int numOfCars;
    double totalAmount;
    public:
    Tollbooth(){
        this->numOfCars = 0;
        this->totalAmount = 0;
    }
    void payingCar(){
        this->numOfCars++;
        this->totalAmount+= this->toll;
        cout<<"A paying car PASSED"<<endl;
    }
    void noPayingCar(){
        this->numOfCars++;
        cout<<"A NON paying car PASSED"<<endl;
    }

    void printOnConsole(){
        cout<<"TOTAL NUMBER OF CARS PASSED : "<<numOfCars<<endl;
        cout << "TOTAL Ammount collected : "<<totalAmount<<" RS"<<endl;
        cout<<"Number of PAYING CARS :"<<totalAmount*2<<endl;
        cout<<"Number of NON PAYING CARS :"<<numOfCars - (totalAmount*2)<<endl;

    }

};

int menu(){
    int flag;
    cout << "****************************************" << endl ;
    cout << "WELCOME TO CPP - TOLLBOOTH" << endl ;
    cout << "0. Exit" << endl ;
    cout << "1. Add a Paying Car " << endl ;
    cout << "2. Add a NON paying car" << endl ;
    cout << "3. Show all details" << endl ;
    cout << "Please enter your choice : " ;
    cin >> flag ;
    cout << "****************************************" << endl ;
    return flag;
}

int main(){
    Tollbooth tb ; 
    int flag;
    while(flag = menu())
    {
        switch (flag)
        {
        case 1: tb.payingCar();
            break;
     
        case 2: tb.noPayingCar();
            break;
     
        case 3:tb.printOnConsole();
            break;
     
        default:
        cout << "PLEASE ENTER A VALID INPUT " << endl;
            break;
        }
    }
}