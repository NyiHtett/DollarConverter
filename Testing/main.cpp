#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double val;
    int dollar;
    int quarter;
    int cent;
    cout << "assign dollar value: ";
    cin >> val;
    dollar = val; //truncate
    quarter = ((val-dollar)*100) / 25;
    cent = static_cast<int>((val-dollar)*100) % 25;
    cout << dollar << " dollar " << quarter << " quarter " << cent << " cent" <<endl;
}
