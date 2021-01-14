/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSPublisher.h>

@class BPSSubscriberList, BPSFutureResult;

@interface BPSFuture : BPSPublisher {

	os_unfair_lock_s _lock;
	BPSSubscriberList* _downstreams;
	BPSFutureResult* _result;

}

@property (nonatomic,retain) BPSSubscriberList * downstreams;              //@synthesize downstreams=_downstreams - In the implementation block
@property (nonatomic,retain) BPSFutureResult * result;                     //@synthesize result=_result - In the implementation block
-(void)setResult:(BPSFutureResult *)arg1 ;
-(void)subscribe:(id)arg1 ;
-(BPSFutureResult *)result;
-(void)disassociate:(long long)arg1 ;
-(BPSSubscriberList *)downstreams;
-(void)setDownstreams:(BPSSubscriberList *)arg1 ;
-(id)initWithAttemptToFulfill:(/*^block*/id)arg1 ;
@end

