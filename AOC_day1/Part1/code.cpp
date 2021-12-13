#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream myfile;
    myfile.open("input.txt");
    string myline;
    int c = 0;
    ifstream fin("input.txt");

    vector<int> data;

    int element;
    while (fin >> element)
    {
        data.push_back(element);
    }
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] < data[i + 1])
        {
            c++;
        }
    }
    cout << c << endl;
}
