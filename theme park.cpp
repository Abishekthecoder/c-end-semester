#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> q;
    const int MAX_SIZE = 5;
    string name;

    for (int i = 1; i <= 6; i++) {
        cout << "Enter person " << i << " name: ";
        cin >> name;

        if (q.size() == MAX_SIZE) {
            cout << "Queue is full! " << name << " cannot join.\n";
        } else {
            q.push(name);
            cout << name << " added to the queue.\n";
        }
    }

    cout << "\nWaiting Queue: ";

    queue<string> temp = q;

    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    if (!q.empty()) {
        cout << "\n\n" << q.front() << " entered the ride.\n";
        q.pop();
    }

    cout << "Waiting Queue after ride: ";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}
