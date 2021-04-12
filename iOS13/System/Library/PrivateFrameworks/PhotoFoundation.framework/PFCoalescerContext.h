/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class PFCoalescer, NSObject, NSHashTable, NSArray;

@interface PFCoalescerContext : NSObject {

	unsigned long long _coalescedUpdatesCount;
	PFCoalescer* _coalescer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_group> _group;
	NSHashTable* _pendingActivityTokens;

}

@property (__weak) PFCoalescer * coalescer;                                  //@synthesize coalescer=_coalescer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSHashTable * pendingActivityTokens;                      //@synthesize pendingActivityTokens=_pendingActivityTokens - In the implementation block
@property (readonly) NSArray * pendingActivityTokensSnapshot; 
@property (assign) unsigned long long coalescedUpdatesCount;                 //@synthesize coalescedUpdatesCount=_coalescedUpdatesCount - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithCoalescer:(id)arg1 ;
-(void)pushBack:(/*^block*/id)arg1 ;
-(void)delayNextInvocationByTimeInterval:(double)arg1 ;
-(id)activityToken;
-(id)activityTokenWithReason:(id)arg1 ;
-(void)cancelPendingActivityTokens;
-(NSArray *)pendingActivityTokensSnapshot;
-(void)notifyActivityTokenCompletionOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)coalescedUpdatesCount;
-(void)setCoalescedUpdatesCount:(unsigned long long)arg1 ;
-(PFCoalescer *)coalescer;
-(void)setCoalescer:(PFCoalescer *)arg1 ;
-(NSHashTable *)pendingActivityTokens;
-(void)setPendingActivityTokens:(NSHashTable *)arg1 ;
@end

