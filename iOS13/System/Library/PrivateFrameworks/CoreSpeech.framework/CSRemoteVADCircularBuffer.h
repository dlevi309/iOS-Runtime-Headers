/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSRemoteVADCircularBuffer : NSObject {

	unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char> > >* _remoteVADCircularBufferImpl;
	int _audioSamplesPerRemoteVAD;
	unsigned long long _capacity;
	unsigned long long _size;
	unsigned long long _beginSampleCount;

}

@property (nonatomic,readonly) unsigned long long capacity;                      //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long beginSampleCount;              //@synthesize beginSampleCount=_beginSampleCount - In the implementation block
-(unsigned long long)size;
-(unsigned long long)capacity;
-(void)reset;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 ;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(id)initWithRecordingDuration:(float)arg1 audioSamplesPerRemoteVAD:(int)arg2 audioSampleRate:(float)arg3 ;
-(unsigned long long)remoteVADSampleCount;
-(id)copySamplesFromAudioSampleCount:(unsigned long long)arg1 toAudioSampleCount:(unsigned long long)arg2 ;
-(unsigned long long)beginSampleCount;
@end

