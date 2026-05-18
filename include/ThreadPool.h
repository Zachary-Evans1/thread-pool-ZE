#pragma once

#include <thread>
#include <vector>
#include <queue>
#include <functional>
#include <mutex>
#include <condition_variable>

class ThreadPool {
public:
    ThreadPool(size_t numThreads); //Constuctor for the Thread pool
    ~ThreadPool(); //Deconstructor for the thread pool

    void enqueue(std::function<void()> task); //Pushes a task onto the queue

private:
    std::vector<std::thread> workers;
    std::queue<std::function<void()>> tasks;

    std::mutex queueMutex;
    std::condition_variable condition;
    bool stop;

};