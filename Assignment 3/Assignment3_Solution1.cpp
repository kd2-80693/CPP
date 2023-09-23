#include<iostream>
using namespace std;

class Box{
    private:
    double len;
    double wdth;
    double hght;
    public:
    Box(){
        this->len=0;
        this->hght=0;
        this->wdth=0;
    }
    Box(double len ){
        this->len = len;
        this->wdth = 0;
        this->hght = 0;
    }
    Box(double len , double wdth ){
        this->len = len;
        this->wdth = wdth;
        this->hght = 0;
    }
    Box(double len , double wdth,  double hgth ){
        this->len = len;
        this->wdth = wdth;
        this->hght = hght;
    }
    void accept(){
        cout << "please enter length : ";
        cin >> this->len;
        cout << "please enter width : ";
        cin >> this->wdth;
        cout << "please enter hight : ";
        cin >> this->hght;
        
        }
    void display(){
        cout << "Length : "<<len<<endl;
        cout << "Width : "<<wdth<<endl;
        cout << "Hight : "<<hght<<endl;
    }

    void volume(){
        cout << "THE VOLUME OF THE BOX IS : " << len*wdth*hght << endl;
    }

};

int menu(){
    int flag;
    cout << "****************************************" << endl ;
    cout << "WELCOME TO CPP  - Box Volume " << endl ;
    cout << "0. Exit" << endl ;
    cout << "1. Enter dimensions " << endl ;
    cout << "2. Display dimensions" << endl ;
    cout << "3. Calculate and show Volume" << endl ;
    cout << "Please enter your choice : " ;
    cin >> flag ;
    cout << "****************************************" << endl ;
    return flag;
}

int main(){
    Box box;
    int flag;
    while(flag = menu())
    {
        switch (flag)
        {
        case 1: box.accept();
            break;
     
        case 2: box.display();
            break;
     
        case 3:box.volume();
            break;
     
        default:
        cout << "PLEASE ENTER A VALID INPUT " << endl;
            break;
        }
    }
}