/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

typedef struct _compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > > {
	VTAudioCircularBufferImpl<unsigned short> __value_;
} compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > >;

typedef struct unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > > {
	compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > > __ptr_;
} unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > >;

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

typedef struct __CFNotificationCenter* CFNotificationCenterRef;

typedef struct __CFDictionary* CFDictionaryRef;

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

