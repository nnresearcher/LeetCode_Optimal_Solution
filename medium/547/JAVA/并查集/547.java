class Solution {

  // 遍历矩阵每个点，每个朋友圈的圈主为-1

  public int find(int[] pre, int k) {

​    if(pre[k] == -1) {

​      return k;

​    } else {

​      return find(pre, pre[k]);

​    }

  }



  // 合并朋友圈圈主，变成一个朋友圈

  public void union(int[] pre, int a, int b) {

​    int ap = find(pre, a);

​    int bp = find(pre, b);

​    if(ap != bp) {

​      pre[bp] = ap;

​    }

  }



  public int findCircleNum(int[][] M) {

​    int[] pre = new int[M.length];

​    Arrays.fill(pre, -1);

​    for(int i = 0; i < M.length; i++) {

​      for(int j = 0; j < M.length; j++) {

​        if(i != j && M[i][j] == 1) {

​          union(pre, i, j);

​        }

​      }

​    }



​    int count = 0;

​    for(int i = 0; i < M.length; i++) {

​      if(pre[i] == -1)

​        count++;

​    }

​    return count;

  }

}