/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)delegate;
-(BOOL)start;
-(void)stop;
-(id)initWithConfiguration:(tagVCTextJitterBufferConfiguration*)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(tagAudioPacket*)allocTextPacket;
-(void)releaseTextPacket:(tagAudioPacket*)arg1 ;
-(void)enqueuePacket:(tagAudioPacket*)arg1 ;
-(tagAudioFrame*)allocTextFrame;
-(BOOL)startHeartbeat;
-(void)stopHeartbeat;
-(void)heartbeat;
-(void)jitterQueuePushPacket:(tagAudioPacket*)arg1 ;
-(void)releaseTextFrame:(tagAudioFrame*)arg1 ;
@end

