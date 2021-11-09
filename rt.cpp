#include <iostream>
using namespace std;

int main(){
    cout << "Hellow world" << endl; //<< endl; is newline
    cout << "I love yamnit"<< "\n";

    int number = 10;
    int m = 30;
    cout << number + m << "\n"; // cout เหมือนเป็นการเเสดงผล
    
    float x = 3.54;
    float y = 22.11;
    cout << x+y <<  "\n";

    double e;
    cout << "Number is ";
    cin >> e; //cin เหมือนเป็นตัวรับค่าทางคีย์บอร์ด 
    cout << "answer is " << e;
    cout << endl;

    string name;
    cout << "Type your ftirst name ";
    cin >> name;
    cout << "Your name is " << name;
    
    
    return 0; //คล้ายเป็นตัวจบการทำงาน
}