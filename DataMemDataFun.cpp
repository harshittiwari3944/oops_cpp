#include<iostream>
using namespace std;
class Car{
 public:
 string name;
 string model;
 int manufactured_year;


 void start(){
    cout<<name<<" "<<model<<" "<<manufactured_year<<" "<<"car is starting "<<endl;
 }
 void stop(){
    cout<<name<< " "<<model<<" "<<manufactured_year<<"  "<<"car is stopped"<< endl ;

}
};

int main(){
    Car mycar;
    mycar.name="honda";
    mycar.manufactured_year=2018;
    mycar.model="amaze";
    mycar.start();
    mycar.stop();
}