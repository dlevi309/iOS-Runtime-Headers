/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)scheduleEvent:(id)arg1 afterDelay:(double)arg2 withUserData:(id)arg3 ;
-(id)init;
-(void)_scheduleNextEvent;
-(BOOL)hasScheduledEvent:(id)arg1 ;
-(void)start;
-(void)removeEvent:(id)arg1 ;
-(void)scheduleRecurringEvent:(id)arg1 withInterval:(double)arg2 afterDelay:(double)arg3 withUserData:(id)arg4 ;
-(void)_postExpiredEvents;
@end

