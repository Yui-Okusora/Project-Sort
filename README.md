# Project-Sort: Sorting Algorithm Analysis

This project is a command-line tool designed to analyze and compare the performance of various sorting algorithms. It supports measuring execution time and the number of comparisons across different data arrangements.

## Team members:

- Đỗ Quang Dũng
- Dương Ngọc Khôi
- Hồ Đăng Thiên Phúc
- Lê Thiên Long
- Phạm Nhật Đăng Khoa

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
