/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioCircularBuffer : NSObject {

	unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >* _csAudioCircularBufferImpl;
	unsigned long long _bufferLength;

}

@property (assign,nonatomic) unsigned long long bufferLength;              //@synthesize bufferLength=_bufferLength - In the implementation block
+(id)createAudioCircularBufferWithDefaultSettings;
-(void)reset;
-(unsigned long long)sampleCount;
-(id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3 ;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 ;
-(id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1 ;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3 ;
-(unsigned long long)bufferLength;
-(void)setBufferLength:(unsigned long long)arg1 ;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3 ;
-(id)copySamplesFromHostTime:(unsigned long long)arg1 ;
@end

