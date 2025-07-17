#include <iostream>
#include <vector>
using namespace std;

vector<int> a = {5, 8, 6, 3}; // 原始陣列
vector<int> tree(4 * 4);      // 線段樹

// 建樹函式
void build(int node, int l, int r) {
    if (l == r) {
        tree[node] = a[l];
    } else {
        int mid = (l + r) / 2;
        build(2 * node, l, mid);
        build(2 * node + 1, mid + 1, r);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}

// 查詢 [L, R] 的總和
int query(int node, int l, int r, int L, int R) {
    if (R < l || r < L) return 0; // 不重疊
    if (L <= l && r <= R) return tree[node]; // 完全覆蓋
    int mid = (l + r) / 2;
    return query(2 * node, l, mid, L, R) + query(2 * node + 1, mid + 1, r, L, R);
}

int main() {
    build(1, 0, 3); // 從節點1開始建樹，區間0~3

    cout << "查詢區間[1, 2]總和: " << query(1, 0, 3, 1, 2) << endl; // 8 + 6 = 14
    cout << "查詢區間[0, 3]總和: " << query(1, 0, 3, 0, 3) << endl; // 5+8+6+3 = 22
}
