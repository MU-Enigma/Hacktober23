# Type 3 - Level 3 - Hard

**Submit your code witgh file named as `yourname_ProblemNo._Level3` within `Level3` folder.**

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


## Problem 2: Magic Marbles

You have N marbles lying on the floor, each marked with an integer A<sub>i</sub>. You can choose to either keep the number on the marble as it is or replace it with a predetermined integer B<sub>i</sub>. You must collect all the marbles in any order.

You have two journals, J1 and J2. Whenever you pick up a marble, you record the following:
- In Journal J1: The original integer A<sub>i</sub> from the marble.
- In Journal J2: The actual value on the marble, either A<sub>i</sub> or B<sub>i</sub>, depending on whether you replaced the number.

You have a preference for sorted arrays and want to keep both journals sorted in **non-decreasing order**. 

What is the minimum value that the last entry, corresponding to the last marble picked up, can have in both J1 and J2? It is guaranteed that you can always keep both journals sorted.

**Constraints:**
- All input values are integers.
- 1 ≤ N ≤ 2 × 10<sup>5</sup>
- 1 ≤ A<sub>i</sub>, B<sub>i</sub> ≤ 10<sup>9</sup>
- 1 ≤ T ≤ 2 × 10<sup>5</sup>
- The sum of N across all test cases does not exceed 2 × 10<sup>5</sup>.

**Input Format:**

The input consists of the following:
- The first line of input contains a single integer T, which is the number of test cases.
- For each test case, there are three lines:
  - The first line contains a single integer N, the number of marbles.
  - The second line contains N space-separated integers A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>, representing the initial numbers on the marbles.
  - The third line contains N space-separated integers B<sub>1</sub>, B<sub>2</sub>, ..., B<sub>N</sub>, representing the alternate numbers that may replace the original integers on the marbles.

**Output Format:**

For each test case, output a single line containing two space-separated integers, which are the minimum values that the last entry in J1 and J2 can take, respectively.

**Example 1**

**INPUT** :
```
1
5
1 4 10 3 11
2 1 6 4 8
```
**OUTPUT**:
```
11 8
```

**Example 2:**

**INPUT**:
```
2
3
1 1 1
1 1 1
4
1 2 3 4
1 2 1 1
```
**OUTPUT**:
```
1 1
4 4
```
</br>

## Problem 3: Cultivating Vinland

Thorfinn is a trader and explorer searching for the elusive land known as Vinland. Upon discovering Vinland, he decides to settle there and start cultivating the land. Vinland is a rectangular piece of land that can be divided into an N by M grid of square patches, each with a unit side length. However, not all patches of land are fertile, and crops can only be grown on fertile patches. Therefore, the selection of land for cultivation must be done carefully.

To protect the selected patches from animals, Thorfinn needs to build fences. Animals, located at a patch (i, j), can move up, down, right, or left, i.e., to (i − 1, j), (i + 1, j), (i, j − 1), or (i, j + 1). A patch is considered enclosed if no animals can enter it. If a patch of land is not completely enclosed, the crops will be destroyed by grazing animals, and the land will not yield any profit. Building a unit length of fence costs 1 silver coin, and a unit area of enclosed land will yield crops that can be sold for 4 silver coins. It is assumed that no animals are initially present on fertile land.

As the only mathematician in Thorfinn's group, you are tasked with helping Thorfinn select the land to cultivate. Your goal is to choose one continuous piece of fertile land that yields the maximum profit (profit = crop earnings - cost of fencing).

**Input Format:**

The input consists of the following:
- The first line contains three space-separated integers, N, M, and R. N and M denote the size of the land area, and R denotes the number of fertile patches in the land.
- Then, R lines follow, each containing two integers i and j, indicating the positions of the fertile patches.

**Output Format:**

The output should contain a single integer representing the maximum profit that can be obtained.

**Constraints**:
• All input values are integers

• 1 ≤ N × M ≤ 10<sup>6</sup>

• 1 ≤ N, M ≤ 10<sup>6</sup>

• 0 ≤ R ≤ N × M

**Sample Test Cases:**

**Input 1:**
```
5 5 7
1 1
2 1
2 2
2 4
3 2
3 4
5 4
```

**Output 1:**
```
6
```

**Input 2:**
```
5 4 8
1 1
1 2
1 3
2 2
4 3
4 4
5 3
5 4
```

**Output 2:**
```
8
```

**Explanation for Testcase 1**:
![](https://files.catbox.moe/hfirwh.png)

The selected region uses fence of length 10 units includes an area of 4 sq. unit. Yielding a profit of `4 × 4 − 10 = 6`.

**Explanation for Testcase 2**
![](https://files.catbox.moe/doohl6.png)

The selected region uses fence of length 8 units includes an area of 4 sq. unit. Yielding a profit of `4 × 4 − 8 = 8`.




