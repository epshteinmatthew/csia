#include "interval.h"

Interval::Interval(std::chrono::time_point<std::chrono::system_clock>  startTime, int durationMinutes){
    startTime = startTime;
};

bool Interval::isElapsed() {
    return  std::chrono::system_clock::now() < endTime;
}
