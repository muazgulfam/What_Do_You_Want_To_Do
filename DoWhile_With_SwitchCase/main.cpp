#include <iostream>

using namespace std;

int main()
{
    char selection{};
    cout << "\t\tWhat do you want to do right now" << endl;
    do{
        cout << "\n1. Read a book" << endl;
        cout << "2. Play a video game" << endl;
        cout << "3. Use any social media platform" << endl;
        cout << "4. Play any physical game" << endl;
        cout << "Q. Quit this program" << endl;
        cout << "Enter your selection please ";
        cin >> selection;

        switch(selection){
            case '1':
                cout << "\nThere are many books available in the Library. You may go there to read the books \n" << endl;
                break;
            case '2':
                cout << "\nYou can play Fifa in either PS4 or Xbox \n" << endl;
                break;
            case '3':
                cout << "\nYou can Login in to any of your social media account to use it \n" << endl;
                break;
            case '4':
                cout << "\nYou can play BasketBall, Cricket or FootBall in the ground \n" << endl;
                break;
            case 'Q':
            case 'q':
                cout << "OK!, Goodbye" << endl;
                break;
            default:
                cout << "Not a valid option. Please select either '1', '2', '3', '4' or 'Q'," << endl;

        }
    }
    while(selection != 'q' && selection != 'Q');
    cout << "The program has been ended" << endl;
    return 0;
}
