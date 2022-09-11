#include <iostream>
#include <string>
#include <algorithm>

// (95%) written by chapel1337
// made on 9/11/2022 :fear:

// https://stackoverflow.com/questions/735204/convert-a-string-in-c-to-upper-case
std::string toUpper(std::string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);

    return strToConvert;
}

// modified version of toUpper
std::string toLower(std::string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::tolower);

    return strToConvert;
}

void menu();

void analyize(std::string input)
{
    unsigned int wordLength{ input.length() };
    int wordVowels{};
    std::string wordUpper = toUpper(input);
    std::string wordLower = toLower(input);
    
    for (int i{ 0 }; i < wordLength; i++)
    {
        switch (input[i])
        {
            case 'A':
            case 'a':
                wordVowels++;
            break;

            case 'E':
            case 'e':
                wordVowels++;
            break;

            case 'I':
            case 'i':
                wordVowels++;
            break;

            case 'O':
            case 'o':
                wordVowels++;
            break;

            case 'U':
            case 'u':
                wordVowels++;
            break;

            // i was thinking of adding a randomizer for this, but then i realized it would be impractical (c++ psuedo random is also Bad)
            case 'Y':
            case 'y':
                wordVowels++;
            break;

            default:
                continue;
            break;
        }
    }

    std::cout << "length: " << wordLength << std::endl;
    std::cout << "vowels: " << wordVowels << std::endl;
    std::cout << "uppercase: " << wordUpper << std::endl;
    std::cout << "lowercase: " << wordLower << std::endl;

    menu();
}

void menu()
{
    std::string wordInput{};

    std::cout << std::endl;
    std::cout << "input a word: " << std::endl;
    std::cin >> wordInput;

    std::cout << std::endl;
    analyize(wordInput);

    menu();
}

int main()
{
    std::cout << "word analyzer" << std::endl;
    std::cout << "written by chapel1337" << std::endl;

    menu();
}