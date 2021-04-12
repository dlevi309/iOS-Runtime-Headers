/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@class NSRecursiveLock, NSMutableSet, RadiosPreferences, CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSNumber, NSString;

@interface IMMobileNetworkManager : NSObject <RadiosPreferencesDelegate, CoreTelephonyClientDataDelegate> {

	BOOL _registered;
	BOOL _shouldBringUpDataContext;
	BOOL _isDataPossible;
	BOOL _isDataContextActive;
	BOOL _isDataIndicatorNone;
	BOOL _isDataContextUsable;
	NSRecursiveLock* _lock;
	NSMutableSet* _cellAutoAssociationTokens;
	RadiosPreferences* _radiosPreferences;
	CTServerConnectionRef _ctServerConnection;
	void* _cellAssertion;
	CoreTelephonyClient* _coreTelephonyClient;
	CTXPCServiceSubscriptionContext* _currentDataSubscriptionContextSync;

}

@property (nonatomic,retain) RadiosPreferences * _radiosPreferences;                                              //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic) void* _cellAssertion;                                                                //@synthesize cellAssertion=_cellAssertion - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctServerConnection;                                           //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * _coreTelephonyClient;                                          //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * currentDataSubscriptionContextSync;              //@synthesize currentDataSubscriptionContextSync=_currentDataSubscriptionContextSync - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                                              //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * cellularAutoAssociationTokens;                                        //@synthesize cellAutoAssociationTokens=_cellAutoAssociationTokens - In the implementation block
@property (assign,nonatomic) BOOL registered;                                                                     //@synthesize registered=_registered - In the implementation block
@property (assign,nonatomic) BOOL shouldBringUpDataContext;                                                       //@synthesize shouldBringUpDataContext=_shouldBringUpDataContext - In the implementation block
@property (assign,nonatomic) BOOL isDataPossible;                                                                 //@synthesize isDataPossible=_isDataPossible - In the implementation block
@property (assign,nonatomic) BOOL isDataContextActive;                                                            //@synthesize isDataContextActive=_isDataContextActive - In the implementation block
@property (assign,nonatomic) BOOL isDataIndicatorNone;                                                            //@synthesize isDataIndicatorNone=_isDataIndicatorNone - In the implementation block
@property (assign,nonatomic) BOOL isDataContextUsable;                                                            //@synthesize isDataContextUsable=_isDataContextUsable - In the implementation block
@property (nonatomic,readonly) BOOL isAirplaneModeEnabled; 
@property (nonatomic,readonly) BOOL isWiFiEnabled; 
@property (nonatomic,readonly) BOOL isWiFiUsable; 
@property (nonatomic,readonly) BOOL isWiFiAssociated; 
@property (nonatomic,readonly) BOOL isWiFiCaptive; 
@property (nonatomic,readonly) BOOL isHostingWiFiHotSpot; 
@property (nonatomic,readonly) BOOL autoAssociateWiFi; 
@property (nonatomic,readonly) BOOL autoAssociateCellular; 
@property (nonatomic,readonly) BOOL disableFastDormancy; 
@property (nonatomic,readonly) BOOL willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) BOOL willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,retain,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,readonly) BOOL dataConnectionExists; 
@property (nonatomic,readonly) BOOL has2GDataConnection; 
@property (nonatomic,readonly) BOOL hasLTEDataConnection; 
@property (nonatomic,readonly) BOOL isDataSwitchEnabled; 
@property (nonatomic,readonly) BOOL isDataConnectionActive; 
@property (nonatomic,readonly) BOOL inValidSIMState; 
@property (nonatomic,readonly) BOOL requiresSIMInserted; 
@property (nonatomic,readonly) BOOL isSIMLocked; 
@property (nonatomic,readonly) BOOL isSIMRemoved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSRecursiveLock *)lock;
-(BOOL)isWiFiEnabled;
-(void)airplaneModeChanged;
-(BOOL)registered;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(BOOL)disableFastDormancy;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(BOOL)isWiFiAssociated;
-(BOOL)autoAssociateWiFi;
-(BOOL)isHostingWiFiHotSpot;
-(BOOL)willTryToAutoAssociateWiFiNetwork;
-(BOOL)willTryToSearchForWiFiNetwork;
-(NSNumber *)wiFiSignalStrength;
-(NSNumber *)wiFiScaledRSSI;
-(NSNumber *)wiFiScaledRate;
-(BOOL)isWiFiCaptive;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)showNetworkOptions;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3 ;
-(void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(BOOL)isAirplaneModeEnabled;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(BOOL)isDataConnectionActive;
-(void)_createCTServerConnection;
-(void)_releaseCTServerConnection;
-(void)_adjustCellularAutoAssociation;
-(BOOL)autoAssociateCellular;
-(void)_lockedAdjustCellularAutoAssociation;
-(void)_locked_updateDataStateBasedOnDataConnectionStatus:(id)arg1 ;
-(void)_locked_recalculateDataContextUsableAndPostNotificationIfNeeded:(BOOL)arg1 ;
-(void)_locked_updateDataStateBasedOnDataStatus:(id)arg1 ;
-(id)_dataCTXPCServiceSubscriptionContext;
-(void)_locked_updateDataStateWithContext:(id)arg1 ;
-(void)_locked_updateDataConnectionStateWithContext:(id)arg1 ;
-(void)_initializeDataState;
-(CTXPCServiceSubscriptionContext *)currentDataSubscriptionContextSync;
-(id)_telephonyDataSIMStatus;
-(BOOL)isSIMLocked;
-(BOOL)isSIMRemoved;
-(BOOL)_legacy_inValidSIMState;
-(int)_getCurrentCTDataStatus;
-(BOOL)_isDataConnectionAvailable;
-(void)_makeDataConnectionAvailable:(BOOL)arg1 ;
-(BOOL)isWiFiUsable;
-(void)addCellularAutoAssociationClientToken:(id)arg1 ;
-(void)removeCellularAutoAssociationClientToken:(id)arg1 ;
-(BOOL)requiresSIMInserted;
-(void)showSIMUnlock;
-(BOOL)inValidSIMState;
-(BOOL)dataConnectionExists;
-(BOOL)has2GDataConnection;
-(BOOL)hasLTEDataConnection;
-(BOOL)isDataSwitchEnabled;
-(NSMutableSet *)cellularAutoAssociationTokens;
-(void)setCellularAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(RadiosPreferences *)_radiosPreferences;
-(void)set_radiosPreferences:(RadiosPreferences *)arg1 ;
-(CTServerConnectionRef)_ctServerConnection;
-(void)set_ctServerConnection:(CTServerConnectionRef)arg1 ;
-(void*)_cellAssertion;
-(void)set_cellAssertion:(void*)arg1 ;
-(CoreTelephonyClient *)_coreTelephonyClient;
-(void)set_coreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(BOOL)shouldBringUpDataContext;
-(void)setShouldBringUpDataContext:(BOOL)arg1 ;
-(BOOL)isDataPossible;
-(void)setIsDataPossible:(BOOL)arg1 ;
-(BOOL)isDataContextActive;
-(void)setIsDataContextActive:(BOOL)arg1 ;
-(BOOL)isDataIndicatorNone;
-(void)setIsDataIndicatorNone:(BOOL)arg1 ;
-(BOOL)isDataContextUsable;
-(void)setIsDataContextUsable:(BOOL)arg1 ;
@end

