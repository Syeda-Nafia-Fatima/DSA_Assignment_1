/*#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


void GoingOffTheCharts(std::vector<int>& arr, int& size)
{
    int current = 0;
    int maxhrs = 0;
    int length = arr.size();
    for (int i = 0;i < length; i++)
    {
        if (6 < arr[i])
        {
            current = current + 1;
            maxhrs = std::max(maxhrs, current);

        }
        else current = 0;
    }
    std::cout << "Highest number of consecutive extended working hours : " << maxhrs;
}


    int main(){

        // Open the test file
        std::ifstream test_file("TestCase_05.txt");

        //error display if file not found
        if (!test_file) {
            std::cout << "Error opening the file." << std::endl;
            return 0;
        }

        // Read the size of the array from the first line of the testfile and store it in the 'size' variable.
        int size;
        test_file >> size;

        // Read the array elements from the second line
        std::vector<int> arr;
        std::string line;
        std::getline(test_file, line); // Read the rest of the first line which contained size(newline character)
        std::getline(test_file, line); // Read the second line of the file, which contains the array elements separated by commas, and store it in the 'line' variable.

        std::stringstream ss(line);
        int num; //used to temporarily store each integer value from the line string
        char comma; //used to temporarily store the comma character between elements of the line string
        while (ss >> num) {
            arr.push_back(num); //num is added to the arr vector using the push_back method.
            ss >> comma; // Read the comma between elements (optional for the last element)
            // Close the input file
            test_file.close();
        }

        GoingOffTheCharts(arr, size);
    }*/
