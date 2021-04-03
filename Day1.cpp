#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int ii;
    double dd;
    string ss;
    // Read and save an integer, double, and String to your variables.
    cin >> ii >> dd;
    getline(cin, ss);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout << i + ii << "\n";
    // Print the sum of the double variables on a new line.
    cout << d + dd << "\n";
    // Concatenate and print the String variables on a new line
    cout << s + " ";
    cout << ss;
    // The 's' variable above should be printed first.

    return 0;
}