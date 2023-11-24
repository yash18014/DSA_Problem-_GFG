class solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr, int N, int P)
    {
        // code here
        P++;
        for (int i = 0; i < N; i++)
        {
            int idx = arr[i] % P - 1;
            if (idx >= 0 && idx < N)
                arr[idx] += P;
        }
        for (int i = 0; i < N; i++)
        {
            arr[i] /= P;
        }
    }
};