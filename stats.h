#include <vector>
#include <algorithm>
#include <cmath>
namespace Statistics {
    
    struct Stats {
        float average;
        float max;
        float min;
    };
    
    Stats ComputeStatistics(const std::vector<float>& );
}
