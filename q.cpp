#include <bits/stdc++.h>
using namespace std;

// A Function to generate a unique OTP everytime
string Generate_OTP(int L)
{
    // All possible characters of my OTP
    string s = "abcdefghijklmnopqrstuvwxyzABCD"
               "EFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int n = s.length();

    // String to hold my OTP
    string OTP;

    for (int i = 1; i <= L; i++)
        OTP.push_back(s[rand() % n]);

    return (OTP);
}
int main()
{
    // For different values each time we run the code
    srand(time(NULL));

    // Declare the length of OTP
    int length = 6;
    printf("Your OTP is:  %s", Generate_OTP(length).c_str());

    return (0);
}