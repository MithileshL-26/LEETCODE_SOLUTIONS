class Solution 
{
    public:
        int minimumSum(int num) 
        {
            // Solution - 1
          
            vector<int> v;

            int i;
            while(num > 0)
            {
                int rem = num % 10;
                num /= 10;
                v.push_back(rem); 
            }
            sort(v.begin(), v.end());

            return ((v[1]*10+v[3]) + (v[0]*10+v[2])); 
          
          
            // Solution - 2 Using String 
          
            string s = to_string(num);
            sort(s.begin(), s.end());
          
            int num_1 = (s[1] - '0') * 10 + s[3] - '0';
            int num_2 = (s[0] - '0') * 10 + s[2] - '0';

            return num_1 + num_2;
        }
};
