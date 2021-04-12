/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
#import <WiFiKit/WiFiKit-Structs.h>
@class NSString, WFInterface, NSRunLoop, NSNumber, NSObject;

@interface WFClient : NSObject {

	BOOL _networkRestrictionActive;
	BOOL _powered;
	BOOL _isKnownNetworkUIEnabled;
	BOOL _WAPIEnabled;
	BOOL _diagnosticsEnabled;
	BOOL _WPA3PersonalEnabled;
	BOOL _WPA3EnterpriseEnabled;
	BOOL _mfpCapable;
	BOOL _powerModificationDisabled;
	BOOL _managedAppleID;
	BOOL _showAllHS20Networks;
	BOOL _wiFiHealthUIDisabled;
	BOOL _extraLoggingEnabled;
	BOOL _diagnosticsModeEnabled;
	BOOL _userAutoJoinState;
	unsigned long long _airplaneModeBehavior;
	NSString* _whitelistingUUID;
	long long _askToJoinMode;
	long long _autoInstantHotspotJoinOption;
	WFInterface* _interface;
	WiFiManagerClientRef _manager;
	NSRunLoop* _callbackRunLoop;
	NSNumber* _rssiThresholdNumber;
	NSObject*<OS_dispatch_queue> _serialClientQueue;

}

