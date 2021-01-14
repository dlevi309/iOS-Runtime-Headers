/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/


@class BPSSubscription;

@interface BPSSubscriptionStatus : NSObject {

	long long _state;
	BPSSubscription* _subscription;

}

@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) BPSSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
-(void)setSubscription:(BPSSubscription *)arg1 ;
-(id)initWithState:(long long)arg1 subscription:(id)arg2 ;
-(BPSSubscription *)subscription;
-(void)setState:(long long)arg1 ;
-(long long)state;
@end

