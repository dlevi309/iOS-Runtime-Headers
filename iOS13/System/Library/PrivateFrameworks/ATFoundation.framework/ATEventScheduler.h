/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ATEventScheduler : NSObject {

	NSMutableDictionary* _events;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _eventAccessQueue;
	BOOL _started;

}
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)removeEvent:(id)arg1 ;
-(void)_scheduleNextEvent;
-(void)_postExpiredEvents;
-(void)scheduleEvent:(id)arg1 afterDelay:(double)arg2 withUserData:(id)arg3 ;
-(void)scheduleRecurringEvent:(id)arg1 withInterval:(double)arg2 afterDelay:(double)arg3 withUserData:(id)arg4 ;
-(BOOL)hasScheduledEvent:(id)arg1 ;
@end

