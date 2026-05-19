# thread-pool
A lightweight C++ thread pool with a task queue, built using std::thread and std::condition_variable.

How it works:
Creates N threads once, reuses them instead of spawning a new thread per task.

Building and Running:
g++ -std=c++17 -pthread src/main.cpp src/ThreadPool.cpp -I include -o threadpool
./threadpool

Example Output: 
Task 0 started on thread 139208071222976
Task 1 started on thread 139208062830272
Task 2 started on thread 139208054437568
Task 3 started on thread 139208079615680
Task 0 done
Task 4 started on thread 139208071222976
Task 1 done
Task 5 started on thread 139208062830272
Task 2 done
Task 6 started on thread 139208054437568
Task 3 done
Task 7 started on thread 139208079615680
Task Task 45 done
 done
Task 6 done
Task 7 done
