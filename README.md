# dfs-elementary-sample
DFSを理解するための超初心者向けサンプルプログラム

## sample1.c
### 問題設定
箱0, 1, 2，…，7がある． <br>
目標は数値xがある箱を見つけること． <br>
あなたは初めに箱0を開ける． <br>
箱 i 中に入っている数字の値はa[i]である． <br>
箱 i を開けた後，その中の数値a[i]がxではなかったとき，箱を開け直す． <br>
箱 i の次は後は箱a[i]を開ける． <br>

## sample2.c
問題設定はsample1.cと同じ． <br>
ただしwhileループのかわりに再帰処理をしている． <br>

## sample3.c
### 問題設定
こんなグラフがある． <br>
このグラフをDFS探索していく． <br>
![](sample3_graph.png)

### プログラム
DFS探索を行い探索の順序を出力する． <br>

## sample4
配列aには2，4，6，…，40が入っている． <br>
このプログラムではループを使わずに再帰処理だけで配列aの中身を出力する． <br>
