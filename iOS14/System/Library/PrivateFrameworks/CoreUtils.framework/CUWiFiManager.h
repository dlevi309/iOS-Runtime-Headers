/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _wifiCriticalSetup;
	BOOL _wifiCriticalState;
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
	unsigned _controlFlags;
	unsigned _wifiFlags;
	int _wifiState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSArray* _trafficPeers;
	/*^block*/id _wifiStateChangedHandler;

}

@property (assign,nonatomic) unsigned controlFlags;                                   //@synthesize controlFlags=_controlFlags - In the implementation block
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
-(BOOL)wakeOnWirelessEnabled;
-(int)wifiState;
-(id)wifiStateChangedHandler;
-(void)performUpdate:(/*^block*/id)arg1 ;
-(unsigned)controlFlags;
-(void)setWifiStateChangedHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(void)_updateInfraDisabled;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_wifiAutoJoinNotification:(id)arg1 ;
-(void)setInfraDisabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)setTrafficPeers:(NSArray *)arg1 ;
-(void)_updateTrafficPeers;
-(NSArray *)trafficPeers;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_wifiEnsureStarted;
-(void)_interrupted;
-(void)_updateWakeOnWireless;
-(void)_invalidated;
-(void)_update;
-(void)invalidate;
-(unsigned)_wifiFlagsUncached;
-(unsigned)wifiFlags;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setControlFlags:(unsigned)arg1 ;
-(void)_wifiStateChanged;
-(id)invalidationHandler;
-(void)setWakeOnWirelessEnabled:(BOOL)arg1 ;
-(BOOL)infraDisabled;
-(NSString *)label;
-(int)_wifiStateUncached;
-(void)_wifiEnsureStopped;
-(id)interruptionHandler;
-(void)_updateTrafficPeersWithService:(unsigned)arg1 ;
-(void)dealloc;
@end

