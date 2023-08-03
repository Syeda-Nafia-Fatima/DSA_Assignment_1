/*#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

// Function to perform bubble sort which gives number of bribes as output
void bribedqueue(std::vector<int>& arr, int& counter) {
    int size = arr.size();
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {

            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                counter++; // Increment counter for each bribe
            }
        }
    }
}

int main() {
    // Open the test file
    std::ifstream testfile("TestCase_01.txt");

    //error display if file not found
    if (!testfile) {
        std::cout << "Error opening the file." << std::endl;
        return 0;
    }

    // Read the size of the array from the first line of the testfile and store it in the 'size' variable.
    int size;
    testfile >> size;

    // Read the array elements from the second line
    std::vector<int> arr;
    std::string line;
    std::getline(testfile, line); // Read the rest of the first line which contained size(newline character)
    std::getline(testfile, line); // Read the second line of the file, which contains the array elements separated by commas, and store it in the 'line' variable.

    std::stringstream ss(line);
    int num; //used to temporarily store each integer value from the line string
    char comma; //used to temporarily store the comma character between elements of the line string
    while (ss >> num) {
        arr.push_back(num); //num is added to the arr vector using the push_back method.
        ss >> comma; // Read the comma between elements (optional for the last element)
    }

    // Close the input file
    testfile.close();

    // Initialize counter to 0 to calculate number of bribes
    int counter = 0;

    // calling function which performs bubble sort and gives number of bribes
    bribedqueue(arr, counter);

    // Print the number of bribes made during sorting
    std::cout << "Number of bribes: " << counter << std::endl;

    return 0;
}*/
