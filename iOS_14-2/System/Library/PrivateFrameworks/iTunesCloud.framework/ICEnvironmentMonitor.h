/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NWPathEvaluator, NWNetworkOfInterestManager, NSMutableSet, NSString;

@interface ICEnvironmentMonitor : NSObject <NWNetworkOfInterestManagerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSHashTable* _observers;
	CTServerConnectionRef _telephonyServerConnectionRef;
	NWPathEvaluator* _networkPathEvaluator;
	int _thermalNotificationToken;
	unsigned _powerNotificationRef;
	void* _symptomPresentationFeedDyLibHandle;
	NWNetworkOfInterestManager* _noiManager;
	long long _cellularLinkQuality;
	NSMutableSet* _networksOfInterest;
	BOOL _isCharging;
	BOOL _isRemoteServerLikelyReachable;
	BOOL _isWiFiActive;
	BOOL _currentNetworkLinkHighQuality;
	BOOL _wifiAssociated;
	BOOL _networkConstrained;
	BOOL _ethernetWired;
	BOOL _currentNetworkLinkExpensive;
	BOOL _remoteServerReachable;
	NSString* _telephonyOperatorName;
	NSString* _telephonyRegistrationStatus;
	NSString* _telephonyStatusIndicator;
	double _currentBatteryLevel;
	long long _networkType;
	long long _lastKnownNetworkType;
	unsigned long long _currentThermalLevel;

}

@property (getter=isCharging,nonatomic,readonly) BOOL charging;                                                        //@synthesize isCharging=_isCharging - In the implementation block
@property (nonatomic,readonly) long long networkType;                                                                  //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,readonly) long long lastKnownNetworkType;                                                         //@synthesize lastKnownNetworkType=_lastKnownNetworkType - In the implementation block
@property (getter=isRemoteServerReachable,nonatomic,readonly) BOOL remoteServerReachable;                              //@synthesize remoteServerReachable=_remoteServerReachable - In the implementation block
@property (getter=isRemoteServerLikelyReachable,nonatomic,readonly) BOOL remoteServerLikelyReachable;                  //@synthesize isRemoteServerLikelyReachable=_isRemoteServerLikelyReachable - In the implementation block
@property (getter=isCurrentNetworkLinkHighQuality,nonatomic,readonly) BOOL currentNetworkLinkHighQuality;              //@synthesize currentNetworkLinkHighQuality=_currentNetworkLinkHighQuality - In the implementation block
@property (getter=isCurrentNetworkLinkExpensive,nonatomic,readonly) BOOL currentNetworkLinkExpensive;                  //@synthesize currentNetworkLinkExpensive=_currentNetworkLinkExpensive - In the implementation block
@property (getter=isWiFiAssociated,nonatomic,readonly) BOOL wifiAssociated;                                            //@synthesize wifiAssociated=_wifiAssociated - In the implementation block
@property (getter=isEthernetWired,nonatomic,readonly) BOOL ethernetWired;                                              //@synthesize ethernetWired=_ethernetWired - In the implementation block
@property (getter=isWiFiActive,nonatomic,readonly) BOOL wiFiActive;                                                    //@synthesize isWiFiActive=_isWiFiActive - In the implementation block
@property (getter=isNetworkConstrained,nonatomic,readonly) BOOL networkConstrained;                                    //@synthesize networkConstrained=_networkConstrained - In the implementation block
@property (nonatomic,readonly) unsigned long long currentThermalLevel;                                                 //@synthesize currentThermalLevel=_currentThermalLevel - In the implementation block
@property (nonatomic,readonly) double currentBatteryLevel;                                                             //@synthesize currentBatteryLevel=_currentBatteryLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * telephonyStatusIndicator;                                               //@synthesize telephonyStatusIndicator=_telephonyStatusIndicator - In the implementation block
@property (nonatomic,copy,readonly) NSString * telephonyOperatorName;                                                  //@synthesize telephonyOperatorName=_telephonyOperatorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * telephonyRegistrationStatus;                                            //@synthesize telephonyRegistrationStatus=_telephonyRegistrationStatus - In the implementation block
+(id)sharedMonitor;
-(long long)networkType;
-(long long)_networkTypeFromTelephonyStatusIndicator:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_onQueue_updateTelephonyStateAndNotifyObservers:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isNetworkConstrained;
-(id)init;
-(double)currentBatteryLevel;
-(BOOL)isWiFiAssociated;
-(void)_onQueue_updateThermalLevelWithToken:(int)arg1 ;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
-(BOOL)isRemoteServerReachable;
-(NSString *)telephonyRegistrationStatus;
-(long long)lastKnownNetworkType;
-(void)didStopTrackingNOI:(id)arg1 ;
-(long long)_currentNetworkType;
-(long long)_currentCellularLinkQuality;
-(BOOL)isWiFiActive;
-(void)_handleCTServerConnectionNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_isWiFiAssociated;
-(void)_updatePowerStateWithService:(unsigned)arg1 shouldNotifyObservers:(BOOL)arg2 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_onQueue_loadInitialThermalLevel;
-(void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(BOOL)arg1 ;
-(void)_handleApplicationDidEnterForegroundNotification:(id)arg1 ;
-(BOOL)isCharging;
-(BOOL)isCurrentNetworkLinkExpensive;
-(BOOL)isEthernetWired;
-(BOOL)_networkConstrained;
-(long long)_networkTypeFromWatchCarousel;
-(NSString *)telephonyStatusIndicator;
-(NSString *)telephonyOperatorName;
-(void)dealloc;
-(BOOL)isCurrentNetworkLinkHighQuality;
-(unsigned long long)currentThermalLevel;
-(BOOL)isRemoteServerLikelyReachable;
@end

