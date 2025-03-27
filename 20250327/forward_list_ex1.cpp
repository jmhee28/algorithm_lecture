#include <iostream>
#include <forward_list>
#include <algorithm>
using namespace std;
int main() {
    forward_list<int> fl;
    int num;

    cout << "정수 10개를 입력하세요:\n";

    for (int i = 0; i < 10; ++i) {
        cin >> num;
        fl.push_front(num);  // 앞에 삽입
    }

    // 정렬: forward_list는 sort 멤버 함수를 제공함
    fl.sort();

    cout << "오름차순 정렬 결과:\n";
    for (int n : fl) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
