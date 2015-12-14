#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Element {
private:
    double el;
public:
    Element(const double& elem): el(elem) {}
    void operator=(const double& elem) {
        this->el=elem;
    }
    const double getVal() {
        return el;
    }
};

class Col {
private:
    vector<Element> col;
public:
    Col(const int& cols) {
        for (int i = 0; i < cols; i++) {
            this->col.push_back(Element(0));
        }
    }

    const double operator[](const int& i) const {
        if (i >= 0 && i < col.size()) return col[i].getVal();
        else cout << "No such Col" << endl;
    }
};

class Matrix {
private:
    vector<Col> row;
public:
    Matrix(const int& rows, const int& cols) {
        for (int i = 0; i < rows; i++) {
            this->row.push_back(Col(cols));
        }
    }

    const Col operator[](const int& i) const {
        if (i >= 0 && i < row.size()) return row[i];
        else cout << "No such Row" << endl;;
    }
};

int main() {

    Matrix testM = Matrix(3, 2);
    //testCol[1] = 2;
    //cout << testM[0][0] << endl;
    //cout << testM[1][1] << endl;
    //cout << testM[2][1] << endl;

    cout << "Ok" << endl;

}
