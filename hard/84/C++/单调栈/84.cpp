class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // 判断异常情况
        if (heights.size() == 0) {
            return 0;
        } else if (heights.size() == 1) {
            return heights[0];
        }

        // 保证数组中所有的元素都能在单调栈中出队
        heights.push_back(-1);

        // 存储引用和单调栈
        vector<int> index;
        vector<int> monotonousStack;

        // 保证队列元素不为空
        index.push_back(0);
        monotonousStack.push_back(-2);

        int ans = 0;
        for (int i = 0; i < heights.size(); i++) {
            // 若不符合单调情况，则出栈并计算面积
            while (monotonousStack.back() >= heights[i]) {
                int height = monotonousStack.back();
                monotonousStack.pop_back();
                index.pop_back();
                // 计算宽，最新入栈的索引减去左边的索引
                int area = height * (i - index.back());
                ans = ans > area ? ans : area;
            }
            // 新元素入栈
            index.push_back(i + 1);
            monotonousStack.push_back(heights[i]);
        }
        return ans;
    }
};