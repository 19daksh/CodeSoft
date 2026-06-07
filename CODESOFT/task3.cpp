#include <iostream>
#include <string>
using namespace std;

int main() {
    string tasks[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== TO-DO LIST =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Last Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore();
                cout << "Enter task: ";
                getline(cin, tasks[count]);
                count++;
                cout << "Task added successfully!" << endl;
                break;

            case 2:
                if (count == 0) {
                    cout << "No tasks available." << endl;
                } else {
                    cout << "\nYour Tasks:" << endl;
                    for (int i = 0; i < count; i++) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                }
                break;

            case 3:
                if (count == 0) {
                    cout << "No tasks to delete." << endl;
                } else {
                    count--;
                    cout << "Last task deleted." << endl;
                }
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}