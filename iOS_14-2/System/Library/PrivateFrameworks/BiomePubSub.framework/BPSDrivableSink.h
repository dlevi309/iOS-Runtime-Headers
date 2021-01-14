/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <libobjc.A.dylib/BPSSubscriber.h>
#import <libobjc.A.dylib/BPSCancellable.h>

@class BPSSubscriptionStatus, NSString;

@interface BPSDrivableSink : NSObject <BPSSubscriber, BPSCancellable> {

	os_unfair_lock_s _lock;
	/*^block*/id _receivedCompletion;
	/*^block*/id _shouldContinue;
	BPSSubscriptionStatus* _status;

}

@property (nonatomic,copy) id receivedCompletion;                         //@synthesize receivedCompletion=_receivedCompletion - In the implementation block
@property (nonatomic,copy) id shouldContinue;                             //@synthesize shouldContinue=_shouldContinue - In the implementation block
@property (nonatomic,retain) BPSSubscriptionStatus * status;              //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)receiveInput:(id)arg1 ;
-(id)init;
-(void)receiveCompletion:(id)arg1 ;
-(id)shouldContinue;
-(void)receiveSubscription:(id)arg1 ;
-(void)setStatus:(BPSSubscriptionStatus *)arg1 ;
-(void)cancel;
-(BPSSubscriptionStatus *)status;
-(id)initWithReceiveCompletion:(/*^block*/id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(id)receivedCompletion;
-(void)setReceivedCompletion:(id)arg1 ;
-(void)setShouldContinue:(id)arg1 ;
@end

