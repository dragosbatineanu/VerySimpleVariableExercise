

#include <iostream>

int main()
{
    // Declaration of variables

    double a;
    double b;
    double sum;
    double difference;
    double product;
    double quotient;


    // Input of variables

    std::cout << "Enter the numbers you want added\n";
    std::cin >> a;
    std::cin >> b;

    //Calculations

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    //Results

    std::cout << "Sum of the two numbers: ";
    std::cout << sum << std::endl;

    std::cout << "Difference between the two numbers: ";
    std::cout << difference << std::endl;

    std::cout << "Product of the two numbers: ";
    std::cout << product << std::endl;

    std::cout << "Quotieng of the two numbers: ";
    std::cout << quotient << std::endl;

}
