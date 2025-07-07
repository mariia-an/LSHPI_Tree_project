#include <iostream>
#include <random>
#include <fstream>
#include "Generator.h"

class Generator {

    //generating test data in increasing order
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

    //generating test data in decreasing order
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

    //generating test data combining two increasing blocks of elements
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

    //random test data
    static void randTest(int size, int max, int min, std::vector<int>& arr, bool file) {

        arr.resize(size);

        std::random_device rand_dev;
        std::mt19937 generator(rand_dev());
        std::uniform_int_distribution<> dirst(min, max);
        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = dirst(generator)
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

    //test data combining increasing and decreasing blocks of elements of the same length
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
    static void StressSizeTest(std::vector<int>& arr, bool file) {
        std::vector<int> Possible_sizes = { 10 };
    }
};
