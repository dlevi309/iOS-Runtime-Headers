/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFDeviceDiscovery, NSMutableDictionary, NSObject, NSArray;

@interface SFApproveDiscovery : NSObject {

	BOOL _activateCalled;
	/*^block*/id _activateHandler;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SFDeviceDiscovery* _deviceDiscovery;
	NSMutableDictionary* _deviceDictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _invalidationHandler;
	NSArray* _devices;

}

@property (nonatomic,retain) NSArray * devices;                                       //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)devices;
-(void)_invalidated;
-(void)setDevices:(NSArray *)arg1 ;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_discoveryEnsureStarted;
-(void)_discoveryEnsureStopped;
-(void)_discoveryFoundDevice:(id)arg1 ;
-(void)_discoveryLostDevice:(id)arg1 ;
-(void)_discoveryDeviceChanged:(id)arg1 ;
-(void)_activatedWithError:(id)arg1 ;
@end

