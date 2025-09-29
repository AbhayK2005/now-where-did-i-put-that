#include <string>

using namespace std;

int find(const string& str, char target) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == target) {
            return i;
        }
    }
    return -1;
}

int find(const string& str, const string& target) {
    if (target.length() > str.length()) {
        return -1;
    }
    for (int i = 0; i <= str.length() - target.length(); i++) {
        bool match = true;
        for (int j = 0; j < target.length() && match; j++) {
            if (str[i + j] != target[j]) {
                match = false;
            }
        }
        if (match) {
            return i;
        }
    }
    return -1;
}
