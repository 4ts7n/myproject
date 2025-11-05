#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
    double salary, tax = 0.0, net_salary;
    char gender;
    
    cout << "Enter gender (M for Male, F for Female): ";
    cin >> gender;
    gender = toupper(gender);  

    cout << "Enter your salary: ";
    cin >> salary;

    if (gender != 'M' && gender != 'F') {
        cout << "Invalid gender! Please enter M or F." << endl;
        return 1;
    }

    if (gender == 'F') {
        if (salary >= 15000) {
            tax = salary * 0.14;
        } else {
            tax = salary * 0.12;
        }
    } 
    else if (gender == 'M') {
        if (salary >= 14000) {
            tax = salary * 0.15;
        } else {
            tax = salary * 0.13;
        }
    }

    net_salary = salary - tax;

    cout << fixed << setprecision(2);
    cout << "\n--- Tax Calculation ---" << endl;
    cout << "Gender       : " << (gender == 'M' ? "Male" : "Female") << endl;
    cout << "Gross Salary : " << salary << endl;
    cout << "Tax Rate     : " << (tax / salary * 100) << "%" << endl;
    cout << "Tax Amount   : " << tax << endl;
    cout << "Net Salary   : " << net_salary << endl;

    return 0;
}
