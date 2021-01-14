/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSAudioCircularBuffer : NSObject {

	unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >* _csAudioCircularBufferImpl;
	unsigned long long _bufferLength;

}

@property (assign,nonatomic) unsigned long long bufferLength;              //@synthesize bufferLength=_bufferLength - In the implementation block
+(id)createAudioCircularBufferWithDefaultSettings;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 ;
-(unsigned long long)sampleCount;
-(void)reset;
-(id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3 ;
-(id)copybufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(unsigned long long)bufferLength;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1 ;
-(void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3 ;
-(id)copySamplesFromHostTime:(unsigned long long)arg1 ;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3 ;
-(void)setBufferLength:(unsigned long long)arg1 ;
@end

