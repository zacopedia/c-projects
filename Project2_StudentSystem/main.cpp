#include <iostream>
#include <string>
using namespace std;

int main () {
    
    // write code here
   
    
    string students [100];
    double scores[100];
    int menu = 0;
    int countStudent = 0;
    
    
   
    string search;

    // cin >> students[100];
    // cin >> scores;
    
    while (menu != 6) {
    cout << "\n=====Menu====\n";
    cout << "1- Add student\n";
    cout << "2- Show all students\n";
    cout << "3- Find highest score\n";
    cout << "4- Find average score\n";
    cout << "5- Search student by name\n";
    cout << "6- Exit\n";
    

    cin >> menu;

    switch (menu) {
        case 1:
        cout << "Enter Student Name And Score\n";
        cin >> students[countStudent];
        cin >> scores[countStudent];
        countStudent++;
        break;
        case 2:
        for (int i = 0; i < countStudent; i++) {
            cout << students[i] <<  "Score:" << scores[i] << endl;
        }
        break;
        case 3:
        if (countStudent > 0) {
            double hightstScore = scores[0];
        for (int i = 1; i < countStudent; i++) {
            if (scores[i] > hightstScore ) {
                hightstScore = scores[i];
            }
        }
        cout << "The Highest Score Is: " << hightstScore << endl;
        } else {
            cout << "No Student\n";
        }
        
        break;
        case 4:
        if (countStudent > 0) {
            double sumScores = 0;
        for (int i = 0; i < countStudent; i++) {
            sumScores += scores[i];
        }
        double average = sumScores / countStudent;
        cout << "The Average Score Is: " << average << endl;
        } else {
            cout << "No Student\n";
        }
        
        break;
        case 5:
        cin >> search;
        bool found = false;
        for (int i = 0; i < countStudent; i++) {
            if (search == students[i]) {
                cout << "Found " << students[i] << endl;
                found = true;
                break;
            } 
        }
        if (!found) cout << "Not Found\n";
        break;
        case 6:
        cout << "Exiting....\n";
        break;
    }

    } 




    return 0;
}

// Features:

// Store:
// - student names
// - scores

// Menu:

// 1 → Add student
// 2 → Show all students
// 3 → Find highest score
// 4 → Find average score
// 5 → Search student by name
// 6 → Exit

// Constraints:
// - Use arrays (no vector yet)
// - Limit size (e.g., 100 students)

// BONUS:
// - Prevent duplicate names
// - Count passed/failed students
