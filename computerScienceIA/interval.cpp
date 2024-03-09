#include "interval.h"

Interval::Interval(std::chrono::time_point<std::chrono::system_clock>  startTime, int durationMinutes){
    startTime = startTime;
    endTime = startTime + minutes(durationMinutes);
};

bool Interval::isElapsed() {
    return  std::chrono::system_clock::now() < endTime;
}

//workinterval
WorkInterval::WorkInterval(std::chrono::time_point<std::chrono::system_clock>  startTime, int durationMinutes, string title){
    startTime = startTime;
    endTime = startTime + minutes(durationMinutes);
    title = title;
}
