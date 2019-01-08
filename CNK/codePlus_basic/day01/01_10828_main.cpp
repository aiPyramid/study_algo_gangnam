#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

/*
���� ����

https://www.acmicpc.net/problem/10828
*/

int main() {
  ios_base::sync_with_stdio(false);

  int n;
  stack<string> stk;

  cin >> n;
  cin.ignore();

  while (n--) {
    string line;            // ��ɾ�
    getline(cin, line);     // ��ɾ� �Է¹޴´�.
    string buff;            // ����
    stringstream ss(line);  // string�� stream�� �ִ´�.

    vector<string> commands;  // ��ɾ ���� vector
    while (ss >> buff) {
      commands.push_back(buff);
    }

    if (commands[0] == "push") {
      stk.push(commands[1]);
    }
    if (commands[0] == "pop") {
      if (stk.empty()) {
        cout << -1 << '\n';
      } else {
        cout << stk.top() << '\n';
        stk.pop();
      }
    }
    if (commands[0] == "size") {
      cout << stk.size() << '\n';
    }
    if (commands[0] == "empty") {
      if (stk.empty()) {
        cout << 1 << '\n';
      } else {
        cout << 0 << '\n';
      }
    }
    if (commands[0] == "top") {
      if (stk.empty()) {
        cout << -1 << '\n';
      } else {
        cout << stk.top() << '\n';
      }
    }
  }

  return 0;
}