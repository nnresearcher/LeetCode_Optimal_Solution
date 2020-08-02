# 547题解

## 题目

链接： https://leetcode-cn.com/problems/friend-circles/ 

## 得分

![1596371838573](C:\Users\xiaodong\AppData\Roaming\Typora\typora-user-images\1596371838573.png)

共计132.47

## 解题思路

使用并查集方法

并查集两个方法：find和union。find用来查找一个节点所在组的根节点，主要思想是递归；union是将两个根节点不同的小组进行合并，使一个组的根节点成为另一个组根节点的子节点，实现有关联即归一。

附并查集算法讲解：https://blog.csdn.net/qq_41593380/article/details/81146850 