/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedUnitTestScheduler;
+(id)sharedScheduler;
-(void)addClient:(id)arg1 ;
-(void)setObserver:(id<AWSchedulerObserver>)arg1 ;
-(id<AWSchedulerObserver>)observer;
-(void)removeInvalidClients;
-(void)reevaluate;
-(id)description;
-(AWAttentionSampler *)attentionSampler;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)armEvents;
-(void)removeInvalidClientsWithConnection:(id)arg1 ;
-(id)initForUnitTest:(BOOL)arg1 ;
-(void)processHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
@end

