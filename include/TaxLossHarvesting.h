```cpp
#ifndef TAX_LOSS_HARVESTING_H
#define TAX_LOSS_HARVESTING_H

#include <vector>
#include <memory>
#include <stdexcept>

#include "Asset.h"
#include "SimulationEngine.h"

class TaxLossHarvesting {
public:
    TaxLossHarvesting(const std::shared_ptr<SimulationEngine>& engine);
    ~TaxLossHarvesting();

    void applyTaxLossHarvesting();

private:
    const std::shared_ptr<SimulationEngine>& engine_; // Reference to the simulation engine
};

#endif // TAX_LOSS_HARVESTING_H
```