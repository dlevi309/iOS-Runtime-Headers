/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@class NSRecursiveLock, NSMapTable, PCSimpleTimer, NSString, NSTimer, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface PCPersistentInterfaceManager : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate> {

	NSRecursiveLock* _lock;
	NSMapTable* _delegatesAndQueues;
	CFSetRef _WiFiAutoAssociationDelegates;
	PCSimpleTimer* _WiFiAutoAssociationDisableTimer;
	CFSetRef _wakeOnWiFiDelegates;
	PCSimpleTimer* _wakeOnWiFiDisableTimer;
	void* _interfaceAssertion;
	NSString* _WWANInterfaceName;
	BOOL _isWWANInterfaceUp;
	NSTimer* _inCallWWANOverrideTimer;
	BOOL _isWWANInterfaceDataActive;
	BOOL _ctIsWWANInHomeCountry;
	BOOL _hasWWANStatusIndicator;
	BOOL _isWWANInterfaceSuspended;
	BOOL _isPowerStateDetectionSupported;
	BOOL _isWWANInterfaceInProlongedHighPowerState;
	BOOL _isWWANInterfaceActivationPermitted;
	double _lastActivationTime;
	BOOL _isInCall;
	BOOL _isWakeOnWiFiSupported;
	BOOL _isWakeOnWiFiEnabled;
	CoreTelephonyClient* _ctClient;
	CTXPCServiceSubscriptionContext* _currentDataSimContext;
	void* _ctServerConnection;

}

@property (readonly) BOOL isPowerStateDetectionSupported; 
@property (readonly) BOOL isWWANInterfaceInProlongedHighPowerState; 
@property (readonly) BOOL isInCall; 
@property (readonly) BOOL isWWANInterfaceActivationPermitted; 
@property (readonly) BOOL areAllNetworkInterfacesDisabled; 
@property (nonatomic,readonly) BOOL isWWANInterfaceUp; 
@property (nonatomic,readonly) BOOL isWWANInHomeCountry; 
@property (nonatomic,readonly) BOOL isWWANBetterThanWiFi; 
@property (nonatomic,readonly) BOOL isWWANInterfaceSuspended; 
@property (nonatomic,readonly) BOOL hasWWANStatusIndicator;                      //@synthesize hasWWANStatusIndicator=_hasWWANStatusIndicator - In the implementation block
@property (nonatomic,readonly) BOOL doesWWANInterfaceExist; 
@property (nonatomic,readonly) NSString * WWANInterfaceName; 
@property (nonatomic,readonly) BOOL isInternetReachableViaWiFi; 
@property (nonatomic,readonly) BOOL isWakeOnWiFiSupported; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,readonly) BOOL allowBindingToWWAN; 
@property (nonatomic,readonly) NSString * currentLinkQualityString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(BOOL)_isCurrentDataSimContextLocked:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_createCTConnection;
-(void)_inCallWWANOverrideTimerFired;
-(void)_adjustWiFiAutoAssociationLocked;
-(BOOL)_wwanIsPoorLinkQuality;
-(id)init;
-(void)_updateWWANInterfaceUpStateLocked;
-(NSString *)currentLinkQualityString;
-(void)_adjustWakeOnWiFi;
-(void)_processDataStatusLocked:(id)arg1 ;
-(BOOL)isWWANBetterThanWiFi;
-(void)_updateCTIsWWANInHomeCountry:(BOOL)arg1 isWWANInterfaceDataActive:(BOOL)arg2 ;
-(BOOL)isWWANInterfaceSuspended;
-(void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2 ;
-(void)_clearInCallWWANOverrideTimerLocked;
-(void)_updateWWANInterfaceAssertionsLocked;
-(BOOL)isWWANInHomeCountry;
-(BOOL)_wantsWakeOnWiFiEnabled;
-(void)_ctConnectionAttempt;
-(BOOL)isWWANInterfaceInProlongedHighPowerState;
-(BOOL)isWWANInterfaceActivationPermitted;
-(BOOL)_wifiIsPoorLinkQuality;
-(void)_adjustWakeOnWiFiLocked;
-(BOOL)isInternetReachableViaWiFi;
-(BOOL)isPowerStateDetectionSupported;
-(BOOL)areAllNetworkInterfacesDisabled;
-(void)handleMachMessage:(void*)arg1 ;
-(BOOL)isInternetReachable;
-(void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2 ;
-(void)_updateWWANInterfaceUpState;
-(BOOL)hasWWANStatusIndicator;
-(void)_processCurrentDataSimChangedLocked:(id)arg1 ;
-(void)_adjustWiFiAutoAssociation;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3 ;
-(void)_updateWWANInterfaceAssertions;
-(BOOL)doesWWANInterfaceExist;
-(void)_processCallStatusChanged:(id)arg1 ;
-(BOOL)_isInternetReachableLocked;
-(void)cutWiFiManagerDeviceAttached:(id)arg1 ;
-(BOOL)_isWWANInHomeCountryLocked;
-(void)_processConnectionStatusLocked:(id)arg1 ;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3 ;
-(BOOL)_wantsWWANInterfaceAssertion;
-(BOOL)isInCall;
-(BOOL)isWakeOnWiFiSupported;
-(void)_mainThreadCTConnectionAttempt;
-(BOOL)allowBindingToWWAN;
-(id)_nonCellularMonitor;
-(void)_scheduleCalloutsForSelector:(SEL)arg1 ;
-(BOOL)_isWiFiUsable;
-(NSString *)WWANInterfaceName;
-(BOOL)isWWANInterfaceUp;
-(void)dealloc;
-(BOOL)_isCellularCall:(CTCallRef)arg1 ;
@end

