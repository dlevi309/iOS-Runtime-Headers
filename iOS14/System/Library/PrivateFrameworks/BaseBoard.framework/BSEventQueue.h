/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) NSArray * pendingEvents; 
@property (nonatomic,readonly) BSEventQueueEvent * executingEvent;              //@synthesize executingEvent=_executingEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flushPendingEvents;
-(BOOL)hasEventWithName:(id)arg1 ;
-(void)flushAllEvents;
-(void)_noteQueueDidDrain;
-(void)cancelEventsWithName:(id)arg1 ;
-(void)_noteWillExecuteEvent:(id)arg1 ;
-(void)relinquishLock:(id)arg1 ;
-(void)executeOrInsertEvent:(id)arg1 atPosition:(int)arg2 ;
-(BOOL)hasEventWithPrefix:(id)arg1 ;
-(void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2 ;
-(NSArray *)pendingEvents;
-(BOOL)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2 ;
-(void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2 ;
-(id)initWithName:(id)arg1 onQueue:(id)arg2 ;
-(BSEventQueueEvent *)executingEvent;
-(void)_noteQueueDidLock;
-(BOOL)isLocked;
-(void)executeOrInsertEvents:(id)arg1 atPosition:(int)arg2 ;
-(void)flushEvents:(id)arg1 ;
-(void)_noteQueueDidUnlock;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEmpty;
-(id)acquireLockForReason:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

