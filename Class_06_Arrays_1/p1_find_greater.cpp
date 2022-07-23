# include <iostream>
# include <vector>

using namespace std;

void replaceWithGreater(vector<int>& nums) {
    vector<int> buf;
    
    for(int i = nums.size() - 1; i >= 0; i--) {
        
        int value = -1;
        while(buf.size() > 0) {
            if (buf[buf.size() - 1] > nums[i]) {
                value = buf[buf.size() - 1];
                break;
            }
            buf.pop_back();
        }
        
        buf.push_back(nums[i]); // O(1)
        nums[i] = value;
    }
}

int main() {
	
	vector<int> vec = {9,2,1,3,4,2,2,6};
	replaceWithGreater(vec);

	for (auto v:vec) {
		cout << v <<" ";
	}
}