class Solution 
{
    public:
        static bool comp(vector<int> &num_1, vector<int> &num_2)
        {
            return num_1[0] < num_2[0];
        }
        int maxWidthOfVerticalArea(vector<vector<int>>& points) 
        {
            // SOLUTION - 1
            
            int area = 0;
            int n = points.size();
            sort(points.begin(), points.end(), comp);

            for(int i=0; i<n-1; i++)
            {
                area = max(area, points[i+1][0] - points[i][0]);
            }
            return area;    
            
          
            // SOLUTION - 2
            
            int area = 0;
            sort(points.begin(), points.end());

            for(int i=0; i<points.size()-1; i++)
            {
                area = max(area, points[i+1][0] - points[i][0]);
            }
            return area;    

          
            // SOLUTION - 3 USING SET
              
            set<int> s;
            int area = 0;
            for(auto &i : points)
            {
                s.insert(i[0]);
            }
            for(auto it=s.begin(); it != s.end(); it++)
            {
                area = max(area, *next(it) - *(it));
            }
            return area;
        }
};
