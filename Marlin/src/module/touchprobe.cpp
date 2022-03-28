#include "touchprobe.h"

void TouchProbe::Init()
{
    //here code for init of reading pin on esp
}

void TouchProbe::HandModule(uint16_t func_id, uint8_t *data, uint8_t data_len)
{
    switch ((uint32_t)func_id)
    {
    case FUNC_REPORT_PROBE:
        //report on current status of probe
        //reuse switch_probe status?
        //switch_probe_.ReportStatus(FUNC_REPORT_PROBE);
        break;
    }
}

void TouchProbe::Loop()
{
    //continuously check probe and do something with it.
    //if change, report status
    //switch_probe_.ReportStatus(FUNC_REPORT_PROBE);

}