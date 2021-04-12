/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
@class CURunLoopThread, NSObject;

@interface CUMobileDeviceDiscovery : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	CURunLoopThread* _mdRunLoopThread;
	unsigned _changeFlags;
	unsigned _discoveryFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned discoveryFlags;                                 //@synthesize discoveryFlags=_discoveryFlags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
+(void)getDevicesWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)_invalidated;
-(void)activate;
-(void)setChangeFlags:(unsigned)arg1 ;
-(unsigned)changeFlags;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
-(void)_mdThreadInitialize;
-(void)_mdThreadFinalize;
-(unsigned)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned)arg1 ;
@end

