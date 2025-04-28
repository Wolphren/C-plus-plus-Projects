#include <iostream>
using namespace std;
/*This can be used to create multiline
comments*/

int main() {
    cout << "Hello World!" <<"\n\n"; // prints Hello World! (\n creates a new line)
    cout << "I am Learning C++" << endl; // endl ends the line and starts a new one
    cout << 3 + 3 << endl; //This prints the result of the equation

    int myNum = 15; // This creates an Integer (Whole point number without decimals) variable with the value of 15
    myNum = 10; // This changes the value to 10
    cout << myNum << endl; // Outputs 10

    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    int myAge = 23;
    cout << "I am " << myAge << " years old." << endl; // You can use << to combined both text and variables

    int x = 5, y = 6, z = 50; //can declare more than one variable of the same type
    cout << x + y + z << endl;

    x = y = z = 50; // can also assign the same value to multiple variables in one line
    cout << x + y + z << endl;

    const int myage = 23; // const means that the variable is unchangeable and read-only but you have to set the variable when you declare it

    // Create integer variables
    int length = 4;
    int width = 6;

    // Calculate the area of a rectangle
    int area = length * width;

    // Print the variables
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n";

    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    cout << "Student ID: " << studentID << "\n";
    cout << "Student Age: " << studentAge << "\n";
    cout << "Student Fee: " << studentFee << "\n";
    cout << "Student Grade: " << studentGrade << "\n";

    int w; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> w; // Get user input from the keyboard
    cout << "Your number is: " << w; // Display the input value
    return 0;
}