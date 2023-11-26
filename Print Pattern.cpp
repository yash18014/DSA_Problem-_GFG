class Solution
{
public:
    vector<int> pattern(int N)
    {
        while (temp > 0)
        {
            v.push_back(temp);
            temp = temp - 5;
        }
        while (temp <= N)
        {
            v.push_back(temp);
            temp = temp + 5;
        }
        return v;
    }
};
