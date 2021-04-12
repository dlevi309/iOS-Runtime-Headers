/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

typedef struct _compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume> > {
	SmartSiriVolume __value_;
} compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume> >;

typedef struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume> > {
	compressed_pair<SmartSiriVolume *, std::__1::default_delete<SmartSiriVolume> > __ptr_;
} unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume> >;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct BTSessionImpl* BTSessionImplRef;

typedef struct BTLocalDeviceImpl* BTLocalDeviceImplRef;

typedef struct BTDeviceImpl* BTDeviceImplRef;

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

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

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueFFTSetup* OpaqueFFTSetupRef;

typedef struct _compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller> > {
	BatchBeepCanceller __value_;
} compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller> >;

typedef struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller> > {
	compressed_pair<BatchBeepCanceller *, std::__1::default_delete<BatchBeepCanceller> > __ptr_;
} unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller> >;

typedef struct _compressed_pair<short *, std::__1::allocator<short> > {
	short __value_;
} compressed_pair<short *, std::__1::allocator<short> >;

typedef struct vector<short, std::__1::allocator<short> > {
	short __begin_;
	short __end_;
	compressed_pair<short *, std::__1::allocator<short> > __end_cap_;
} vector<short, std::__1::allocator<short> >;

typedef struct _compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > {
	CSAudioZeroFilterImpl<unsigned short> __value_;
} compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > >;

typedef struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > {
	compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > __ptr_;
} unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > >;

typedef struct _compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > {
	CSAudioCircularBufferImpl<unsigned short> __value_;
} compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >;

typedef struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > {
	compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > __ptr_;
} unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >;

typedef struct _compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > > {
	CSAudioCircularBufferImpl<unsigned char> __value_;
} compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > >;

typedef struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > > {
	compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > > __ptr_;
} unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > >;

typedef struct AudioBuffer {
	unsigned mNumberChannels;
	unsigned mDataByteSize;
	void mData;
} AudioBuffer;

typedef struct AudioBufferList {
	unsigned mNumberBuffers;
	AudioBuffer mBuffers[1];
} AudioBufferList;

