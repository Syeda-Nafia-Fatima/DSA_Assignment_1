/*#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


// Binary search function
int FixingCodeInProduction(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found, return its index
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Target is in the right half
        }
        else {
            right = mid - 1; // Target is in the left half
        }
       
    }
    
    return -1; // Element not found
   
}


int main() {

    // Open the test file
    std::ifstream test_file("TestCase_03.txt");

    //error display if file not found
    if (!test_file) {
        std::cout << "Error opening the file." << std::endl;
        return 0;
    }
    int target;
    test_file >> target;

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

    int result = FixingCodeInProduction(arr, target);
        if (result != -1) {
            std::cout << "Number found at index: " << result << std::endl;
        }
        else {
            std::cout << "Number not found." << std::endl;
        }

        return 0;
    
}*/