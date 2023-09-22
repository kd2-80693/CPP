#include<iostream>
/*USING Structure*/
using namespace std;
struct Date
{
    int day;
    int month;
    int year;

    
};


void initDAte(struct Date* ptrDate){
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
    cout<<"DATE INITIALIZED SUCCESFULLY \n";
}


void printDateOnConsole(struct Date* ptrDate){
    cout<<"Date is  = \n",ptrDate->day<<ptrDate->month<<ptrDate->year;
}

void acceptDateFromConsole(struct Date* ptrDate){
    cout<<"PLEASE ENTER DAY , MONTH , Year :";
    cin>>ptrDate->day>>ptrDate->month>>ptrDate->year;
    cout<<"DATE ENERED SUCCESFULLY\n";
}


int main(){
    int x = 1;
    struct Date dt ;
    
    do
    {
    int flag = 0;
    printf("Welcome to C programming \n");
    printf("To initialize the Date as 00-00-0000 press 1 \n");
    printf("To print the date press 2 \n");
    printf("To enter a DATE press 3 \n");
    printf("To exit press 0 \n");
    printf("PLEASE ENTER YOUR NUMBER = ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        initDAte(&dt);
        break;
    
    case 2:
        printDateOnConsole(&dt);
        break;
    
    case 3:
        acceptDateFromConsole(&dt);
        break;
    
    }

    
    while(flag!=9){
        printf("Press 9 to rerun ");
        scanf("%d",&flag);
    }
    } while (x!=0);
    




    return 0;
}