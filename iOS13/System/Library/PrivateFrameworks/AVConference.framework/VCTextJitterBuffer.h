/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_source;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCTextJitterBuffer : NSObject {

	tagVCTextJitterBufferConfiguration _configuration;
	BOOL _resetRequested;
	id _delegate;
	JitterPreloadQueue_tRef _preloadQueue;
	JitterQueue_tRef _jitterQueue;
	NSObject*<OS_dispatch_source> _heartbeat;
	unsigned _lastSequenceNumber;
	BOOL _firstFrameReceived;

}
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)stop;
-(BOOL)start;
-(id)initWithConfiguration:(tagVCTextJitterBufferConfiguration*)arg1 ;
-(void)heartbeat;
-(tagAudioPacket*)allocTextPacket;
-(void)releaseTextPacket:(tagAudioPacket*)arg1 ;
-(void)enqueuePacket:(tagAudioPacket*)arg1 ;
-(tagAudioFrame*)allocTextFrame;
-(BOOL)startHeartbeat;
-(void)stopHeartbeat;
-(void)jitterQueuePushPacket:(tagAudioPacket*)arg1 ;
-(void)releaseTextFrame:(tagAudioFrame*)arg1 ;
@end

