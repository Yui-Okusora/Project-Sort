#include <iostream>
#include <chrono>
#include <vector>

std::pair<long long, double> ShakerSort(int arr[], int n) 
{
    int compare = 0;
    auto startTime = std::chrono::high_resolution_clock::now();
    bool is_swapped = true;
    int start = 0;
    int end = n - 1;

    while (is_swapped) 
    {
        compare++;
        is_swapped = false;

        for (int i = start; i < end; ++i) 
        {
            compare += 2;
            if (arr[i] > arr[i + 1]) 
            {
                std::swap(arr[i], arr[i + 1]);
                is_swapped = true;
            }
        }
        compare += 2;
        if (!is_swapped) 
        {
            break;
        }

        is_swapped = false;
        --end;

        for (int i = end - 1; i >= start; --i) 
        {
            compare+=2;
            if (arr[i] > arr[i + 1]) 
            {
                std::swap(arr[i], arr[i + 1]);
                is_swapped = true;
            }
        }
        compare++;
        ++start;
    }
    compare++;
    auto endTime = std::chrono::high_resolution_clock::now();
    std::chrono::milliseconds duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
    return { compare, duration.count() };
}