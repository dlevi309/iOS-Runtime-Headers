/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSArray, CURetrier, NSObject, NSString;

@interface CUWiFiManager : NSObject {

	BOOL _activateCalled;
	BOOL _activated;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	BOOL _updating;
	NSArray* _trafficPeersCurrent;
	BOOL _wifiAutoJoinDisabled;
	WiFiManagerClientRef _wifiManager;
	BOOL _wifiManagerSetup;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _wifiDeviceSetup;
	WiFiNetworkRef _wifiNetworkDisabled;
	CURetrier* _wifiRetrier;
	BOOL _wifiStateMonitorSetup;
	BOOL _infraDisabledChanged;
	BOOL _trafficPeerChanged;
	BOOL _wakeOnWirelessEnabledChanged;
	BOOL _infraDisabled;
	BOOL _wakeOnWirelessEnabled;
	unsigned _wifiFlags;
	int _wifiState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSArray* _trafficPeers;
	/*^block*/id _wifiStateChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL infraDisabled;                                      //@synthesize infraDisabled=_infraDisabled - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSArray * trafficPeers;                                    //@synthesize trafficPeers=_trafficPeers - In the implementation block
@property (assign,nonatomic) BOOL wakeOnWirelessEnabled;                              //@synthesize wakeOnWirelessEnabled=_wakeOnWirelessEnabled - In the implementation block
@property (nonatomic,readonly) unsigned wifiFlags;                                    //@synthesize wifiFlags=_wifiFlags - In the implementation block
@property (nonatomic,readonly) int wifiState;                                         //@synthesize wifiState=_wifiState - In the implementation block
@property (nonatomic,copy) id wifiStateChangedHandler;                                //@synthesize wifiStateChangedHandler=_wifiStateChangedHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(int)wifiState;
-(void)_invalidated;
-(void)_interrupted;
-(void)activate;
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(id)wifiStateChangedHandler;
-(unsigned)wifiFlags;
-(void)setWifiStateChangedHandler:(id)arg1 ;
-(void)setTrafficPeers:(NSArray *)arg1 ;
-(void)setInfraDisabled:(BOOL)arg1 ;
-(void)setWakeOnWirelessEnabled:(BOOL)arg1 ;
-(void)performUpdate:(/*^block*/id)arg1 ;
-(void)_updateInfraDisabled;
-(void)_updateTrafficPeers;
-(void)_updateTrafficPeersWithService:(unsigned)arg1 ;
-(void)_updateWakeOnWireless;
-(void)_wifiEnsureStarted;
-(void)_wifiEnsureStopped;
-(void)_wifiAutoJoinNotification:(id)arg1 ;
-(unsigned)_wifiFlagsUncached;
-(int)_wifiStateUncached;
-(BOOL)infraDisabled;
-(NSArray *)trafficPeers;
-(BOOL)wakeOnWirelessEnabled;
@end

