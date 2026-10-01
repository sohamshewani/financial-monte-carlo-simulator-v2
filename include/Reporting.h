```cpp
#ifndef REPORTING_H
#define REPORTING_H

#include <vector>
#include <memory>
#include <fstream>
#include <stdexcept>

#include "Asset.h"
#include "SimulationEngine.h"

class Reporting {
public:
    Reporting(const std::shared_ptr<SimulationEngine>& engine);
    ~Reporting();

    void generateReports(const std::string& filename);

private:
    const std::shared_ptr<SimulationEngine>& engine_; // Reference to the simulation engine
};

#endif // REPORTING_H
```