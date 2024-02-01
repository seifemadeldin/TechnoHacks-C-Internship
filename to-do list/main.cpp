#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <string> s{};
    bool running = true;
    while (running) {
        cout << "------------------------------------ To-do List ------------------------------------" << endl << endl;
        for (int i = 0; i < s.size(); i++){
            cout << i+1 << "- " << s[i] << endl;
        }
        cout << endl;
        char a;
        cout << "a - Add task     d - Delete task     e - Empty the To-do list     q - Quit the program" << endl;
        cout << "Enter your choice: ";
        cin >> a;
        cout << endl;
        a = tolower(a);
        switch (a) {
            case 'a': {
                cout << "Enter the new task:" << endl;
                string task;
                cin >> task;
                s.push_back(task);
                break;
            }
            case 'd': {
                cout << "Enter the number of the task to delete:" << endl;
                int id;
                cin >> id;
                if (id >= 1 && id <= s.size()) {
                    s.erase(s.begin() + id - 1);
                    cout << "Task number " << id << " deleted." << endl;
                } else {
                    cout << "Invalid task number. No task deleted." << endl;
                }
                break;
            }
            case 'e':
                s.clear();
                cout << "The To-do list is empty" << endl;
                break;
            case 'q':
                cout << "Exiting the program..." << endl;
                running = false;
                break;
            default:
                cout << "Enter a valid value." << endl;
                break;
        }
    }

    return 0;
}
