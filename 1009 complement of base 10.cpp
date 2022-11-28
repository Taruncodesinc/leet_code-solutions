class Solution {
public:
    int bitwiseComplement(int n) {
        int num=n;
        int co=0;
        if(n==0)
         
            return 1;
         
         while(num!=0)
         {
             co=(co<<1)|1;
             num=num>>1;

         }
         int co_ment=(~n) &co;
         return co_ment;
         

        
    }
};
