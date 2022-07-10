# include <iostream>
# include <vector>

using namespace std;

vector<int> merge(vector<int> a1, vector<int> a2) {    // (int a1[], int a2[], int m, int n)
    vector<int> a3; // also specify the capacity right upfront
    int i, j;
    i = j = 0;
    
    // merge
    while(i < a1.size() && j < a2.size()) {
        if (a1[i] < a2[j]) {
           a3.push_back(a1[i]);
           i = i + 1; 
        } else {
            a3.push_back(a2[j]);
            j = j + 1;
        }
    }    

    // copy remaining elements   
    while(i < a1.size()) {
        a3.push_back(a1[i]);
        i = i + 1; 
    }   

    while(j < a2.size()) {
        a3.push_back(a2[j]);
        j = j + 1;
    }       

    return a3;                          
}



int* merge2(vector<int> a1, vector<int> a2) {    // (int a1[], int a2[], int m, int n)
    int *a3 = new int[a1.size() + a2.size()]; // also specify the capacity right upfront
    int i, j, k;
    i = j = k = 0;
    
    // merge
    while(i < a1.size() && j < a2.size()) {
        if (a1[i] < a2[j]) {
           a3[k] = a1[i];
           i = i + 1; 
        } else {
            a3[k] = a2[j];
            j = j + 1;
        }
        k = k + 1;
    }    

    // copy remaining elements   
    while(i < a1.size()) {
        a3[k] = a1[i];
        i = i + 1; 
        k = k + 1;
    }   

    while(j < a2.size()) {
        a3[k] = a2[j];
        j = j + 1; 
        k = k + 1;
    }       

    return a3;                          
}

int main() {
    vector<int> a1 = vector<int>{1,2,5,7,10};
    vector<int> a2 = vector<int>{4,5,8,20,30,40};

    int* a3 = merge2(a1, a2);

    for (int i = 0; i < a1.size()+ a2.size(); i++) {
        cout << a3[i] << " ";
    }

    cout << endl;
    for (auto v: merge(a1,a2))    {
        cout << v << " ";
    }
}