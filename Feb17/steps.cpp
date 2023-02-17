#include <iostream>
#include "steps.h"
#include "often_used_functions.h"
#include "sorts.h"
#include <chrono>

void test_bubble() {
    std::cout << '\t' << "Bubble sort" << '\t' << "Insertion sort" << '\t' << "Selection sort" << '\t' << "Counting sort" << '\t' << "Quick sort" << std::endl;
    { /* test_1 (step: 100, size: 100 - 500) */
        int i = 0;
        int step = 100;
        int max_size = 500; // 100 - 500
        int min_size = 100;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_2 (step: 250, size: 500 - 1000) */
        int i = 0;
        int step = 250;
        int max_size = 1000;
        int min_size = 500;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_3 (step: 1000, size: 1000 - 10000) */
        int i = 0;
        int step = 1000;
        int max_size = 10000;
        int min_size = 1000;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_4 (step: 5000, size: 10000 - 100000) */
        int i = 0;
        int step = 5000;
        int max_size = 100000;
        int min_size = 10000;
        int delta_size = max_size / min_size;
        while(i < 20) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    int extra1 = 0;
    int extra3 = 0;
    { /* test_5 (step: 10000, size: 100000 - 200000) */
        int i = 0;
        int step = 10000;
        int max_size = 200000;
        int min_size = 100000;
        int delta_size = max_size / min_size;
        while(i < 10) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';


            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';


            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_6 (step: 100000, size: 200000 - 1000000) */
        int i = 0;
        int step = 100000;
        int max_size = 1000000; // 100 - 500
        int min_size = 200000;
        int delta_size = max_size / min_size;
        while(i < 8) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            if(diff1.count() > 60.0) {
                extra1 = -1;
            }
            if(extra1 == -1) {
                std::chrono::time_point<std::chrono::high_resolution_clock> start2;
                std::chrono::time_point<std::chrono::high_resolution_clock> end2;
                start2 = std::chrono::high_resolution_clock::now();
                insertionSort(&ar[0], min_size);
                end2 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff2 = end2 - start2;
                std::cout << diff2.count() << '\t';
            }
            if(extra1 == 0) {
                std::cout << diff1.count() << '\t';
                std::chrono::time_point<std::chrono::high_resolution_clock> start2;
                std::chrono::time_point<std::chrono::high_resolution_clock> end2;
                start2 = std::chrono::high_resolution_clock::now();
                insertionSort(&ar[0], min_size);
                end2 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff2 = end2 - start2;
                std::cout << diff2.count() << '\t';
            }
            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            if(diff3.count() > 60.0) {
                extra3 = -1;
            }
            if(extra3 == -1) {
                int* counter = new int[999];
                std::chrono::time_point<std::chrono::high_resolution_clock> start4;
                std::chrono::time_point<std::chrono::high_resolution_clock> end4;
                start4 = std::chrono::high_resolution_clock::now();
                _putZerosToAr(&counter[0], 999);
                countingSort(&ar[0], min_size, &counter[0], 999);
                end4 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff4 = end4 - start4;
                std::cout << diff4.count() << '\t';

                std::chrono::time_point<std::chrono::high_resolution_clock> start5;
                std::chrono::time_point<std::chrono::high_resolution_clock> end5;
                start5 = std::chrono::high_resolution_clock::now();
                quickSort(&ar[0], min_size);
                end5 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff5 = end5 - start5;
                std::cout << diff5.count() << std::endl;
            }
            if(extra3 == 0) {
                std::cout << diff3.count() << '\t';
                int* counter = new int[999];
                std::chrono::time_point<std::chrono::high_resolution_clock> start4;
                std::chrono::time_point<std::chrono::high_resolution_clock> end4;
                start4 = std::chrono::high_resolution_clock::now();
                _putZerosToAr(&counter[0], 999);
                countingSort(&ar[0], min_size, &counter[0], 999);
                end4 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff4 = end4 - start4;
                std::cout << diff4.count() << '\t';

                std::chrono::time_point<std::chrono::high_resolution_clock> start5;
                std::chrono::time_point<std::chrono::high_resolution_clock> end5;
                start5 = std::chrono::high_resolution_clock::now();
                quickSort(&ar[0], min_size);
                end5 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff5 = end5 - start5;
                std::cout << diff5.count() << std::endl;
            }

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_7 (step: 100, size: 100 - 500) */
        int i = 0;
        int step = 1000000;
        int max_size = 10000000; // 100 - 500
        int min_size = 1000000;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';

            if(extra1 == 0) {
                std::chrono::time_point<std::chrono::high_resolution_clock> start1;
                std::chrono::time_point<std::chrono::high_resolution_clock> end1;
                start1 = std::chrono::high_resolution_clock::now();
                bubbleSort(&ar[0], min_size);
                end1 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff1 = end1 - start1;
                std::cout << diff1.count() << '\t';
            }

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            if(extra3 == 0) {
                std::chrono::time_point<std::chrono::high_resolution_clock> start3;
                std::chrono::time_point<std::chrono::high_resolution_clock> end3;
                start3 = std::chrono::high_resolution_clock::now();
                selectionSort(&ar[0], min_size);
                end3 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff3 = end3 - start3;
                std::cout << diff3.count() << '\t';
            }

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
}
