/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface STKAlertSessionEventQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_haltingAssertions;
	NSMutableArray* _queue_eventQueue;

}
-(id)init;
-(id)acquireEventQueueHaltingAssertionForReason:(id)arg1 ;
-(void)enqueue:(/*^block*/id)arg1 ;
-(void)_queue_dequeueEventsIfPossible;
-(void)_queue_enqueueEvent:(/*^block*/id)arg1 ;
@end

