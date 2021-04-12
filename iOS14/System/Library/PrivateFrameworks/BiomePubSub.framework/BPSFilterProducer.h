/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>
#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class BPSSubscription, NSString;

@interface BPSFilterProducer : BPSSubscription <BPSSubscriber> {

	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	long long _state;
	BPSSubscription* _subscription;

}

@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) BPSSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(id)receiveNewValue:(id)arg1 ;
-(void)setSubscription:(BPSSubscription *)arg1 ;
-(id<BPSSubscriber>)downstream;
-(BPSSubscription *)subscription;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)receiveSubscription:(id)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(id)initWithDownstream:(id)arg1 ;
@end

