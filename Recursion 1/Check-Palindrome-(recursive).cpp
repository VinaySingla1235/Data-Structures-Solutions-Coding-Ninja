//Check Palindrome
/*Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false  */
//Solution below
bool helper(char input[],int s,int e){
    if(e-s<=0){
        return true;
    }
    if(input[s]!=input[e]){
        return false;
    }
    return helper(input,s+1,e-1);
}


bool checkPalindrome(char input[]) {
    // Write your code here
    int i=0;
    while(input[i]!='\0'){
        i++;
    }
    i--;
    helper(input,0,i);
}