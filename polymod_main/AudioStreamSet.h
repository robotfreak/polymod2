#ifndef AudioStreamSet_h
#define AudioStreamSet_h
#include "Arduino.h"
#include "Constants.h"
#include <Audio.h>

class AudioStreamSet {
  public:
    AudioStreamSet();
    AudioStream *audioStreams[MAX_POLYPHONY];
    int socketNum = 0;
    bool isPoly = false;
  private:


};

#endif
