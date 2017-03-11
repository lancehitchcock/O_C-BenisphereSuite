#ifndef OC_CHORDS_PRESETS_H_
#define OC_CHORDS_PRESETS_H_

#include "OC_scales.h"
#include <Arduino.h>

namespace OC {

  struct Chord {
   
    int8_t quality;
    int8_t inversion;
    int8_t voicing;
    int8_t base_note;
    int8_t octave;
  };


  const Chord chords[] = {
    // default
    { 0, 0, 0, OC::Scales::SCALE_SEMI}
  };

  const int8_t qualities[][4] = 
  {
    { 0, 0, 4, 0 },  // fifth
    { 0, 2, 2, 0 },  // triad 
    { 0, 2, 2, 2 },  // seventh
    { 0, 3, 1, 0 },  // suspended
    { 0, 3, 1, 2 },  // susp. seventh
    { 0, 2, 2, 1 }, // sixth
    { 0, 2, 2, 4 }, // added ninth
    { 0, 2, 2, 6 }, // added eleventh
    { 0, 0, 0, 0 }, // unisono
  };


  const int8_t voicing[][4] = 
  {
  	// this can't work like this, because it should operate on the inversions, too.
  	{ 0, 0, 0, 0 },  // close
  	{ 0, 0, 0, -1},  // drop 1 ??
  	{ 0, 0, -1, 0},  // drop 2
  	{ 0, -1, 0, 0},  // drop 3
    // so looks as if there's no inverse operation to drop ....
  	//{ 0, 0, 0, 1 },  // antidrop 1 ?? 
  	//{ 0, 0, 1, 0 },  // antidrop 2 ??
  	//{ 0, 1, 0, 0 },  // antidrop 3
  	{ -1, 1, 1, 1}   // spread
  };

  const char* const quality_names[] {
    "fifth", "triad", "seventh", "suspended.", "susp 7th", "sixth", "added 9th", "added 11th", "unisono"
  };

  const char* const quality_short_names[] {
    "5th", "triad", "7th", "susp", "sus7", "6th",  "+9th", "+11th", "uni"
  };

  const char* const quality_very_short_names[] {
    "5th", "tri", "7th", "sus", "su7", "6th",  "9th", "+11", "uni"
  };

  const char* const voicing_names[] {
  	"close", "drop 1", "drop 2", "drop 3", "spread"
  };
  
  const char* const voicing_names_short[] {
    " - ", "dr1", "dr2", "dr3", "spr"
  };

  const char* const inversion_names[] {
    "-", "1", "2", "3"
  };
}
#endif // OC_CHORDS_PRESETS_H_
