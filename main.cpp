#include <iostream>
#include <fstream>//to operate files
#include <sstream>//stringstream- for parsing line(string)
#include <string>//getline, string
using namespace std;

class Point {
    double _x;
    double _y;
    double _z;
public:
    Point() {
        _x = 0;
        _y = 0;
        _z = 0;
    }
    Point(double x) :Point() {
        _x = x;
    }
    Point(double x, double y) :Point(x) {
        _y = y;
    }
    Point(double x, double y, double z) :Point(x, y) {
        _z = z;
    }

    // setters
    void setX(double x) {
        _x = x;
    }
    void setY(double y) {
        _y = y;
    }
    void setZ(double z) {
        _z = z;
    }

    // getters    
    double getX() {
        return _x;
    }
    double getY() {
        return _y;
    }
    double getZ() {
        return _z;
    }

    // print
    void print() {
        cout << "Point: " << endl;
        cout << "X: " << _x << endl;
        cout << "Y: " << _y << endl;
        cout << "Z: " << _z << endl;
        cout << "----------------" << endl;
    }

    void save(ofstream& file) {
        file << _x << " " << _y << " " << _z << endl;
        file << "Point: " << endl;
        file << "X: " << _x << endl;
        file << "Y: " << _y << endl;
        file << "Z: " << _z << endl;
        file << "----------------" << endl;
    }
};

int main() {
    Point point1(1, 5);
    point1.print();
    point1.setZ(10);
    point1.print();

    cout << "\nFile work: \n" << endl;
    // Create and open a text file
    ofstream MyFile("file.txt");

    // Write to the file
    point1.save(MyFile);

    // Close the file
    MyFile.close();

    // Create an input file stream object named 'file' and 
    // open the file "file.txt". 
    ifstream file("file.txt");

    // String to store each line of the file. 
    string line;
    string firstLine;

    if (file.is_open()) {
        getline(file, firstLine);
        while (getline(file, line)) {
            cout << line << endl;
        }
        // Close the file stream once all lines have been read.
        file.close();
    }
    else {
        // Print an error message to the standard error stream if the file cannot be opened.
        cerr << "Unable to open file!" << endl;
    }

    // Debugging output to check the content of firstLine
    cout << "First line read from file: " << firstLine << endl;

    // Parse the coordinates from the first line
    double x, y, z;
    stringstream ss(firstLine);
    ss >> x >> y >> z;

	Point point2(x, y, z);
    cout << "\nPoint from file: \n";
	point2.print();

    system("pause");
    return 0;
}
