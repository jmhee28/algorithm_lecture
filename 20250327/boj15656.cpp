#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> nums;
vector<int> result;

void backtrack(int depth) {
    if (depth == M) {
        for (int i = 0; i < M; ++i)
            cout << result[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < N; ++i) {
        result[depth] = nums[i];
        backtrack(depth + 1);
    }
}

int main() {

    cin >> N >> M;
    nums.resize(N);
    result.resize(M);

    for (int i = 0; i < N; ++i)
        cin >> nums[i];

    sort(nums.begin(), nums.end());  // 사전 순 출력을 위한 정렬

    backtrack(0);

    return 0;
}
