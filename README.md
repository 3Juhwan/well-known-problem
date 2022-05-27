# WELL-KNOWN

Problem Solving 하다가 well-known 같은 문제가 있으면 기록하고 있습니다.

## Drought

### 문제

길이가 $N$인 Array가 주어진다. Array를 시각화해서 막대그래프로 생각한다.  
$a_i, a_{i+1}$ 을 각각 -1 하는 Operation을 할 수 있다.  
Array를 평탄하게 만드는 최소 Operation 갯수를 구하라.

### 풀이

두가지 풀이가 있다.

1. 그리디 $O(N)$  
   $a_i < a_{i+1}$ 일 때, $diff = a_{i+1}-a_i$ 만큼 $a_{i+1}$과 $a_{i+2}$에서 뺀다.  
   이 과정을 반복하면 단조 감수 함수가 만들어진다.  
   Array를 Reverse 하면 단조 증가 함수가 된다.  
   위의 과정을 다시 반복한다.  
   위 과정 중에 단조 감수, 단조 증가 함수가 되지 않으면, 예외다.

2. 수학 $O(N)$  
   아래 링크 참고 바람.

### ref.

[USACO 문제](https://www.acmicpc.net/problem/24496)  
[USACO 문제 해설](http://www.usaco.org/current/data/sol_prob3_bronze_jan22.html)
