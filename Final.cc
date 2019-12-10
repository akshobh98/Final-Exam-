//Akshobh Mirapurkar
//CS3560 Final Exam Hands-on
#include<iostream>
#include<string>

/**
 * @file final.cc
 * @brief function to count the number of characters of the input
 * @param string pName the string that takes in the input 
 * @return int the # of characters of the input string
 * @author Akshobh Mirapurkar
**/
int countChar(std::string pName){
    return pName.length();
}

/**
 * @file final.cc
 * @brief function to output the number of lines in the input
 * @param string pName the string that takes the input 
 * @return int the number of lines in the input
 * @author Akshobh Mirapurkar
**/
int countLine(std::string pName){
    int count = 1;
    if(pName == ""){
        return 0;
    } 
    for(int i = 0; i < pName.size(); i++){
        if(pName[i] == '\n'){
            count++;
        }
    }
    return count;
}

/**
 * @file final.cc
 * @brief the main 
 * @param int argc the number of input commands including ./a.out
 * @param char** argv the commands themselves
 * @return int 0 to terminate the program
 * @author Akshobh Mirapurkar
**/
int main(int argc, char** argv){
    std::string s1;
    if(argc == 1){
        int lines = countLine("Ohio University");
        int characters = countChar("Athens");
        std::cout << characters << " Characters" << std::endl;
        std::cout << lines << " Lines" << std::endl;
        return 0;
    }
    for(int i = 1; i < argc; i++){
        s1 += argv[i];
    }
    std::cout << countChar(s1) << " Characters" << std::endl;
    std::cout << countLine(s1) << " Lines" << std::endl;
    return 0;
}