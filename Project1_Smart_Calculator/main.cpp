#include <iostream>
using namespace std;

int main () {
    cout << "Calculator\n";
    double num1, num2;
    char oper;
    int option;
    
while (true) {
    
    cout << "1- New calculation\n";
    cout << "2- Exit\n";
    cin >> option;
    
        switch (option) {
        case 1:
        cout << "Enter Operation\n";
        cin >> num1 >> oper >> num2;
    // Invalid Operator
        if (oper != '+' && oper != '-' && oper != '*' && oper != '/' ) {
        cout << "Enter a Valid Operator Again\n";
        continue;
        
    } 
    // Divisible By 0 Validarion
    if (oper == '/' && num2 == 0) {
            cout << "Enter a Valid Number Again\n";
            continue;
        }
    // Calculation
        switch (oper) {
        case '+':
        cout << num1 + num2 << endl;
        break;
        case '-':
        cout << "Total: " << num1 - num2 << endl;
        break;
        case '*':
        cout << num1 * num2 << endl;
        break;
        case '/':
        cout << num1 / num2 << endl;
        break;
    }
    break;
    case 2:
    cout << "Thank You For Using Our Calculator\n";
    return 0;

    default:
    cout << "Enter a Valid Option\n";
    }
    }
    return 0;
}

// Ask user for:
// - number1
// - operator (+ - * /)
// - number2

// Support:
// +  -  *  /

// Add validation:
// - division by zero
// - invalid operator

// Improve it:

// Add loop:
// - user can repeat calculation

// Add menu:
// 1 → New calculation
// 2 → Exit

// BONUS:
// - Support multiple operations in one run
// - Show calculation history

// //////////////////////////////////////////////////////
// EXTENSION — ADVANCED CALCULATOR FEATURES (NO SOLUTION)
// //////////////////////////////////////////////////////

// Goal: Improve your calculator with these features:

// =====================================================
// PART 1 — Multiple Operations in One Run
// =====================================================

// After performing a calculation:
// - Ask the user if they want to:
//   1 → Continue with another calculation
//   2 → Return to menu
//   3 → Exit

// ///////////////////////////////////////////////

// If the user chooses to continue:
// - Allow chaining calculations
//   Example:
//   First: 5 + 3 → result = 8
//   Then: * 2 → result = 16
//   Then: - 4 → result = 12

// ///////////////////////////////////////////////

// Keep using the last result as the first number
// for the next operation

// ///////////////////////////////////////////////

// Validate input at every step:
// - operator must be valid
// - division by zero must be handled

// =====================================================
// PART 2 — Calculation History
// =====================================================

// Store each calculation performed

// Example history:
// 5 + 3 = 8
// 8 * 2 = 16
// 16 - 4 = 12

// ///////////////////////////////////////////////

// After each calculation:
// - Save the operation and result

// ///////////////////////////////////////////////

// Add a menu option:
// 3 → Show history

// ///////////////////////////////////////////////

// When user selects "Show history":
// - Display all previous calculations

// ///////////////////////////////////////////////

// Add another option:
// 4 → Clear history

// ///////////////////////////////////////////////

// When user selects "Clear history":
// - Remove all stored calculations

// =====================================================
// BONUS (Optional)
// =====================================================

// - Limit history size (e.g., last 10 operations)
// - Allow user to reuse a previous result
// - Format output nicely

// //////////////////////////////////////////////////////