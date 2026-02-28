class Solution {
public:
    int concatenatedBinary(int n) {
        //converting from 1 to n;
        //n into their binary; 
        //pushing them into main string;
        string binary = "";
        for(int i=1;i<=n;i++){
            int num = i;
            string s = "";
            while(num>0){
                int r = num%2;
                s = s + to_string(r);
                num = num / 2;
            }
            reverse(s.begin(),s.end());
            binary.append(s);
        }

        //converting binary to integer;
        int power = 0;
        long long decimal = 0;

        for(int i = 0;i<=binary.size();i++,power++){
            if(binary[i]=='1'){
                decimal+=(int)pow(2,power);
            }
        }
        return decimal;
    }
};
