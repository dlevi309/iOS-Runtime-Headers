/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class CURetrier, NSObject;

@interface SFWiFiHealthMonitor : NSObject {

	BOOL _invalidateCalled;
	int _lockdownActivated;
	int _lockdownActivationNotifyToken;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _wifiDeviceSetup;
	WiFiManagerClientRef _wifiManager;
	BOOL _wifiManagerSetup;
	CURetrier* _wifiRetrier;
	unsigned long long _wifiStatusBadTicks;
	unsigned long long _wifiStatusGoodTicks;
	double _wifiStatusDebounceSecs;
	NSObject*<OS_dispatch_source> _wifiStatusDebounceTimer;
	long long _wifiStatusExternal;
	long long _wifiStatusInternal;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _statusHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id statusHandler;                                          //@synthesize statusHandler=_statusHandler - In the implementation block
-(id)init;
-(id)description;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(void)reset;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)_wifiEnsureStarted;
-(void)_wifiEnsureStopped;
-(void)_wifiAutoJoinNotification:(id)arg1 ;
-(void)_wifiStatusChangedInternal:(long long)arg1 ;
-(void)_wifiStatusChangedExternal:(long long)arg1 ;
-(id)statusHandler;
-(void)setStatusHandler:(id)arg1 ;
@end

