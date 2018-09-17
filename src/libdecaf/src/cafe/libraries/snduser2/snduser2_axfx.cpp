#include "snduser2.h"
#include "snduser2_axfx.h"
#include "cafe/libraries/cafe_hle_stub.h"

namespace cafe::snduser2
{

int32_t
AXFXReverbHiGetMemSize(virt_ptr<AXFXReverbHi> reverb)
{
   decaf_warn_stub();
   return 32;
}

int32_t
AXFXReverbHiExpGetMemSize(virt_ptr<AXFXReverbHi> reverb)
{
   decaf_warn_stub();
   return 32;
}

void
AXFXReverbHiCallback(virt_ptr<AXFXBuffers> buffers,
                     virt_ptr<AXFXReverbHi> data,
                     virt_ptr<AXAuxCallbackData> auxData)
{
   decaf_warn_stub();
}

void
AXFXReverbHiExpCallback(virt_ptr<AXFXBuffers> buffers,
                        virt_ptr<AXFXReverbHi> data)
{
   decaf_warn_stub();
}

void
AXFXMultiChReverbCallback(virt_ptr<AXFXBuffers> buffers,
                          virt_ptr<AXFXReverbMulti> data,
                          virt_ptr<AXAuxCallbackData> auxData)
{
   decaf_warn_stub();
}

BOOL
AXFXReverbHiInit(virt_ptr<AXFXReverbHi> reverb)
{
   decaf_warn_stub();
   return TRUE;
}

BOOL
AXFXReverbHiExpInit(virt_ptr<AXFXReverbHi> reverb)
{
   decaf_warn_stub();
   return TRUE;
}

BOOL
AXFXReverbHiShutdown(virt_ptr<AXFXReverbHi> reverb)
{
   decaf_warn_stub();
   return TRUE;
}

void
AXFXReverbHiExpShutdown(virt_ptr<AXFXReverbHi> reverb)
{
   decaf_warn_stub();
}

BOOL
AXFXReverbHiSettings(virt_ptr<AXFXReverbHi> reverb)
{
   decaf_warn_stub();
   return TRUE;
}

BOOL
AXFXMultiChReverbInit(virt_ptr<AXFXReverbMulti> reverb,
                      uint32_t unk,
                      AXFXSampleRate sampleRate)
{
   decaf_warn_stub();
   return TRUE;
}

void
AXARTServiceSounds()
{
}

virt_ptr<void>
SPGetSoundEntry(virt_ptr<void> table, uint32_t index)
{
   decaf_warn_stub();
   return NULL;
}

void
Library::registerAxfxSymbols()
{
   RegisterFunctionExport(AXFXReverbHiGetMemSize);
   RegisterFunctionExport(AXFXReverbHiExpGetMemSize);
   RegisterFunctionExport(AXFXReverbHiCallback);
   RegisterFunctionExport(AXFXReverbHiExpCallback);
   RegisterFunctionExport(AXFXMultiChReverbCallback);
   RegisterFunctionExport(AXFXReverbHiInit);
   RegisterFunctionExport(AXFXReverbHiExpInit);
   RegisterFunctionExport(AXFXReverbHiShutdown);
   RegisterFunctionExport(AXFXReverbHiExpShutdown);
   RegisterFunctionExport(AXFXReverbHiSettings);
   RegisterFunctionExport(AXFXMultiChReverbInit);
   RegisterFunctionExport(AXARTServiceSounds);
   RegisterFunctionExport(SPGetSoundEntry);
}

} // namespace cafe::snduser2
