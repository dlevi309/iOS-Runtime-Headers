/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

typedef struct AudioUnitMeterClipping {
	float peakValueSinceLastCall;
	unsigned char sawInfinity;
	unsigned char sawNotANumber;
} AudioUnitMeterClipping;

typedef struct PowerMeter {
	double mSampleRate;
	double mPeakDecay1;
	double mPeakDecay;
	double mDecay1;
	double mDecay;
	int mPrevBlockSize;
	int mPeakHoldCount;
	double mMaxPeak;
	AudioUnitMeterClipping mClipping;
} PowerMeter;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_RC4;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double beginTime;
	double endTime;
} SCD_Struct_RC7;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

