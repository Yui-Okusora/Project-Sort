# Project-Sort: Sorting Algorithm Analysis

This project is a command-line tool designed to analyze and compare the performance of various sorting algorithms. It supports measuring execution time and the number of comparisons across different data arrangements.

## Team members:

- Đỗ Quang Dũng
- Dương Ngọc Khôi
- Hồ Đăng Thiên Phúc
- Lê Thiên Long
- Phạm Nhật Đăng Khoa

---

## How to run
### Mode 1: Algorithm Mode (-a)
Used to evaluate a single algorithm.

- Command 1: Run on a given input file.
  
```ProjectSort.exe -a [Algorithm] [Input_file] [Output_parameter]```

- Command 2: Run on generated data with specified size and order.
  
```ProjectSort.exe -a [Algorithm] [Input_size] [Input_order] [Output_parameter]```

- Command 3: Run on ALL four data arrangements of a specified size.
  
```ProjectSort.exe -a [Algorithm] [Input_size] [Output_parameter]```

### Mode 2: Comparison Mode (-c)
Used to compare two algorithms side-by-side.

- Command 4: Compare two algorithms on a given input file.
  
```ProjectSort.exe -c [Algorithm_1] [Algorithm_2] [Input_file]```

- Command 5: Compare two algorithms on generated data.
  
```ProjectSort.exe -c [Algorithm_1] [Algorithm_2] [Input_size] [Input_order]```

### Parameter list

| Parameter | Flag / Value | Description |
| :--- | :--- | :--- |
| **Mode** | `-a` | **Algorithm Mode**: Run a single sorting algorithm. |
| | `-c` | **Comparison Mode**: Compare two sorting algorithms. |
| **Algorithm** | `[name]` | selection-sort, insertion-sort, bubble-sort, shaker-sort, shell-sort, heap-sort, merge-sort, quick-sort, counting-sort, radix-sort, flash-sort, ... |
| **Input File** | `[path]` | Path to a `.txt` file. Line 1: $n$ elements. Line 2: $n$ space-separated integers. |
| **Input Size** | `[int]` | Number of elements to generate (Maximum: $1,000,000$). |
| **Input Order** | `-sorted` | Data is already sorted. |
| | `-nsorted` | Data is nearly sorted. |
| | `-rev` | Data is sorted in reverse order. |
| | `-rand` | Data is generated in random order. |
| **Output Parameter** | `-time` | Display the execution time. |
| | `-comp` | Display the number of comparisons. |
| | `-both` | Display both time and comparisons. |

---

## Technical Specifications
* **Language:** C++17.
* **Build System:** CMake 3.18 or higher.
* **Compiler Support:** MSVC and GCC.
* **Memory:** Includes a stack size adjustment (32MB) for MSVC to handle deep recursion in sorting.

---

## Compilation

### Using CMake (Recommended)
```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

Or you can just run [build.bat](build.bat) if you have g++ installed.
