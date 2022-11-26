#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    int depth = 0, horizontalPos = 0;
    int result;
    ifstream input("input.txt");
    vector<pair<string, int>> data;
    string direction;
    int amount;
    while (input >> direction >> amount)
    {
        data.push_back(make_pair(direction, amount));
    }
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].first == "forward")
        {
            horizontalPos += data[i].second;
        }else if (data[i].first == "down")
        {
            depth += data[i].second;
        }else
        {
            depth -= data[i].second;
        }
    }
    result = depth*horizontalPos;
    cout << result << endl;
}