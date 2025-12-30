#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
    string gradeset[8] = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();cin.get();cin.get();
    srand(time(0));
    int intrand = rand() % 8;
    cout << "You will get "<< gradeset[intrand] << " in this 261102.";
}