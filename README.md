

C++ program that, for a given n and k with 1 ≤ k ≤ n ≤ 10, outputs all the permutations
which can be created using k out of n digets. For example, if n = 4 and k = 3, your program should
output: 012 013 021 023 031 032 102 103 . . . 321 (24 in total). Output all permutations to the
console separated by a single space character.

Your program should be in a single file permutations.cpp. The numbers n and k are given as command
line parameters when your program is started. You can determine n and k using the following code.


int main(int argc, char* argv[]) {
int n = atoi(argv[1]);
int k = atoi(argv[2]);
/* ... */
return 0;
}

![alt text](https://github.com/pfdinc/permutation_allpossibilities/blob/master/Screen%20Shot%202017-10-22%20at%2010.34.05%20AM.png )

![alt text](https://github.com/pfdinc/permutation_allpossibilities/blob/master/Screen%20Shot%202017-10-22%20at%2010.34.45%20AM.png)
