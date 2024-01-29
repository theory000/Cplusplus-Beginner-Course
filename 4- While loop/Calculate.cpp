#include <iostream>
using namespace std;

// Function to calculate the sum of numbers
int addNumbers(int num1, int num2, int num3, int num4, int num5) {
    return num1 + num2 + num3 + num4 + num5;
}

int main() {
    // Declare variables for subject marks
    int math, sci, phy, soc, geo;

    // Prompt for and input marks for each subject
    cout << "Enter Marks for Each Subject" << endl;
    cout << "Maths: "; cin >> math;
    cout << "Science: "; cin >> sci;
    cout << "Physics: "; cin >> phy;
    cout << "Social Studies: "; cin >> soc;
    cout << "Geography: "; cin >> geo;

    // Calculate total marks
    int totalMarks = addNumbers(math, sci, phy, soc, geo);

    // Display total marks
    cout << "Total Marks: " << totalMarks << endl;

    return 0;
}
