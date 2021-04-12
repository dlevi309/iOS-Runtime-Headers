/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)enqueue:(/*^block*/id)arg1 ;
-(void)_queue_dequeueEventsIfPossible;
-(void)_queue_enqueueEvent:(/*^block*/id)arg1 ;
-(id)acquireEventQueueHaltingAssertionForReason:(id)arg1 ;
@end

