/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol OS_dispatch_queue, RBAssertionManagerQueueDelegate;
#import <RunningBoard/RunningBoard-Structs.h>
@class NSObject, RBEventQueue, RBProcessMap;

@interface RBAssertionManagerEventQueue : NSObject {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	RBEventQueue* _eventQueue;
	RBProcessMap* _expirationWarningEvents;
	id<RBAssertionManagerQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RBAssertionManagerQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long count; 
-(id)init;
-(id<RBAssertionManagerQueueDelegate>)delegate;
-(unsigned long long)count;
-(void)updateEventsForAssertions:(id)arg1 ;
-(void)setDelegate:(id<RBAssertionManagerQueueDelegate>)arg1 ;
-(id)description;
@end

