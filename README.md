# 📚 DSA Solutions Repository

This repository contains optimized solutions for **Data Structures & Algorithms** problems. The problems are solved using Python and categorized into different topics such as Sorting, Graph Algorithms, Dynamic Programming, and well-known problems from LeetCode and Codeforces.

## 📌 Topics Covered
- 📋 **Sorting Algorithms**
- 🌐 **Graph Algorithms** (BFS, DFS, Dijkstra)
- 📄 **Dynamic Programming** (Memoization, Tabulation)
- 🔍 **Popular LeetCode Problems** and **Codeforces** Challenges

## 🚀 Getting Started

### 1️⃣ Clone the Repository
To download and use the repository locally, run the following command:

```bash
git clone https://github.com/your-username/DSA-Solutions.git
cd DSA-Solutions
```
```bash
cd Sorting
python quick_sort.py
```

📂 Folder Structure
```bash
/DSA-Solutions
│── /Sorting
│   ├── bubble_sort.py
│   ├── quick_sort.py
│   ├── merge_sort.py
│── /Graphs
│   ├── bfs.py
│   ├── dfs.py
│   ├── dijkstra.py
│── /Dynamic_Programming
│   ├── fibonacci_memoization.py
│   ├── knapsack_problem.py
│── /LeetCode
│   ├── two_sum.py
│   ├── longest_substring.py
│── /Codeforces
│   ├── problem_name.py
│── README.md
```
🧠 Complexity Analysis
Each algorithm file contains a detailed explanation of its time and space complexity to help understand efficiency.

Example (Quick Sort):
```python
# Quick Sort Algorithm in Python

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Example Usage
arr = [10, 7, 8, 9, 1, 5]
sorted_arr = quick_sort(arr)
print("Sorted Array:", sorted_arr)

"""
🔹 Time Complexity: O(n log n) (Average Case)
🔹 Space Complexity: O(n)
"""
```

🛠️ Contribution Guidelines
Contributions are welcome! Follow these steps:

Fork the repository

Create a new branch (feature/your-feature-name)

Commit changes (git commit -m "Added new algorithm")

Push to your fork and create a pull request


🎉 Acknowledgment
This repository is constantly updated with new problems and solutions. If you find any issues, feel free to raise an issue or contribute! 🚀
