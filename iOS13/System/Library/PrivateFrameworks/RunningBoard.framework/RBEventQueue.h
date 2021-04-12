/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSObject, NSArray, RBEventQueueEvent, NSString;

@interface RBEventQueue : NSObject <BSDescriptionProviding> {

	NSMutableArray* _eventQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _eventTimer;
	BOOL _isProcessingEvents;
	BOOL _inModifyBlock;
	BOOL _dirtyDuringModify;

}

@property (nonatomic,readonly) NSArray * events;                           //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) RBEventQueueEvent * nextEvent; 
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned long long)count;
-(id)initWithQueue:(id)arg1 ;
-(NSArray *)events;
-(void)addEvents:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(RBEventQueueEvent *)nextEvent;
-(void)batchModify:(/*^block*/id)arg1 ;
-(void)removeEvents:(id)arg1 ;
-(void)removeEvent:(id)arg1 ;
-(void)_queue_stopEventTimer;
-(void)_queue_startEventTimer;
-(void)_queue_processEvents;
-(id)_createTimerWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
@end

