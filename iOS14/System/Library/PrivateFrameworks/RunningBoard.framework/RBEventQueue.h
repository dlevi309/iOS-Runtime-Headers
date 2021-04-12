/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSObject, NSArray, RBEventQueueEvent;

@interface RBEventQueue : NSObject {

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
-(id)initWithQueue:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(void)batchModify:(/*^block*/id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)removeEvent:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(NSArray *)events;
-(RBEventQueueEvent *)nextEvent;
-(void)removeEvents:(id)arg1 ;
@end

