/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct SMPTETime {
	short mSubframes;
	short mSubframeDivisor;
	unsigned mCounter;
	unsigned mType;
	unsigned mFlags;
	short mHours;
	short mMinutes;
	short mSeconds;
	short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
	double mSampleTime;
	unsigned long long mHostTime;
	double mRateScalar;
	unsigned long long mWordClockTime;
	SMPTETime mSMPTETime;
	unsigned mFlags;
	unsigned mReserved;
} AudioTimeStamp;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct OpaqueAudioQueue* OpaqueAudioQueueRef;

typedef struct opaque_pthread_mutexattr_t {
	long long __sig;
	char __opaque[8];
} opaque_pthread_mutexattr_t;

typedef struct shared_ptr<SiriTTS::VoiceResource> {
	VoiceResource __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<SiriTTS::VoiceResource>;

typedef struct _compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::allocator<unsigned char> >;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char> > {
	char* __begin_;
	char* __end_;
	compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > __end_cap_;
} vector<unsigned char, std::__1::allocator<unsigned char> >;

typedef struct _compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> > {
	Marker __value_;
} compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> >;

typedef struct vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> > {
	Marker __begin_;
	Marker __end_;
	compressed_pair<TTSSynthesizer::Marker *, std::__1::allocator<TTSSynthesizer::Marker> > __end_cap_;
} vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> >;

