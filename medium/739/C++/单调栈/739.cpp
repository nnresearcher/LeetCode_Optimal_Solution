#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <deque>
#include <queue>
#include <set>
#include <functional>
using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        // 单调栈和索引
        vector<int> monotonousStack{101};
        vector<int> index;

        for (int i = 0; i < T.size(); i++) {
            // 若出现元素不满足单调递减，那么就表示监测到高温情况
            while (monotonousStack.back() < T[i]) {
                // 出现高温，计算天数差
                T[index.back()] = i - index.back();

                // 栈顶出队
                monotonousStack.pop_back();
                index.pop_back();
            }
            // 入队
            monotonousStack.push_back(T[i]);
            index.push_back(i);

            // 该天的值置0
            T[i] = 0;
            
        }
        return T;
    }
};