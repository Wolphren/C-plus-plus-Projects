#include <iostream>
#include <string>
#include <cmath>
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

    float myFloatNum = 9.98;
    double myDoubleNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    cout << myText << endl;

    /*float vs. double
    The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.*/

    float f1 = 35e3; //A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

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
    cout << "Your number is: " << w << endl; // Display the input value

    int x1, y1;
    int sum;
    cout << "Type a number: ";
    cin >> x1;
    cout << "Type another number: ";
    cin >> y1;
    sum = x1 + y1;
    cout << "Sum is: " << sum << endl;

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName); // You can use firstName + lastName or you can append them together
    cout << fullName << endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "The length of the txt string is: " << txt.size() << endl;
    cout << txt[txt.length() - 1] << endl;
    cout << txt[22];
    cout << txt[9];
    cout << txt[3] << endl;
    txt[0] = 'x';
    cout << txt[0] << endl;

    string myString = "Hello";
    cout << myString << endl; // Outputs Hello

    cout << myString.at(0) << endl;  // First character
    cout << myString.at(1) << endl;  // Second character
    cout << myString.at(myString.length() - 1) << endl;  // Last character

    myString.at(0) = 'J';
    cout << myString << endl;  // Outputs Jello

    //cin records until it reaches a space so it can only record one word answers
    cin.ignore(); // sometimes getline can not work properly if cin has been used previously and will just present the stored data instead of asking for new data this line erases any preexisting data giving cin a clean slate
    cout << "Type your full name: ";
    getline (cin, fullName); //getline is often used in these scenarios as it takes the cin as its first parameter meaning it gets an input but its second parameter means it gets the whole input
    cout << "Your name is: " << fullName << endl; //I got some problems from a cin and a getline too close to each other

    // Type your full name: John Doe
    // Your name is: John Doe

    //C-style strings are created with the char type instead of string
    //originally does not have a string type for easily creating variables using an array of char to make a string was used instead
    string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)

    //cmath examples
    cout << max(5, 10) << endl;
    cout << min(5, 10) << endl;
    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;

    //variable = (condition) ? expressionTrue : expressionFalse; (shorthand if...else statement)
    /*int time = 20;
    if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }*/
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << endl;

    /*
    Use the switch statement to select one of many code blocks to be executed.
    switch(expression) {
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // code block
    }
        The switch expression is evaluated once
        The value of the expression is compared with the values of each case
        If there is a match, the associated block of code is executed
        The break and default keywords are optional, and will be described later in this chapter
    */
   int day = 4;
    switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    }
    // Outputs "Thursday" (day 4)

    //The default keyword specifies some code to run if there is no case match:
    switch (day) {
        case 6:
          cout << "Today is Saturday" << endl;
          break;
        case 7:
          cout << "Today is Sunday" << endl;
          break;
        default:
          cout << "Looking forward to the Weekend" << endl;
    }
      // Outputs "Looking forward to the Weekend"

    //While loop vs Do While loop While loop Checks first then runs the code. Do While loop runs the code once before checking to see if the condition is true
    /*
    While (condition){
        code
    }
    do {
        code    
    }
    while(condition)
    */

    //For loop is like a while loop but for a specified length of time
    /*
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
    */
   //nested loops inner loop will be run entirely once for every one iteration of the outer loop
   // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times
    
        // Inner loop
        for (int j = 1; j <= 3; ++j) {
        cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    //for-each loop was added to C++ in 2011 meant to loop through elements in an array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }

    return 0;
}