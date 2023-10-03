# Type 3 - Level 3 - Hard
## Problem 1: The Mad Scientist

A mad scientist is conducting an extremely delicate experiment that requires her to precisely control the temperature of the experiment. In front of her there are knobs which alter the temperature of this experiment (in Celcius). The scientist loves to turn knobs (they don’t call her mad for nothing), but she is also very careful and wants to make sure that the temperature never goes below 0 degrees or else the experiment will fail. The experiment starts at 0 degrees.
There are N knobs which are numbered from 1 to N from left to right, where the ith knob controls the temperature by a value of Ai degrees. Each knob can be turned only once. She starts from the first knob and goes till the Nth knob in order and for each knob, she can either turn it once or
choose to ignore it. ”Knobviously”, the mad scientist wants to figure out the maximum number of knobs she can turn without the temperature ever going below 0 degrees.

Input Format:
The first line contains an integer N, the total number of knobs. The next line contains N space separated Integers A<sub>i</sub> (1 ≤ i ≤ N), the temperature change caused by the i<sup>th</sup> knob.

```
N
A₁ A₂ A₃
```

Output Format:
Print the maximum number of knobs the mad scientist can turn.

```
Example 1:
Input:
12
-3 -3 -7 -7 -1 -7 3 3 -2 -1 0 -7

Output:
5
```

```
Example 2:
Input:
8
9 -5 -3 -2 -1 7 6 -14

Output:
7
```

Constraints:
 
 ```
1 ≤ Aₙ ≤ 10⁵ and −10⁶ ≤ Aᵢ ≤ 10⁶
```
 </br>

