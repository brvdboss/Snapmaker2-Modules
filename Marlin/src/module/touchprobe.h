
#ifndef MODULES_WHIMSYCWD_MARLIN_SRC_MODULE_TOUCHPROBE_H_
#define MODULES_WHIMSYCWD_MARLIN_SRC_MODULE_TOUCHPROBE_H_

#include "src/device/switch.h"
#include "src/configuration.h"
#include "module_base.h"

class TouchProbe : public ModuleBase {
 public:
  void Init();
  void HandModule(uint16_t func_id, uint8_t * data, uint8_t data_len);
  void Loop();
};

#endif //MODULES_WHIMSYCWD_MARLIN_SRC_MODULE_TOUCHPROBE_H_