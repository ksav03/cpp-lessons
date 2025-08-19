#include <iostream>

using namespace std;

void reverse_string(string &word) {
    
    int left = 0;
    int right = word.size() - 1;
    
    while (left < right) {
        swap(word[left], word[right]);
        left++;
        right--;
    }
}

int main(){
    
    // Reversing a string

    string word = "embedded";
    
    reverse_string(word);
    
    cout << word;
    
    return 0;
}