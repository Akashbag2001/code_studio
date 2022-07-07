bool palindromehelper(int l, int h, string &s){
    if(l>=h) return true;
    if(s[l] != s[h]) return false;
    return palindromehelper(l+1,h-1,s);
}

bool isPalindrome(string &s)
{
	return palindromehelper(0,s.size()-1,s);
}
