/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class BPSPassThroughSubject;

@interface _BPSInnerConduit : BPSSubscription {

	os_unfair_lock_s _lock;
	BOOL _released;
	BPSPassThroughSubject* _parent;
	id<BPSSubscriber> _downstream;
	long long _demand;
	long long _identity;

}

@property (nonatomic,retain) BPSPassThroughSubject * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (assign,nonatomic) BOOL released;                               //@synthesize released=_released - In the implementation block
@property (assign,nonatomic) long long demand;                            //@synthesize demand=_demand - In the implementation block
@property (assign,nonatomic) long long identity;                          //@synthesize identity=_identity - In the implementation block
-(void)setIdentity:(long long)arg1 ;
-(BPSPassThroughSubject *)parent;
-(long long)identity;
-(id<BPSSubscriber>)downstream;
-(void)setParent:(BPSPassThroughSubject *)arg1 ;
-(long long)demand;
-(void)finishWithCompletion:(id)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(void)setDemand:(long long)arg1 ;
-(BOOL)released;
-(void)setReleased:(BOOL)arg1 ;
-(id)initWithParent:(id)arg1 downstream:(id)arg2 ;
-(void)assignIdentity:(long long)arg1 ;
-(void)offerInput:(id)arg1 ;
@end

