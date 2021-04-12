/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class SFService, NSObject;

@interface PKProximityAdvertiser : NSObject {

	SFService* _nearbyInfoSharingService;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _advertiserQueue;
	BOOL _isAdvertising;

}

@property (nonatomic,readonly) BOOL isAdvertising;              //@synthesize isAdvertising=_isAdvertising - In the implementation block
-(void)startAdvertisingForDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(/*^block*/id)_createAdvertisingActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_endAdvertising;
-(void)endAdvertising;
-(void)dealloc;
-(BOOL)isAdvertising;
@end

