#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;
class Address {
private:
    string building;
    string street;
    string city;
    int pin;
public:
    Address(){
        this->building = "building";
        this->street = "Street";
        this->city = "City";
        this->pin = 100001;
    }

    Address(string building , string street , string city, int pin){
        this->building=building;
        this->street = street;
        this->city = city;
        this->pin =pin;
    }

    void accept(){
        cout<<"Please Enter Building :";
        cin>>this->building;
        cout<<"Enter Street :";
        cin>>this->street ;
        cout<<"Enter city :";
        cin>>this->city;
        cout<<"Enter pin :";
        cin>>this->pin;
    }

    void display(){
        cout<<this->building<<endl;
        cout<<this->street<<endl;
        cout<<this->city<<endl;
        cout<<this->pin<<endl;
    }

    string get_building(){
        return this->building;

    }

    string get_street(){
        return this->street;

    }

    string get_city(){
        return this->city;

    }

    int get_pin(){
        return this->pin;
    }

    void set_building(string building){
        this->building = building;
    }

    void set_street(string street){
        this->street = street;
    }

    void set_city(string city){
        this->city = city;
    }

    void set_pin(int pin){
        this->pin= pin;
    }

};

int main(){
    Address address;
    Address address2("Building by constructor","Street by constructor","City by constructor",100011);
    Address add;
    add.accept();
    add.display();
    
    add.set_building("set_builing");
    add.set_city("set_city");
    add.set_street("set_street");
    add.set_pin(100);
    

    cout<<add.get_building()<<endl ;
    cout<<add.get_city()<<endl;
    cout<<add.get_street()<<endl;
    cout<<add.get_pin()<<endl;

    return 0;
}
