/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

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

typedef struct __CFString* CFStringRef;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct AudioBuffer {
	unsigned mNumberChannels;
	unsigned mDataByteSize;
	void mData;
} AudioBuffer;

typedef struct AudioBufferList {
	unsigned mNumberBuffers;
	AudioBuffer mBuffers[1];
} AudioBufferList;

typedef struct _compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > {
	CSAudioCircularBufferImpl<unsigned short> __value_;
} compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >;

typedef struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > {
	compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > __ptr_;
} unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >;

typedef struct _compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > {
	CSAudioZeroFilterImpl<unsigned short> __value_;
} compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > >;

typedef struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > {
	compressed_pair<CSAudioZeroFilterImpl<unsigned short> *, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > > __ptr_;
} unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::__1::default_delete<CSAudioZeroFilterImpl<unsigned short> > >;

