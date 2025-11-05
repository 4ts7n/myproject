#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary, tax = 0.0, net_salary, tax_rate;

    cout << "Enter your salary: ";
    cin >> salary;

    if (salary > 20000) { 
    	tax_rate= 0.15;
        tax = salary * 0.15;
    }
    else if (salary > 10000) {
    	tax_rate = 0.10;
        tax = salary * 0.10;
    }
    else {
        tax = 0.0;
    }

    net_salary = salary - tax;

    cout << fixed << setprecision(2);
    cout << "\n--- Tax Calculation ---" << endl;
    cout << "Gross Salary : " << salary << endl;
    cout << "Tax Amount   : " << tax << endl;
    cout << "Net Salary   : " << net_salary << endl;

    return 0;
}
