#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    string line;
    long long calSum = 0;
    vector<long long> elfCalories;
    ifstream file("input.txt");
    while (getline(file, line))
    {
        if (line == "")
        {
            elfCalories.push_back(calSum);
            calSum = 0;
        }
        else
            calSum += stoll(line, nullptr, 10);
    }
    cout << *max_element(begin(elfCalories), end(elfCalories));
    // Part 2
    // sort(begin(elfCalories), end(elfCalories), greater<long long>());
    // cout << elfCalories[0] + elfCalories[1] + elfCalories[2];
    return 0;
}