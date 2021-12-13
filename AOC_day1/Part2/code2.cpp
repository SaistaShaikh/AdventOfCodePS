#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream myfile;
    myfile.open("input2.txt");
    string myline;
    int c = 0;
    ifstream fin("input2.txt");

    vector<int> data;
    vector<int> sumArr;

    int element;
    while (fin >> element)
    {
        data.push_back(element);
    }
    for (int i = 2; i < data.size(); i++)
    {

        sumArr.push_back(data[i - 1] + data[i - 2] + data[i]);
    }
    for (int i = 1; i < sumArr.size(); i++)
    {
        if (sumArr[i] > sumArr[i - 1])
        {
            ++c;
        }
    }
    cout << c << endl;
}
