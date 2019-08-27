#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class SavingsAccount

{

    private:

    double initialAmount;

    double interestRate;

    int numberYears;

    public:

SavingsAccount()

{

    initialAmount = 0;

    interestRate = 0;

    numberYears = 0;

}

SavingsAccount(double amt, double rate, int years)

{

    initialAmount = amt;

    interestRate = rate;

    numberYears = years;

}

double getinitialAmount()

    {

        return initialAmount;

    }

double getinterestRate()

    {

        return interestRate;

    }

    int getnumberYears()

    {

        return numberYears;

    }

//definition for recursive function

double projectedSavings(double initialAmount,double interestRate,int numberYears)

{

    if (0 == numberYears) {
        return initialAmount;
    } else {
        return (1+interestRate) * projectedSavings(initialAmount, interestRate, numberYears - 1);
    }

}

};


int main()

{



double initialAmount;

double interestRate;

int numberYears;

double r, i;



cout << "Please enter the principle: ";

cin >> initialAmount;

cout << "Please enter the interest rate: ";

cin >> interestRate;
interestRate = interestRate/100;

cout << "Please enter the number of years: ";

cin >> numberYears;

SavingsAccount s(initialAmount, interestRate, numberYears);


cout<<"Your total savings after " << numberYears << " years will be $"<<s.projectedSavings(initialAmount, interestRate, numberYears)<<endl;

return 0;

}
