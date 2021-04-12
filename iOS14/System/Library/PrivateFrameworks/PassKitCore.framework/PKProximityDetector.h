/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class SFDeviceDiscovery, NSObject, NSUUID;

@interface PKProximityDetector : NSObject {

	SFDeviceDiscovery* _nearbyInfoDiscovery;
	BOOL _advertisingDeviceNearby;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _discoveryQueue;
	unsigned _powerAssertionIdentifier;
	BOOL _isDetecting;
	NSUUID* _advertisingDeviceUUID;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSUUID * advertisingDeviceUUID;              //@synthesize advertisingDeviceUUID=_advertisingDeviceUUID - In the implementation block
@property (nonatomic,copy) id handler;                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) BOOL isDetecting;                            //@synthesize isDetecting=_isDetecting - In the implementation block
-(void)setHandler:(id)arg1 ;
-(void)endDetecting;
-(void)_createPowerAssertion;
-(void)_queue_endDetecting;
-(/*^block*/id)_createDeviceFoundBlockWithName:(id)arg1 ;
-(/*^block*/id)_createDeviceLostBlockWithName:(id)arg1 ;
-(NSUUID *)advertisingDeviceUUID;
-(void)_endPowerAssertion;
-(BOOL)isDetecting;
-(/*^block*/id)_createDiscoveryActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithAdvertisingDeviceUUID:(id)arg1 ;
-(void)startDetectingWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)handler;
-(void)dealloc;
@end

