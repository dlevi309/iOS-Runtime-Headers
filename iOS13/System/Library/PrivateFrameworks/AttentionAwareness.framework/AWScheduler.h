/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/


@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;
#import <AttentionAwareness/AttentionAwareness-Structs.h>
@class NSObject, NSMutableArray, AWAttentionSampler;

@interface AWScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSMutableArray* _clients;
	AWAttentionSampler* _attentionSampler;
	id<AWSchedulerObserver> _observer;

}

@property (assign,nonatomic,__weak) id<AWSchedulerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) AWAttentionSampler * attentionSampler;              //@synthesize attentionSampler=_attentionSampler - In the implementation block
+(id)sharedScheduler;
+(id)sharedUnitTestScheduler;
-(id)description;
-(id<AWSchedulerObserver>)observer;
-(void)setObserver:(id<AWSchedulerObserver>)arg1 ;
-(void)addClient:(id)arg1 ;
-(id)initForUnitTest:(BOOL)arg1 ;
-(void)removeInvalidClientsWithConnection:(id)arg1 ;
-(void)removeInvalidClients;
-(void)processHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)armEvents;
-(void)reevaluate;
-(AWAttentionSampler *)attentionSampler;
@end

