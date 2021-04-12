/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSMutableArray, NSString, NSObject, BSEventQueueEvent, NSArray;

@interface BSEventQueue : NSObject <BSDescriptionProviding> {

	NSHashTable* _eventQueueLocks;
	NSMutableArray* _eventQueue;
	BOOL _processingEvents;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	BSEventQueueEvent* _executingEvent;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) BSEventQueueEvent * executingEvent;              //@synthesize executingEvent=_executingEvent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) NSArray * pendingEvents;                  //@synthesize eventQueue=_eventQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isEmpty;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isLocked;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_addEventQueueLock:(id)arg1 ;
-(void)_removeEventQueueLock:(id)arg1 ;
-(BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2 ;
-(void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)_processNextEvent;
-(void)executeOrInsertEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)_executeOrPendEvents:(id)arg1 position:(int)arg2 ;
-(id)acquireLockForReason:(id)arg1 ;
-(void)_noteWillExecuteEvent:(id)arg1 ;
-(void)flushEvents:(id)arg1 ;
-(void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(void)setExecutingEvent:(BSEventQueueEvent *)arg1 ;
-(void)relinquishLock:(id)arg1 ;
-(void)_noteQueueDidDrain;
-(void)_noteQueueDidLock;
-(void)_noteQueueDidUnlock;
-(id)initWithName:(id)arg1 onQueue:(id)arg2 ;
-(void)executeOrInsertEvent:(id)arg1 atPosition:(int)arg2 ;
-(NSArray *)pendingEvents;
-(void)flushPendingEvents;
-(void)flushAllEvents;
-(void)cancelEventsWithName:(id)arg1 ;
-(BOOL)hasEventWithPrefix:(id)arg1 ;
-(BOOL)hasEventWithName:(id)arg1 ;
-(BSEventQueueEvent *)executingEvent;
@end

