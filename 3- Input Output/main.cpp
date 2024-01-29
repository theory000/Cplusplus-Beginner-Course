#include <iostream>
#include <string>
using namespace std;

main(){
    //Printing data
    /*
    cerr << "Error message: Something is wrong" << endl;
    clog << "Log message: Something happend" << endl;
    
    int age1;
    string name;
    cout << "Enter you name and age: " <<endl;

    cin >> name;
    cin >> age1;
    // cin >> name >> age1; It'll do the the same work as upper two lines
    cout << "Your name is " << name << " and your age is " << age1 << endl;
*/
    //Data with spaces

    string full_name;
    int age2;

    cout << "Please give your full name and age " << endl;
    // getline() will replace cin cuz y'know it sucks..
    getline(cin,full_name);
    cin >> age2;
    cout << "My full name is: " << full_name << " and my age is: " << age2<< endl;

    return 0;
}