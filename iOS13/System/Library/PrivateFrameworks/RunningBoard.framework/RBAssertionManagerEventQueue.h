/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, RBAssertionManagerQueueDelegate;
@class NSObject, RBEventQueue, RBProcessMap, NSString;

@interface RBAssertionManagerEventQueue : NSObject <BSDescriptionProviding> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	RBEventQueue* _eventQueue;
	RBProcessMap* _expirationWarningEvents;
	id<RBAssertionManagerQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RBAssertionManagerQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(unsigned long long)count;
-(id<RBAssertionManagerQueueDelegate>)delegate;
-(void)setDelegate:(id<RBAssertionManagerQueueDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_queue_updateEventsForAssertion:(id)arg1 ;
-(void)_queue_enqueueProcessExpirationEventsForProcesses:(id)arg1 ;
-(void)_queue_removeEventsForContext:(id)arg1 ;
-(void)_queue_enqueueEventsForAssertion:(id)arg1 ;
-(void)_queue_enqueueWarningEventForAssertion:(id)arg1 startTime:(double)arg2 ;
-(void)_queue_enqueueInvalidationEventForAssertion:(id)arg1 startTime:(double)arg2 ;
-(void)updateEventsForAssertions:(id)arg1 ;
@end

