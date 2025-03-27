#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl = {10, 20, 30};

    // 삽입: 맨 앞에 삽입
    fl.push_front(5);  // 5 10 20 30

    // 삽입: 특정 위치 뒤에 삽입
    auto it = fl.before_begin();  // push_front 전에 필요한 위치
    fl.insert_after(it, 3);       // 3 5 10 20 30

    // 삭제: 특정 위치 뒤 요소 제거
    fl.erase_after(it);           // 5 10 20 30

    // 출력
    for (int v : fl) std::cout << v << " ";
}