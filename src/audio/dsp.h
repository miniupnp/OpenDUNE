/** @file src/audio/dsp.h DSP definitions. */

#ifndef DSP_H
#define DSP_H

extern void DSP_Play(const uint8 *data);
extern void DSP_Stop(void);
extern uint8 DSP_GetStatus(void);
extern bool DSP_Init(void);
extern void DSP_Uninit(void);
#ifdef TOS
extern uint8 *g_stRamBuffer;
extern uint32 g_stRamBufferSize;
#endif

#endif /* DSP_H */
