#include <iostream>

using namespace std;

int addNumber(int fir_para, int sec_para){
    int result = fir_para + sec_para;
    return result;
}

int main(){
    int fir_num{2}; // statement
    int sec_num{3};
    int sum = fir_num + sec_num;

    cout << "The fir sum is: " << fir_num << endl; // 2
    cout << "The sec sum is: " << sec_num << endl; // 3
    cout << "The sum of fir & sec is: " << sum << endl; // 5

    sum = addNumber(5,4);
    cout << "The sum of reusable func is: " << sum << endl; // 9

    // We can do the "sum" with just one line of code
    cout << "Sum: " << addNumber(2,2) << endl; //4
    return 0;
}