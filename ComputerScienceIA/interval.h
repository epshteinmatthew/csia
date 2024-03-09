#ifndef INTERVAL_H
#define INTERVAL_
#include <ctime>
using std::string;

//todo: complete implementations

class Interval{
    std::chrono::time_point<std::chrono::system_clock> startTime{};
    std::chrono::time_point<std::chrono::system_clock> endTime{};

    public:
    Interval(std::chrono::time_point<std::chrono::system_clock>  startTIme, int durationMinutes);
    bool isElapsed();
    std::chrono::time_point<std::chrono::system_clock>  getTotalDuration();
    std::chrono::time_point<std::chrono::system_clock>  getElapsedDuration();

};

class WorkInterval : public Interval {
    string title;

    WorkInterval(std::chrono::time_point<std::chrono::system_clock>  startTime, int durationMinutes, string title);
    void addToTime(int amountMinutes);
    string getTitle();
};

enum breakType {youtubeVideo, mp3File, mp4File};

class BreakInterval : public Interval {
    breakType type;
    string dataLocation;

    BreakInterval(breakType type, string dataLocation);
    string getDataLocation();
};
#endif // INTERVAL_H
