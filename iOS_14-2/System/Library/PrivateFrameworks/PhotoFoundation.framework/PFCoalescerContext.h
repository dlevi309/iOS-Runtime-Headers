/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityToken;
-(unsigned long long)coalescedUpdatesCount;
-(void)setPendingActivityTokens:(NSHashTable *)arg1 ;
-(void)notifyActivityTokenCompletionOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PFCoalescer *)coalescer;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)delayNextInvocationByTimeInterval:(double)arg1 ;
-(id)activityTokenWithReason:(id)arg1 ;
-(void)setCoalescer:(PFCoalescer *)arg1 ;
-(id)initWithCoalescer:(id)arg1 ;
-(void)setCoalescedUpdatesCount:(unsigned long long)arg1 ;
-(void)cancelPendingActivityTokens;
-(NSArray *)pendingActivityTokensSnapshot;
-(NSHashTable *)pendingActivityTokens;
-(void)pushBack:(/*^block*/id)arg1 ;
@end

