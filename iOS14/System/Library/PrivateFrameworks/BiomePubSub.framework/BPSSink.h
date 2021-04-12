/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <libobjc.A.dylib/BPSSubscriber.h>
#import <libobjc.A.dylib/BPSCancellable.h>

@class BPSSubscriptionStatus, NSString;

@interface BPSSink : NSObject <BPSSubscriber, BPSCancellable> {

	os_unfair_lock_s _lock;
	BPSSubscriptionStatus* _status;
	/*^block*/id _receivedCompletion;
	/*^block*/id _receivedValue;
	long long _demand;

}

@property (nonatomic,copy) id receivedCompletion;                         //@synthesize receivedCompletion=_receivedCompletion - In the implementation block
@property (nonatomic,copy) id receivedValue;                              //@synthesize receivedValue=_receivedValue - In the implementation block
@property (assign,nonatomic) long long demand;                            //@synthesize demand=_demand - In the implementation block
@property (nonatomic,retain) BPSSubscriptionStatus * status;              //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newBookmark;
-(id)initWithReceiveBookmarkedCompletion:(/*^block*/id)arg1 receiveInput:(/*^block*/id)arg2 ;
-(long long)receiveInput:(id)arg1 ;
-(id)init;
-(void)receiveCompletion:(id)arg1 ;
-(long long)demand;
-(void)receiveSubscription:(id)arg1 ;
-(void)setStatus:(BPSSubscriptionStatus *)arg1 ;
-(void)cancel;
-(BPSSubscriptionStatus *)status;
-(id)initWithReceiveCompletion:(/*^block*/id)arg1 receiveInput:(/*^block*/id)arg2 ;
-(void)setDemand:(long long)arg1 ;
-(id)receivedCompletion;
-(id)receivedValue;
-(void)setReceivedCompletion:(id)arg1 ;
-(void)setReceivedValue:(id)arg1 ;
@end

