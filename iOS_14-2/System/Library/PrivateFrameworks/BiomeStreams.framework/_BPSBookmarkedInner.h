/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <BiomePubSub/BPSSubscription.h>
#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber, BPSPublisher;
@class BPSSubscription, NSString;

@interface _BPSBookmarkedInner : BPSSubscription <BPSSubscriber> {

	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	id<BPSPublisher> _upstream;
	BPSSubscription* _subscription;
	id _state;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;                //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) id<BPSPublisher> upstream;                   //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,retain) BPSSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) id state;                                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)setSubscription:(BPSSubscription *)arg1 ;
-(id<BPSSubscriber>)downstream;
-(BPSSubscription *)subscription;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)setState:(id)arg1 ;
-(id)state;
-(void)receiveSubscription:(id)arg1 ;
-(id)newBookmark;
-(void)requestDemand:(long long)arg1 ;
-(id<BPSPublisher>)upstream;
-(void)cancel;
-(id)initWithUpstream:(id)arg1 downstream:(id)arg2 state:(id)arg3 ;
-(void)setUpstream:(id<BPSPublisher>)arg1 ;
@end

