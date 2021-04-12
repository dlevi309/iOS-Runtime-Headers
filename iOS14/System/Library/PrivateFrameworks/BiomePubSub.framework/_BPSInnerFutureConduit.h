/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class BPSFuture;

@interface _BPSInnerFutureConduit : BPSSubscription {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _downstreamLock;
	BOOL _hasAnyDemand;
	BOOL _released;
	BPSFuture* _parent;
	id<BPSSubscriber> _downstream;
	long long _identifity;

}

@property (nonatomic,retain) BPSFuture * parent;                        //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (assign,nonatomic) BOOL hasAnyDemand;                         //@synthesize hasAnyDemand=_hasAnyDemand - In the implementation block
@property (assign,nonatomic) long long identifity;                      //@synthesize identifity=_identifity - In the implementation block
@property (assign,nonatomic) BOOL released;                             //@synthesize released=_released - In the implementation block
-(BPSFuture *)parent;
-(id<BPSSubscriber>)downstream;
-(void)fulfill:(id)arg1 ;
-(void)setParent:(BPSFuture *)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(BOOL)released;
-(void)setReleased:(BOOL)arg1 ;
-(id)initWithParent:(id)arg1 downstream:(id)arg2 ;
-(void)assignIdentity:(long long)arg1 ;
-(void)setIdentifity:(long long)arg1 ;
-(void)setHasAnyDemand:(BOOL)arg1 ;
-(BOOL)hasAnyDemand;
-(long long)identifity;
@end

