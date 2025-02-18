#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int choice;
    float area, radius, length, width, height, base;
    string shape;
    char again;

    do
    {
        cout << "1- Area of Circle" << endl;
        cout << "2-Area of Rectangle" << endl;
        cout << "3-Area of square" << endl;
        cout << "4-Area of Triangle" << endl;
        cout << "ENTER YOUR CHOICE" << endl;
        cin >> ws;
        cin >> shape;

        for (char &c : shape)
        {
            c = tolower(c);
        }
        if (isdigit(shape[0]))
        {
            choice = stoi(shape);
        }
        else
        {
            if (shape == "circle")
            {
                choice = 1;
            }
            else if (shape == "rectangle")
            {
                choice = 2;
            }
            else if (shape == "square")
            {
                choice = 3;
            }
            else if (shape == "triangle")
            {
                choice = 4;
            }
            else
            {
                choice = 0;
            }
        }
        switch (choice)
        {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14 * pow(radius, 2);
            break;
        case 2:
            cout << "Enter the length of the rectangle: \n";
            cin >> length;
            cout << "Enter the width of the rectangle: \n";
            cin >> width;
            area = length * width;
            break;
        case 3:
            cout << "Enter the length of the side of the aquare: ";
            cin >> length;
            area = pow(length, 2);
            break;
        case 4:
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            area = 0.5 * base * height;
            break;
        default:
            cout << "\nInvalid Choice";
        }
        if (choice >= 1 && choice <= 4)
        {
            cout << "\n Area:   " << area << endl;
        }
        cout << "\nDo you want to calculate the area of another shape?(y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'y');
    cout << "THANK YOU FOR USING THE PROGRAM ❤️";
    return 0;
}