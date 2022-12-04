#include <bits/stdc++.h>
#include <fstream>
using namespace std;

array<string, 2> split(const string &s, char delim)
{
    array<string, 2> result;
    stringstream ss(s);
    int ptr = 0;
    string item;
    while (getline(ss, item, delim))
        result[ptr++] = item;
    return result;
}

int main()
{
    string line;
    int count = 0, li1, li2, ri1, ri2;
    ifstream file("input.txt");
    while (getline(file, line))
    {
        auto [range1, range2] = split(line, ',');
        auto [l1, r1] = split(range1, '-');
        auto [l2, r2] = split(range2, '-');
        li1 = stoi(l1);
        ri1 = stoi(r1);
        li2 = stoi(l2);
        ri2 = stoi(r2);
        if ((li1 <= li2 && li2 <= ri1) || (li1 <= ri2 && ri2 <= ri1) || (li2 <= li1 && li1 <= ri2) || (li2 <= ri1 && ri1 <= ri2))
            count++;
    }
    cout << count;
    return 0;
}