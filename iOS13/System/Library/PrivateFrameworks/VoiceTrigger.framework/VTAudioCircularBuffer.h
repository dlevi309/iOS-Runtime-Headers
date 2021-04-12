/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol OS_dispatch_queue;
#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSObject;

@interface VTAudioCircularBuffer : NSObject {

	unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > >* _vtAudioCircularBufferImpl;
	unsigned long long _bufferLength;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long bufferLength;              //@synthesize bufferLength=_bufferLength - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(unsigned long long)sampleCount;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 withNumSamplesCopiedIn:(unsigned long long*)arg3 ;
-(id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(unsigned long long)arg2 samplingRate:(unsigned long long)arg3 ;
-(void)addSamples:(void*)arg1 numSamples:(unsigned long long)arg2 ;
-(id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1 ;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3 ;
-(unsigned long long)bufferLength;
-(void)setBufferLength:(unsigned long long)arg1 ;
@end

