class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        #counting word lenth to get the shortest lenth for adding letters in alternating order so that we can just add the next indexes directly infront of em.
        #we can just len instead of count
        merge = ""

        #finding min in both the lengths (can use MIN instead of conditional stmts)
        loop_len = min(len(word1), len(word2))

        #loop for creating alternating string 
        for i in range(loop_len): #instead of traditional loop syn
            merge += word1[i]
            merge += word2[i]

        #loop for going to next indexes of the loop_length we got nd print it next to the append string... ah idk how to get the next indexes
        # slicing for the indexes after it (it takes everything not just a char duhh)

        merge += word1[loop_len:]
        merge += word2[loop_len:]

        return merge
