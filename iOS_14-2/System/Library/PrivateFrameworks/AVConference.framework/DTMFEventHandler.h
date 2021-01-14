/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSObject;

@interface DTMFEventHandler : NSObject {

	NSMutableArray* dtmfEventQueue;
	NSObject*<OS_dispatch_queue> dtmfQueue;
	int _currentEventState;
	BOOL currentEventNeedsEndBlock;
	unsigned long long currentEventRetransmitFinalPacketCount;
	unsigned char currentEvent;
	unsigned char currentVolume;
	unsigned currentStartTimestamp;
	unsigned currentDurationCounter;
	unsigned currentEndTimestamp;
	unsigned _currentPauseCompleteTimestamp;

}
-(id)init;
-(void)dealloc;
-(BOOL)shouldTransmitDTMFWithTimestamp:(unsigned)arg1 ;
-(void)sendingDTMFEventWithTimeStamp:(unsigned)arg1 interval:(unsigned)arg2 RTPHandle:(tagHANDLE*)arg3 ;
-(void)sendDTMFEvent:(id)arg1 atTimestamp:(unsigned)arg2 withSampleRate:(unsigned)arg3 ;
-(void)stopDTMFEventAtTimestamp:(unsigned)arg1 withSampleRate:(unsigned)arg2 ;
-(BOOL)shouldAdjustForLastPauseCompleteTimestamp:(unsigned*)arg1 ;
-(BOOL)insertStartBlockWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 timestamp:(unsigned)arg3 ;
-(BOOL)insertStopBlockWithEndTimestamp:(unsigned)arg1 withPauseCompleteTimestamp:(unsigned)arg2 ;
-(int)constructDTMFEventPacketWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 durationCounter:(unsigned)arg3 interval:(unsigned)arg4 dataBuffer:(char*)arg5 isEnd:(BOOL)arg6 ;
@end

