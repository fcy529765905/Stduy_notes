#include<iostream>
#include<cmath>
using namespace std;//忽略大小写比较字符串大小
int main(){
    char s1[80],s2[80];
    cin.getline(s1,80);
    cin.getline(s2,80);
    int i = 0;
    char result;
        while ( (s1[i] != '\0' && (s1[i] == s2[i])) || abs(s1[i]-s2[i]) == 32 )
        {
            i++;
        }
        if (s1[i]>=65 && s1[i] <=90)
        {
            s1[i] += 32;
        }
        
        if (s2[i]>=65 && s2[i] <=90)
        {
            s2[i] += 32;
        }
        if (s1[i] > s2[i]) {
            result = '>';
        } else if (s1[i] < s2[i]) {
            result = '<';
        } else{
            result = '=';
        }
    cout<<result<<endl;
    return 0;

}