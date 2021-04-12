/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)handleMachMessage:(void*)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_adjustWiFiAutoAssociation;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)cutWiFiManagerDeviceAttached:(id)arg1 ;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3 ;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_createCTConnection;
-(void)_updateWWANInterfaceUpStateLocked;
-(void)_processCallStatusChanged:(id)arg1 ;
-(void)_processCurrentDataSimChangedLocked:(id)arg1 ;
-(void)_processConnectionStatusLocked:(id)arg1 ;
-(void)_processDataStatusLocked:(id)arg1 ;
-(void)_mainThreadCTConnectionAttempt;
-(void)_ctConnectionAttempt;
-(void)_updateWWANInterfaceAssertionsLocked;
-(void)_updateWWANInterfaceUpState;
-(void)_scheduleCalloutsForSelector:(SEL)arg1 ;
-(BOOL)_isCurrentDataSimContextLocked:(id)arg1 ;
-(void)_updateCTIsWWANInHomeCountry:(BOOL)arg1 isWWANInterfaceDataActive:(BOOL)arg2 ;
-(BOOL)_wantsWWANInterfaceAssertion;
-(BOOL)_isCellularCall:(CTCallRef)arg1 ;
-(void)_clearInCallWWANOverrideTimerLocked;
-(void)_inCallWWANOverrideTimerFired;
-(id)_nonCellularMonitor;
-(BOOL)isInternetReachable;
-(BOOL)_isWWANInHomeCountryLocked;
-(BOOL)_isInternetReachableLocked;
-(void)_adjustWakeOnWiFi;
-(BOOL)_wantsWakeOnWiFiEnabled;
-(void)_adjustWakeOnWiFiLocked;
-(BOOL)doesWWANInterfaceExist;
-(BOOL)isWWANInterfaceActivationPermitted;
-(BOOL)isInCall;
-(BOOL)_isWiFiUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(NSString *)currentLinkQualityString;
-(BOOL)_wwanIsPoorLinkQuality;
-(BOOL)_wifiIsPoorLinkQuality;
-(BOOL)isWWANBetterThanWiFi;
-(BOOL)isWWANInterfaceUp;
-(NSString *)WWANInterfaceName;
-(BOOL)isWWANInterfaceSuspended;
-(BOOL)isPowerStateDetectionSupported;
-(BOOL)isWWANInterfaceInProlongedHighPowerState;
-(BOOL)isWWANInHomeCountry;
-(BOOL)isInternetReachableViaWiFi;
-(BOOL)isWakeOnWiFiSupported;
-(BOOL)areAllNetworkInterfacesDisabled;
-(void)_updateWWANInterfaceAssertions;
-(void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2 ;
-(void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2 ;
-(BOOL)allowBindingToWWAN;
-(BOOL)hasWWANStatusIndicator;
@end

