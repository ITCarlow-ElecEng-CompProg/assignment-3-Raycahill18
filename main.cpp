
/** \ Ray Cahill
 *
 * \ Lab 3
 * \ 25/10/1990
 * \ Computer Programming
 *
 */
#include <iostream>
#include <math.h>
using namespace std;

//mail function
int main()
{
    //variable declarations
    double values[10] = {0}, sum = 0, mean = 0, product = 0, standev;
    int n;

    n = 0;
    //while loop criteria
    while (n<10)
    {
        cout << "Enter 10 values: ";
        cin >> values[n];
        sum = sum + values[n];
        n++;
    }

    // results for the sum calculation
    cout << "Sum is :" << sum << endl;
    //equation to calculate the mean
    mean = sum / 10.0;

    // displays mean results
    cout << "mean is : " << mean << endl;

    n = 0;

    // while loop
    while (n<10)
    {
        product =  product + ((values[n]- mean) * (values[n] - mean)) /9.0;
        n++;
    }

    // displays the results of the prodcuct
    cout << "Product is: " << product << endl;

    //Equation to calculate the standard
    standev = pow(product, 0.5);
    cout << "Standard Deviation" << standev << endl;

    return 0;
}
