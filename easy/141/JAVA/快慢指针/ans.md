# 141题解

## 题目

链接： https://leetcode-cn.com/problems/linked-list-cycle/submissions/ 

## 得分

<img src="C:\Users\xiaodong\AppData\Roaming\Typora\typora-user-images\1595774966962.png" alt="1595774966962" style="zoom:100%;" />

共计得分105.49分

## 解题思路

涉及知识点：快慢指针

定义两个指针，慢指针每次走一步，快指针每次走两步，若存在环形链表，快指针最终会“追上”慢指针，即两个指针重合。