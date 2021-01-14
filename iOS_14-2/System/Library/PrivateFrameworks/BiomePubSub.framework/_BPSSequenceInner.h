/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class NSArray, NSEnumerator;

@interface _BPSSequenceInner : BPSSubscription {

	os_unfair_lock_s _lock;
	BOOL _recursion;
	id<BPSSubscriber> _downstream;
	NSArray* _sequence;
	long long _pendingDemand;
	id _next;
	NSEnumerator* _enumerator;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) NSArray * sequence;                        //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) long long pendingDemand;                   //@synthesize pendingDemand=_pendingDemand - In the implementation block
@property (assign,nonatomic) BOOL recursion;                            //@synthesize recursion=_recursion - In the implementation block
@property (nonatomic,retain) id next;                                   //@synthesize next=_next - In the implementation block
@property (nonatomic,retain) NSEnumerator * enumerator;                 //@synthesize enumerator=_enumerator - In the implementation block
-(id)next;
-(id<BPSSubscriber>)downstream;
-(NSEnumerator *)enumerator;
-(void)setNext:(id)arg1 ;
-(NSArray *)sequence;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(void)setSequence:(NSArray *)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(long long)pendingDemand;
-(void)setPendingDemand:(long long)arg1 ;
-(BOOL)recursion;
-(void)setRecursion:(BOOL)arg1 ;
-(id)initWithDownstream:(id)arg1 sequence:(id)arg2 ;
-(void)setEnumerator:(NSEnumerator *)arg1 ;
@end

