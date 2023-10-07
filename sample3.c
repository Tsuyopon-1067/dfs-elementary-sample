#include <stdio.h>

int graph[8][8] = {{0, 1, 0, 0, 0, 0, 0, 0}, {1, 0, 1, 1, 0, 0, 0, 0},
                   {0, 1, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 1, 0, 0, 0},
                   {0, 0, 0, 1, 0, 1, 1, 1}, {0, 0, 0, 0, 1, 0, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 1, 0, 0, 0}};

int is_visited[8];
int depth = 1;

void print_indent(int depth) {
    for (int i = 0; i < depth; ++i) {
        for (int j = 0; j < 4; ++j) putchar(' ');
    }
}
void dfs(int node_idx) {
    // 頂点node_idxが探索済みならis_visited[node_idx] == 1なのでreturn
    if (is_visited[node_idx] == 1) {
        print_indent(depth);
        printf("return\n");
        --depth;
        return;
    }

    // 頂点node_idxが未探索ならここから先の処理を行う
    is_visited[node_idx] = 1; // 頂点node_idxを探索済みにする
    print_indent(depth);
    printf("node_idx = %d\n", node_idx);
    for (int i = 0; i < 8; i++) {
        print_indent(depth);
        printf("%d -> %d : %d\n", node_idx, i, graph[node_idx][i]);
        if (graph[node_idx][i] == 1) {
            ++depth;
            dfs(i);
        }
    }

    print_indent(depth);
    printf("return\n");
    --depth;
    return;
}
int main() { 
    for (int i = 0; i < 8; ++i) {
        is_visited[i] = 0;
    }

    dfs(0);
    return 0;
}