@property (nonatomic,retain) WFInterface * interface;                                                          //@synthesize interface=_interface - In the implementation block
@property (assign) WiFiManagerClientRef manager;                                                               //@synthesize manager=_manager - In the implementation block
@property (retain) NSRunLoop * callbackRunLoop;                                                                //@synthesize callbackRunLoop=_callbackRunLoop - In the implementation block
@property (assign) BOOL showAllHS20Networks;                                                                   //@synthesize showAllHS20Networks=_showAllHS20Networks - In the implementation block
@property (getter=isWiFiHealthUIDisabled) BOOL wiFiHealthUIDisabled;                                           //@synthesize wiFiHealthUIDisabled=_wiFiHealthUIDisabled - In the implementation block
@property (assign) BOOL extraLoggingEnabled;                                                                   //@synthesize extraLoggingEnabled=_extraLoggingEnabled - In the implementation block
@property (getter=isDiagnosticsModeEnabled) BOOL diagnosticsModeEnabled;                                       //@synthesize diagnosticsModeEnabled=_diagnosticsModeEnabled - In the implementation block
@property (assign,getter=isNetworkRestrictionActive,nonatomic) BOOL networkRestrictionActive;                  //@synthesize networkRestrictionActive=_networkRestrictionActive - In the implementation block
@property (retain) NSNumber * rssiThresholdNumber;                                                             //@synthesize rssiThresholdNumber=_rssiThresholdNumber - In the implementation block
@property (nonatomic,readonly) BOOL isKnownNetworkUIEnabled;                                                   //@synthesize isKnownNetworkUIEnabled=_isKnownNetworkUIEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long airplaneModeBehavior;                                          //@synthesize airplaneModeBehavior=_airplaneModeBehavior - In the implementation block
@property (assign,nonatomic) BOOL userAutoJoinState;                                                           //@synthesize userAutoJoinState=_userAutoJoinState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialClientQueue;                                   //@synthesize serialClientQueue=_serialClientQueue - In the implementation block
@property (nonatomic,readonly) NSString * whitelistingUUID;                                                    //@synthesize whitelistingUUID=_whitelistingUUID - In the implementation block
@property (assign,getter=isWPA3PersonalEnabled,nonatomic) BOOL WPA3PersonalEnabled;                            //@synthesize WPA3PersonalEnabled=_WPA3PersonalEnabled - In the implementation block
@property (assign,getter=isWPA3EnterpriseEnabled,nonatomic) BOOL WPA3EnterpriseEnabled;                        //@synthesize WPA3EnterpriseEnabled=_WPA3EnterpriseEnabled - In the implementation block
@property (assign,getter=isMfpCapable,nonatomic) BOOL mfpCapable;                                              //@synthesize mfpCapable=_mfpCapable - In the implementation block
@property (assign,getter=isManagedAppleID,nonatomic) BOOL managedAppleID;                                      //@synthesize managedAppleID=_managedAppleID - In the implementation block
@property (assign) BOOL powered;                                                                               //@synthesize powered=_powered - In the implementation block
@property (assign,getter=isWAPIEnabled,nonatomic) BOOL WAPIEnabled;                                            //@synthesize WAPIEnabled=_WAPIEnabled - In the implementation block
@property (assign,getter=isDiagnosticsEnabled,nonatomic) BOOL diagnosticsEnabled;                              //@synthesize diagnosticsEnabled=_diagnosticsEnabled - In the implementation block
@property (assign,nonatomic) long long askToJoinMode;                                                          //@synthesize askToJoinMode=_askToJoinMode - In the implementation block
@property (getter=isPowerModificationDisabled,nonatomic,readonly) BOOL powerModificationDisabled;              //@synthesize powerModificationDisabled=_powerModificationDisabled - In the implementation block
@property (assign,nonatomic) long long autoInstantHotspotJoinOption;                                           //@synthesize autoInstantHotspotJoinOption=_autoInstantHotspotJoinOption - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(WiFiManagerClientRef)manager;
-(WFInterface *)interface;
-(void)setInterface:(WFInterface *)arg1 ;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(long long)rssiThreshold;
-(BOOL)isManagedAppleID;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(void)setManagedAppleID:(BOOL)arg1 ;
-(BOOL)powered;
-(void)setPowered:(BOOL)arg1 ;
-(void)setUserAutoJoinState:(BOOL)arg1 ;
-(void)setAutoJoinEnabled:(BOOL)arg1 ;
-(void)_preferredNetworksDidChange:(id)arg1 ;
-(id)_copyCurrentNetworks;
-(void)_updateNetwork:(WiFiNetworkRef)arg1 ;
-(void)_addNetwork:(WiFiNetworkRef)arg1 ;
-(void)_removeNetwork:(WiFiNetworkRef)arg1 ;
-(void)_setAutoJoinEnabled:(BOOL)arg1 forNetwork:(WiFiNetworkRef)arg2 ;
-(id)_getGeoTagsForNetwork:(WiFiNetworkRef)arg1 ;
-(id)_getScoreForNetwork:(WiFiNetworkRef)arg1 ;
-(BOOL)isNetworkRestrictionActive;
-(void)_managedAppleIDStateDidChange:(BOOL)arg1 ;
-(void)_updatePowerState;
-(void)reloadConfiguration;
-(BOOL)isPowerModificationDisabled;
-(void)asyncPowered:(/*^block*/id)arg1 ;
-(BOOL)showAllHS20Networks;
-(NSString *)whitelistingUUID;
-(void)dispatchCertificateTrustAction:(long long)arg1 profile:(id)arg2 ;
-(void)setMISState:(BOOL)arg1 ;
-(BOOL)isWiFiHealthUIDisabled;
-(BOOL)isDiagnosticsEnabled;
-(BOOL)isWAPIEnabled;
-(void)setWAPIEnabled:(BOOL)arg1 ;
-(long long)autoInstantHotspotJoinOption;
-(void)setAutoInstantHotspotJoinOption:(long long)arg1 ;
-(long long)askToJoinMode;
-(void)setAskToJoinMode:(long long)arg1 ;
-(BOOL)isDiagnosticsModeEnabled;
-(BOOL)isKnownNetworkUIEnabled;
-(BOOL)isWPA3PersonalEnabled;
-(BOOL)isWPA3EnterpriseEnabled;
-(BOOL)isMfpCapable;
-(NSRunLoop *)callbackRunLoop;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(void)_unscheduleCallbacksWithManager:(WiFiManagerClientRef)arg1 ;
-(void)_scheduleCallbacksWithManager:(WiFiManagerClientRef)arg1 runLoop:(id)arg2 ;
-(void)_setupDefaultInterfaceWithManager:(WiFiManagerClientRef)arg1 ;
-(void)_managedConfigurationDidChange:(id)arg1 ;
-(long long)_askToJoinModeFromWiFiAskToJoinPreference:(int)arg1 ;
-(long long)_hotspotJoinOptionFromWiFiAutoHotspotMode:(int)arg1 ;
-(id)initWithCallbackRunLoop:(id)arg1 ;
-(void)setWPA3PersonalEnabled:(BOOL)arg1 ;
-(void)setWPA3EnterpriseEnabled:(BOOL)arg1 ;
-(void)setMfpCapable:(BOOL)arg1 ;
-(void)_updateDebugProperties;
-(void)_updateWAPIEnabled;
-(void)_updateDiagnosticsEnabled;
-(void)_updateAskToJoinMode;
-(void)_updateAutoInstantHotspotJoinOption;
-(void)_updateNetworkRestrictionActive;
-(void)_updateAirplaneModeStickiness;
-(void)_updateWPA3Properties:(WiFiManagerClientRef)arg1 ;
-(void)_updatePowerModificationDisableState;
-(void)_updateManagedAppleIDState;
-(void)_logWiFiManagerPropertyChange:(id)arg1 value:(BOOL)arg2 ;
-(void)_notifyWiFiPropertyChanged:(id)arg1 value:(id)arg2 ;
-(void)setNetworkRestrictionActive:(BOOL)arg1 ;
-(void)setPowerModificationDisableState:(BOOL)arg1 ;
-(void)setShowAllHS20Networks:(BOOL)arg1 ;
-(BOOL)extraLoggingEnabled;
-(void)setExtraLoggingEnabled:(BOOL)arg1 ;
-(void)setWiFiHealthUIDisabled:(BOOL)arg1 ;
-(void)setDiagnosticsModeEnabled:(BOOL)arg1 ;
-(BOOL)userAutoJoinState;
-(NSObject*<OS_dispatch_queue>)serialClientQueue;
-(void)_updateWithDeviceAttachment:(WiFiDeviceClientRef)arg1 ;
-(BOOL)hasShownSBPickerDontAsk;
-(void)setHasShownSBPickerDontAsk:(BOOL)arg1 ;
-(void)setAirplaneModeBehavior:(unsigned long long)arg1 ;
-(BOOL)isInfraAssociationAllowed;
-(void)asyncUserAutoJoinState:(/*^block*/id)arg1 ;
-(void)_userAutoJoinStateDidChange:(BOOL)arg1 info:(id)arg2 ;
-(void)_askToJoinNotification:(unsigned)arg1 ;
-(void)_trustNotificationWithID:(unsigned)arg1 network:(WiFiNetworkRef)arg2 data:(id)arg3 ;
-(void)asyncMISState:(/*^block*/id)arg1 ;
-(void)asyncMISDiscoveryState:(/*^block*/id)arg1 ;
-(void)setMISDiscoveryState:(BOOL)arg1 immediateDisable:(BOOL)arg2 ;
-(void)_joinRecommendationWithID:(unsigned)arg1 network:(WiFiNetworkRef)arg2 ;
-(void)dispatchJoinRecommendationAction:(long long)arg1 profile:(id)arg2 ;
-(void)dispatchAskToJoinAction:(unsigned long long)arg1 notificationId:(unsigned)arg2 network:(id)arg3 ;
-(void)setClientTypeAsForeground;
-(unsigned long long)airplaneModeBehavior;
-(NSNumber *)rssiThresholdNumber;
-(void)setRssiThresholdNumber:(NSNumber *)arg1 ;
-(void)setSerialClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

