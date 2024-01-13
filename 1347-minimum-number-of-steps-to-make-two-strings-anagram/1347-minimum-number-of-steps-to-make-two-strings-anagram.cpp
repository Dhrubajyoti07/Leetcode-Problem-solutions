class Solution {
public:
   int minSteps(string s, string t) {
        int count =0;
        int num1=0;
        int num2=0;
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     while(num1<s.size() && num2<s.size()){
          if(s[num1]==t[num2]){
         count++;
         num1++;
         num2++;
     }
     else if(s[num1]<t[num2])
         num1++;
     
     else if(s[num1]>t[num2])
         num2++;
     }
     return s.size()-count ;  
    }
};