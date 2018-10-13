include <iostream>
#include <cmath>
using namespace std;
void get_input(double a, double b, double c); // Takes in the numbers for the sides
double tri(double a, double b, double c);// Checks to make sure two sides is greater than the third
double get_area(double sum, double a, double b, double c);// Calculates the area of the triangle
void get_output(double s1, double s2, double s3, double area);// Outputs length of the three sides and area
int main()
{
    char ans;
    double a, b, c;

 

    do

    {

        get_input(a, b, c);

        double sum = tri(a, b, c);

        double area = get_area(sum, a, b, c);

        get_output(a, b, c, area);

 

        cout << "Perform another calculation? (y/n): ";

        cin >> ans;

    }while(ans == 'y' || ans == 'Y');

 

    return 0;

}

void get_input(double a, double b, double c)

{

    cout << "Please enter a number for first side: ";

    cin >> a;

    cout << endl;

    cout << "Please enter a number for second side: ";

    cin >> b;

    cout << endl;

    cout << "Please enter a number for third side: ";

    cin >> c;

    return(a, b, c);

 

}

double tri(double a, double b, double c)

{

    double s1, s2, s3;

    s1 = a + b;

    s2 = a + c;

    s3 = b + c;

 

    if((s1 > c) && ( s2 > B) && (s3 > a))

    {

        double sum = a + b + c;

        return(sum);

    }

    else

    {

        cout << endl;

        cout << " Error\n";

    }

    return 0;

}

double get_area(double sum, double a, double b, double c)

{

    double halfcir = sum / 2;

    double area = sqrt(halfcir * (halfcir - a) * (halfcir - B) * (halfcir - c));

    return(area);

}

void get_output(double a, double b, double c, double area)

{

    cout << "The length of side one is: " << a << endl;
    cout << endl;

    cout << "The length of side two is: " << b << endl;

    cout << endl;

    cout << "The length of side three is: " << c << endl;

    cout << endl;

    cout << "The area of the triangle is: " << area << endl;

}

