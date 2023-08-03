//QUESTION NO 4

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

 void SelectingTheMedian(std::vector<int>& arr, int& size)
{
    int min = 0;
    int max = arr.size()- 1;
    int median = (min + max )/2;
    int valueofmedian = arr[median];
    std::cout << "Median: " << valueofmedian << std::endl;
}
int main() {

    // Open the test file
    std::ifstream test_file("TestCase5_02.txt");

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
    //void bubblesort(std::vector<int>&arr, int& size) {
        int length = arr.size();
        for (int i = 0; i < length - 1; ++i) {
            for (int j = 0; j < length - i - 1; ++j) {

                if (arr[j] > arr[j + 1]) {
                    std::swap(arr[j], arr[j + 1]);
                }
            }
        }
        
    
   //bubblesort(arr,size);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    SelectingTheMedian(arr, size);

    

   
    
}
