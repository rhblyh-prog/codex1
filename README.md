# C 语言练习 · 字母金字塔

用嵌套的 `for` 循环打印一个居中的字母金字塔。示例程序在 `main.c`。

## 编译运行

在装有 GCC 的 Windows PowerShell 中，进入 `main.c` 所在目录后执行：

```powershell
gcc -std=c11 -Wall -Wextra -pedantic main.c -o pyramid.exe
.\pyramid.exe
```

输出：

```text
    a
   aba
  abcba
 abcdcba
abcdedcba
```

## 循环怎么执行

外层循环的 `row` 从 1 数到 5，每次打印一整行。外层循环每进行一次，就按顺序执行下面三段内层循环，再换行。

1. 打印 `rows - row` 个空格，让每行居中。
2. 从下标 `0` 开始，正序打印到下标 `row - 1`。字母表从下标 0 开始，`alphabet[0]` 是 `a`。
3. 从下标 `row - 2` 开始，倒序打印到下标 `0`。中间字母已经打印过，所以从它的前一个字母开始。

以第 3 行为例，先打印两个空格，再按下标 `0, 1, 2` 打印 `abc`，最后按下标 `1, 0` 打印 `ba`。第 1 行的倒序循环从 `-1` 开始，条件一开始就不成立，因此只打印一个 `a`。

把 `rows` 改成 1 到 26 之间的整数，可以练习预测不同的输出。
