#include <bits/stdc++.h>
using namespace std;

vector<string> string_split(const string &str)
{
    vector<string> result;
    istringstream iss(str);
    for (string s; iss >> s;)
        result.push_back(s);
    return result;
}
int main()
{
    ifstream myfile;
    myfile.open("input.txt");
    string myline;
    vector<string> s;
    int forward = 0;
    int up = 0;
    int depth = 0;

    if (myfile.is_open())
    {
        while (!myfile.eof())
        {
            getline(myfile, myline);

            s = string_split(myline);
            if (s[0] == "forward")
            {
                forward += stoi(s[1]);
            }
            if (s[0] == "down")
            {
                depth += stoi(s[1]);
            }
            if (s[0] == "up")
            {
                up += stoi(s[1]);
            }
        }
    }
    cout << forward * (depth - up) << endl;
}
