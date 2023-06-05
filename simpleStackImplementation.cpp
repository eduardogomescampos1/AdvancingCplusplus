class Solution {
public:
    bool isValid(string s) {
    vector <char> stack;
    bool valid = true;
    for (int i = 0; i < s.length() && valid == true; i++) {
        if (s[i] ==  '(') stack.push_back('(');
        else if (s[i] == '[') stack.push_back('[');
        else if (s[i] == '{') stack.push_back('{');
        else if (s[i] == ')') {
            if (stack.empty() == false && stack.at(stack.size() - 1) == '(')
            stack.pop_back();
            else valid = false;  
        } else if (s[i] == ']') {
            if (stack.empty() == false && stack.at(stack.size() - 1) == '[')
            stack.pop_back();
            else valid = false;  
        } else if (s[i] == '}') {
            if (stack.empty() == false && stack.at(stack.size() - 1) == '{')
            stack.pop_back();
            else valid = false;}      
    } if (!stack.empty()) valid = false;
    return valid;   
    }
