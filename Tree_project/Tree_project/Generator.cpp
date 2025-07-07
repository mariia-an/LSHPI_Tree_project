#include <iostream>
#include <random>
#include <fstream>
#include "Generator.h"


class Generator {

    //элементы по возрастанию
    static void lineTest1(int size, std::vector<int>& arr, bool file) {

        arr.resize(size);

        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = i;
        }

        if (file) {
            std::ofstream out;
            out.open("Downloads\\troyan.txt");

            for (int k = 0; k < arr.size(); ++k) {
                out << arr[k] << " ";
            }
            out.close();
        }

    }

    //элементы по убыванию
    static void lineTest2(int size, std::vector<int>& arr, bool file) {

        arr.resize(size);

        for (int i = 0; i < arr.size(); ++i) {
            arr[arr.size() - 1 - i] = i;
        }

        if (file) {
            std::ofstream out;
            out.open("Downloads\\troyan.txt");

            for (int k = 0; k < arr.size(); ++k) {
                out << arr[k] << " ";
            }
            out.close();
        }

    }

    //чередующиеся возрастающие данные
    static void twoLineTest(int size, std::vector<int>& arr, bool file) {

        if (size % 2 != 0) {
            size -= 1;
        }

        arr.resize(size);

        for (int i = 0; i < arr.size() / 2; i += 2) {
            arr[i / 2] = i;
        }

        for (int j = 1; j < arr.size(); j += 2) {
            arr[arr.size() + j - 1] = j;
        }

        if (file) {
            std::ofstream out;
            out.open("Downloads\\troyan.txt");

            for (int k = 0; k < arr.size(); ++k) {
                out << arr[k] << " ";
            }
            out.close();
        }

    }

    //случайные данные
    static void randTest(int size, int value, std::vector<int>& arr, bool file) {

        arr.resize(size);

        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = randInt(-(2 * *31), 2 * *31 - 1);
        }

        if (file) {
            std::ofstream out;
            out.open("Downloads\\troyan.txt");

            for (int k = 0; k < arr.size(); ++k) {
                out << arr[k] << " ";
            }
            out.close();
        }

    }

    //зубчатые данные
    static void zubTest(int size, std::vector<int>& arr, bool file) {

        if (size % 2 != 0) {
            size -= 1;
        }

        arr.resize(size);

        for (int i = 0; i < arr.size() / 2; ++i) {
            arr[i] = i;
        }

        for (int i = arr.size() / 2; i < arr.size(); ++i) {
            arr[arr.size() - i - 1] = i;
        }

        if (file) {
            std::ofstream out;
            out.open("Downloads\\troyan.txt");

            for (int k = 0; k < arr.size(); ++k) {
                out << arr[k] << " ";
            }
            out.close();
        }

    }

};

