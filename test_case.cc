//Akshobh Mirapurkar
//CS3560 Final Exam Hands-on
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int countChar(std::string str1){
    return str1.length();
}

int countLine(std::string str2){
    int count = 1;
    if(str2 == ""){
        return 0;
    } 
    for(int i = 0; i < str2.size(); i++){
        if(str2[i] == '\n'){
            count++;
        }
    }
    return count;
}

TEST_CASE("Verifying if the number of characters in the input string is right using countChar()"){
    std::string s1 = "Ohio";
    REQUIRE(countChar(s1) == 4);
}

/*TEST_CASE("Verifying the number of lines is right using countLine()"){
    std::string s1 = "My name is Akshobh \n I am a sick guy";
    REQUIRE(countLine(s1) == 2);
}*/

TEST_CASE("Verifying if the number of lines and characters is right using countChar() and countLine() to test if the two functions work simultaneously"){
    std::string s1 = "My name is Akshobh \n I am a sick guy";
    REQUIRE(countLine(s1) == 2);
    REQUIRE(countChar(s1) == 36);
}

TEST_CASE("Verifying the output for countChar() if the input string is empty"){
    std::string s1 = "";
    REQUIRE(countChar(s1) == 0);
} 