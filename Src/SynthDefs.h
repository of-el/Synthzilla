// Synthzilla - SynthDefs
// Global synthesizer definitions

#ifndef _SynthDefs_H_
#define _SynthDefs_H_

#include <SynthString.h>

// sample output type (16-bit for PCM)
typedef short SampleValue;
// 8-bit data type
typedef char bsInt8;
// 16-bit data type
typedef short bsInt16;
// 32-bit data type
typedef int bsInt32;
// 8-bit unsigned type
typedef unsigned char bsUint8;
// 16-bit unsigned type
typedef unsigned short bsUint16;
// 32-bit unsigned type
typedef unsigned int bsUint32;
// transparent data type
typedef void* Opaque;

// Choose one of these as the oscillator phase accumulator type.
// Double gives less noise with slightyly longer calculation time.

// Type for a phase accumulator
typedef double PhsAccum;
#define sinv sin

// Type for an amplitude value
typedef float AmpValue;
// Type for a high precision amplitude value
typedef double AmpValue2;
// Type for a frequency or time value
typedef float FrqValue;
// Type for a generic paramater
typedef float ParamValue;

#define PI 3.14159265358979
#define twoPi 6.28318530717958
#define PANTBLLEN 4096
#define MAC_AMPCB 1440

class SynthConfig 
{
    public:
        // Sample-rate
        FrqValue sampleRate;
        // Maximum frequency (Nyquist limit)
        FrqValue nyquist;
        // Sample-rate as integer
        bsInt32 isampleRate;
        // multiplier to convert internal sample values into output values
        AmpValue sampleScale;
        // pre-calculated multiplier for frequency to radians (twoPi/sampleRate)
        PhsAccum frqRad;
        // pre-calculated multiplier for frequency to 
};
