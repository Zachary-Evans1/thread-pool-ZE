#include <iostream>
#include <chrono>
#include "../include/ThreadPool.h"

int main() {

    ThreadPool pool(4);

    for (int i = 0; i < 8; i++) {
        pool.enqueue([i] {
            std::cout << "Task " << i << " started on thread " 
                      << std::this_thread::get_id() << "\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "Task " << i << " done\n";
        });
    }

    // Give tasks time to finish before pool destructor runs
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    return 0;
}