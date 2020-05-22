# Design & Analysis of Algorithm Assignment
Programming Language: **C++**
Compiler user: **g++**

To compile on command line use 
> g++ *.cpp -o output/*.out

Questions List:
### (Divide & Conquer)
1. [Given a sorted array of integers, find index of first and last occurance of a given
number.If the element is not found in an array, report that as well.](/ap1.cpp)
2. [Given a sorted array, find a given element in O (Log n) time.](/ap2.cpp)
3. [Given an Array, find peack element in it.APeack elements is the element that is
greater than its neighbours.](/ap3.cpp)
4. [Given an Array, find the number of inversions of it. If (i and A (i) >A (j)) then
the pair (i, j) is called the inversion of the array. We need to count all such pairs
of inversions of Array.](/ap4.cpp)
5. [Given an array of integers, find the minimum and maximum elements persents
in it by doing minimum comparisions by using divide and conauer approach.](/ap5.cpp)

### Advanced Problems:
6. [Given many stacks of coins which are arranged adjacently. We need to collect all
these coins in the minimum number of steps where in one step we can collect
one horizontal line of coins or vertical line of coins and collected coins should be continuous.](/aa1.cpp)
7. [Given an array arr[] of length N, the task is to find the sum of the maximum
elements of every possible sub-array of the array.](/aa2.cpp)
8. [Given an array of strings arr[ ], the task is to find the largest string in the array
which is made up of the other strings from the array after concatenating one
after another. If no such string exists, then print -1.](/aa3.cpp)
9. [Given an Array [ ] of N elements and a number K. ( 1 <= K <= N ) . Split the
given array into K sub – arrays (they must cover all the elements). The
maximum subarray sum achievable out of K sub-arrays formed, must be
minimum possible. Find that possible subarray sum.](/aa4.cpp)
10. [Given an array of integers. The task is to rearrange elements of the array such
that no two adjacent elements in the array are same.](/aa5.cpp)

### (Sorting & Searching)
11. [Given an array of integrs, sort it by using merger sort technique.](/bp1.cpp)
12. [Sort an array iteratively and recursively by using bubble sort technique.](/bp2.cpp)
13. [Given an array, use in place sorting that is much faster then merge sort and
heapsort.](/bp3.cpp)
14. [Given an array of integers use stable in-place sorting that build the final sorted
array one at a time. ](/bp4.cpp)
15. [Given a collection of n items, each of which has a non-negative key whose
maximum value is at most k, efficitevly sort it by using counting sort. ](/bp5.cpp)
16. [Given an array of integers, sort it by building max or min heap.](/bp6.cpp)

### Advanced Problems:
17. [Given an array A [ ] consisting 0s, 1s and 2s. The task is to write a function that
sorts the given array. The functions should put all 0s first, then all 1s and all 2s in
last.](/ba1.cpp)
18. [Given two arrays: arr1 [0...m-1] and arr2 [0...n-1]. Find whether arr2 [ ] is a subset
of arr1[ ] or not. Both the arrays are not in sorted order. It may be assumed that
elements in both arrays are distinct.](/ba2.cpp)
19. [Given an unsorted array, sort the given array. You are allowed to do only
following operation on array.
flip(arr, i): Reverse array from 0 to i
Unlike a traditional sorting algorithm, which attempts to sort with the fewest
comparisons possible, the goal is to sort the sequence in as few reversals as
possible. ](/ba3.cpp)
20. [Given two arrays A1 [ ] and A2 [ ], sort A1 in such a way that the relative order
among the elements will be same as those are in A2. For the elements do not
present in A2, append them at last in sorted order](./ba4.cpp)
21. [Given a sorted array and a number x, find a pair in array whose sum is closest to
x.](/ba5.cpp)
22. [Given an array of strings arr[ ]. Sort given strings using Bubble Sort and display
the sorted array.](/ba6.cpp)
23. [Given an array of “n”distinct elements, find the minimum number of swaps
required to sort the array.](/ba7.cpp)
24. [We are given an array of n distinct numbers. The task is to sort all even-placed
numbers in increasing and odd-placed numbers in decreasing order. The
modified array should contain all sorted even-placed numbers followed by
reverse sorted odd-placed numbers.](/ba8.cpp)
25. [Given three integers, print them in sorted order with¬out using if condition.](/ba9.cpp)
26. [Given an array of positive integers. Sort the given array in decreasing order of
number of factors of each element, i.e., element having the highest number of factors should be the first to be displayed and the number having least number of factors should be the last one. Two elements with equal number of factors should
be in the same order as in the original array.](/ba10.cpp)

### (Greedy Algorithm)

27. [Given a set of items, each with a weight and a value, determine the number of
each item to include in a collection so that the total weight is less than or equal to
a given limit and the total value is as large as possible.](/cp1.cpp)
28. [Given a connected and undirected graph, find a minimum spanning tree that has
minimum cost.](/cp2.cpp)
29. [Given a weighted undirected graph. Finds a subset of the edges that forms a tree
that includes every vertex, where the total weight of all the edges in the tree is
minimized by using prims approach.](/cp3.cpp)
30. [Given a Graph, find a minimum spanning tree that takes a graph as input and
finds the subset of the edges of that graph which form a tree that includes every
vertex has the minimum sum of weights among all the trees.](/cp4.cpp)
31. [Given a graph and a source vertex in the graph, find shortest paths from source
to all vertices in the given graph.](/cp5.cpp)
32. [Given a schedule containing arrival and departure time of trains in a station, find
minimum number of platforms needed in the station so to avoid any delay in arrival of any train.](/cp6.cpp)
33. [Given weights and values of n items, we need to put these items in a knapsack of
capacity W to get the maximum total value in the knapsack by using Greedy approach.](/cp7.cpp)

### Advanced Questions:
34. [You are given n activities with their start and finish times. Select the maximum
number of activities that can be performed by a single person, assuming that a
person can only work on a single activity at a time.](/ca1.cpp)

### (Dynamic Programming
### (Pattern Matching)
### (Backtracking & Branch and Bound)