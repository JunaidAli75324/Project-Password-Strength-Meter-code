#include <iostream>
#include <string>
using namespace std;
int main() {
    string password;
    int score = 0;
    cout << "Enter your password: ";
    cin >> password;
    // Length score
    if (password.length() < 6)
        score += 0;
    else if (password.length() <= 8)
        score += 1;
    else if (password.length() <= 12)
        score += 2;
    else
        score += 3;
    // Character variety score
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
for (int i = 0; i < password.length(); i++) {
    char c = password[i]; // Access the character at index i
        if (islower(c)) hasLower = true;
        else if (isupper(c)) hasUpper = true;
        else if (isdigit(c)) hasDigit = true;
        else hasSpecial = true;
    }
    if (hasLower) score += 1;
    if (hasUpper) score += 1;
    if (hasDigit) score += 1;
    if (hasSpecial) score += 1;
    // Password strength result
    cout << "Password Score: " << score << endl;
    if (score <= 3)
        cout << "Password Strength: Weak" << endl;
    else if (score <= 5)
        cout << "Password Strength: Medium" << endl;
    else
        cout << "Password Strength: Strong" << endl;

    return 0;
}
