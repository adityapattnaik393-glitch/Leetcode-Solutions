class Solution {
public:
    string capitalizeTitle(string title) {
       int size=title.length();
       for(int i=0;i<size;i++)
       {
         int start=i;
         while(i<size&&title[i]!=' ')
         {
            title[i]=tolower(title[i]);
            i++;
         }
         int wordlen=i-start;
         if(wordlen>2)
         {
            title[start]=toupper(title[start]);
         }
       }
       return title;
    }
};