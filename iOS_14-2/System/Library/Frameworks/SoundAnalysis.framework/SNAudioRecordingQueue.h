/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol OS_os_transaction;
#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class AVAudioFormat, SNAudioQueueConfiguration, NSObject;

@interface SNAudioRecordingQueue : NSObject {

	OpaqueAudioQueueRef _audioQueue;
	AVAudioFormat* _recordFormat;
	BOOL _running;
	SNAudioQueueConfiguration* _audioQueueConfiguration;
	/*^block*/id _clientBufferHandler;
	NSObject*<OS_os_transaction> _transaction;

}
-(void)stop;
-(void)_stop;
-(void)dealloc;
-(void)handleAudioBufferCallbackForQueue:(OpaqueAudioQueueRef)arg1 buffer:(AudioQueueBuffer*)arg2 startTime:(const AudioTimeStamp*)arg3 numberPacketDescriptions:(unsigned)arg4 packetDescriptions:(const AudioStreamPacketDescription*)arg5 ;
-(id)initWithFormat:(id)arg1 audioQueueConfiguration:(id)arg2 ;
-(BOOL)startWithBufferHandler:(/*^block*/id)arg1 ;
@end

