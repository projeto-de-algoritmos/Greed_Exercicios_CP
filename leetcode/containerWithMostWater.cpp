class Solution {
public:
    int maxArea(vector<int>& height) {
        int l, r;
        int areaMaxima = 0;
        l = 0;
        r = height.size() - 1;

        while(l < r){
            int base = r - l;
            
            areaMaxima = max(areaMaxima, min(height[l], height[r]) * base);
            if(height[l]<=height[r]){
                l++;
            } else {
                r--;
            }
        }

        return areaMaxima;
    }
};
