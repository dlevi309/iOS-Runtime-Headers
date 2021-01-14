/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber, _DKKnowledgeQuerying;
@class _DKEventQuery;

@interface _BPSInnerKnowledgeSubscription : BPSSubscription {

	os_unfair_lock_s _lock;
	BOOL _recursion;
	id<BPSSubscriber> _downstream;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_DKEventQuery* _query;
	long long _pendingDemand;
	id _next;
	long long _offset;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;                         //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) _DKEventQuery * query;                                //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) long long pendingDemand;                              //@synthesize pendingDemand=_pendingDemand - In the implementation block
@property (assign,nonatomic) BOOL recursion;                                       //@synthesize recursion=_recursion - In the implementation block
@property (nonatomic,retain) id next;                                              //@synthesize next=_next - In the implementation block
@property (assign,nonatomic) long long offset;                                     //@synthesize offset=_offset - In the implementation block
-(id)next;
-(_DKEventQuery *)query;
-(id<BPSSubscriber>)downstream;
-(long long)offset;
-(void)setNext:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(void)setOffset:(long long)arg1 ;
-(void)setQuery:(_DKEventQuery *)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(long long)pendingDemand;
-(void)setPendingDemand:(long long)arg1 ;
-(BOOL)recursion;
-(void)setRecursion:(BOOL)arg1 ;
-(id)initWithQuery:(id)arg1 downstream:(id)arg2 store:(id)arg3 ;
@end

