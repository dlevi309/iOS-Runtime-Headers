/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

typedef struct opaqueCMSession* opaqueCMSessionRef;

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

