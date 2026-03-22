#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    cout << "\n ========== Gessing Game ========== \n";
    int guess;
    int option;
    

    srand(time(0));

    char y;

    do {
    cout << "1-easy\n";
    cout << "2-Medium\n";
    cout << "3-Hard\n";

    cin >> option;

    int count = 1;
    int loose = 0;
    int win = 0;

        while (count <= 4)  {
            switch (option) {
                // Easy mode
        case 1: {
            int num = rand() % 50 + 1;
            cout << "Guess a Number From 1-50\n";
            cin >> guess;
            count++;
       

        if (guess == num) {
        cout << "Correct is: " << num << endl;
        win++;
    } else if (guess < num){
        cout << "Too Low\n";
        loose++;
    } else {
        cout << "To High\n";
        loose++;
    }
    break;
        }
        // Meduim Mode
        case 2: {
            int num = rand() % 100 + 1;
            cout << "Guess a Number From 1-100\n";
            cin >> guess;
            count++;
        
        if (guess == num) {
        cout << "Correct is: " << num << endl;
        win++;
    } else if (guess < num){
        cout << "Too Low\n";
        loose++;
    } else {
        cout << "To High\n";
        loose++;
    }
    break;
        }
        // Hard Mode
        case 3: {
            int num = rand() % 500 + 1;
            cout << "Guess a Number From 1-500\n";
            cin >> guess;
            count++;
        
        if (guess == num) {
        cout << "Correct is: " << num << endl;
        win++;
    } else if (guess < num){
        cout << "Too Low\n";
        loose++;
    } else {
        cout << "To High\n";
        loose++;
    }
    break;
    
        } 
    
    default:
    cout << "Please Enter a Valid Option\n";
    break;

            }
            
    if (win == 3){
            break;
        }
    
    }  

    cout << "====================\n";
    cout << "Attemp" << count << "/4\n";
    cout << "====================\n";
    
    
    if ( win >= 2) {
        cout << "Your Win\n";
        cout << win << " point\n";
    } 
    else {
        cout << "Your Lose\n";
        cout << loose << " point\n";
    }

    cout << "Number of attempts used: " << count << endl;

    // Rest The Game
    // count = 1;
    // win = 0;
    // loose = 0;

    cout << "Do You Want To Play Again? (y/n)\n";
    cin >> y;
    
    } while (y == 'y') ;

    return 0;
}


// Features:

// Program generates a secret number

// User tries to guess it

// Give hints:
// - Too high
// - Too low

// Add difficulty:

// Easy → 1–50
// Medium → 1–100
// Hard → 1–500

// Limit attempts

// Show result:
// - Win / Lose
// - Number of attempts used

// BONUS:
// - Add score system
// - Replay option
// - Random number each game