/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <libobjc.A.dylib/SASEmptyProtocol.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>
#import <libobjc.A.dylib/CARSessionObserving.h>

@class SASLockStateMonitor, CXCallObserver, NSMutableSet, FBSDisplayLayoutMonitor, NSArray, CARSessionStatus, CARAutomaticDNDStatus, NSString, SUICApplicationStateHelper, NSHashTable, AFNotifyObserver;

@interface SASSystemState : NSObject <SASEmptyProtocol, CXCallObserverDelegate, CARSessionObserving> {

	BOOL _accessibilityShortcutEnabled;
	BOOL _rightHandDrive;
	BOOL _enabled;
	int _carPlayConnectionState;
	SASLockStateMonitor* _lockStateMonitor;
	CXCallObserver* _callObserver;
	NSMutableSet* _activeCalls;
	FBSDisplayLayoutMonitor* _displayLayoutMonitor;
	NSArray* _currentCarPlaySupportedOEMAppIdList;
	CARSessionStatus* _carPlaySessionStatus;
	CARAutomaticDNDStatus* _carAutomaticDNDStatus;
	NSString* _vehicleName;
	NSString* _vehicleModel;
	NSString* _vehicleManufacturer;
	SUICApplicationStateHelper* _applicationStateHelper;
	NSHashTable* _listeners;
	AFNotifyObserver* _observerWirelessSplitter;
	AFNotifyObserver* _observerBluetoothGuestConnected;

}

@property (assign,nonatomic) int carPlayConnectionState;                                       //@synthesize carPlayConnectionState=_carPlayConnectionState - In the implementation block
@property (assign,nonatomic) BOOL accessibilityShortcutEnabled;                                //@synthesize accessibilityShortcutEnabled=_accessibilityShortcutEnabled - In the implementation block
@property (nonatomic,retain) CXCallObserver * callObserver;                                    //@synthesize callObserver=_callObserver - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeCalls;                                       //@synthesize activeCalls=_activeCalls - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * displayLayoutMonitor;                   //@synthesize displayLayoutMonitor=_displayLayoutMonitor - In the implementation block
@property (nonatomic,retain) NSArray * currentCarPlaySupportedOEMAppIdList;                    //@synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList - In the implementation block
@property (nonatomic,retain) CARSessionStatus * carPlaySessionStatus;                          //@synthesize carPlaySessionStatus=_carPlaySessionStatus - In the implementation block
@property (nonatomic,retain) CARAutomaticDNDStatus * carAutomaticDNDStatus;                    //@synthesize carAutomaticDNDStatus=_carAutomaticDNDStatus - In the implementation block
@property (nonatomic,retain) NSString * vehicleName;                                           //@synthesize vehicleName=_vehicleName - In the implementation block
@property (nonatomic,retain) NSString * vehicleModel;                                          //@synthesize vehicleModel=_vehicleModel - In the implementation block
@property (nonatomic,retain) NSString * vehicleManufacturer;                                   //@synthesize vehicleManufacturer=_vehicleManufacturer - In the implementation block
@property (assign,nonatomic) BOOL rightHandDrive;                                              //@synthesize rightHandDrive=_rightHandDrive - In the implementation block
@property (nonatomic,retain) SUICApplicationStateHelper * applicationStateHelper;              //@synthesize applicationStateHelper=_applicationStateHelper - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSHashTable * listeners;                                          //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) AFNotifyObserver * observerWirelessSplitter;                      //@synthesize observerWirelessSplitter=_observerWirelessSplitter - In the implementation block
@property (nonatomic,retain) AFNotifyObserver * observerBluetoothGuestConnected;               //@synthesize observerBluetoothGuestConnected=_observerBluetoothGuestConnected - In the implementation block
@property (nonatomic,retain) SASLockStateMonitor * lockStateMonitor;                           //@synthesize lockStateMonitor=_lockStateMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedSystemState;
-(void)sessionDidDisconnect:(id)arg1 ;
-(BOOL)isPad;
-(void)sessionDidConnect:(id)arg1 ;
-(BOOL)enabled;
-(BOOL)accessibilityShortcutEnabled;
-(void)setRightHandDrive:(BOOL)arg1 ;
-(BOOL)isConnectedToCarPlay;
-(NSHashTable *)listeners;
-(FBSDisplayLayoutMonitor *)displayLayoutMonitor;
-(BOOL)isConnectedToTrustedCarPlay;
-(BOOL)isGuestConnected;
-(void)monitorLockState;
-(id)init;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(BOOL)siriIsEnabled;
-(BOOL)isRightHandDrive;
-(BOOL)_mapsAppIsVisibleOnLockscreen;
-(void)_setCarPlayConnectionState:(int)arg1 ;
-(id)currentSpokenLanguageCode;
-(void)setAccessibilityShortcutEnabled:(BOOL)arg1 ;
-(BOOL)deviceIsPasscodeLocked;
-(void)setObserverWirelessSplitter:(AFNotifyObserver *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setListeners:(NSHashTable *)arg1 ;
-(void)setCarPlayConnectionState:(int)arg1 ;
-(NSString *)vehicleModel;
-(void)setVehicleManufacturer:(NSString *)arg1 ;
-(void)setDisplayLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)setVehicleName:(NSString *)arg1 ;
-(AFNotifyObserver *)observerWirelessSplitter;
-(BOOL)siriIsRestricted;
-(void)removeStateChangeListener:(id)arg1 ;
-(NSString *)vehicleManufacturer;
-(void)_updateCarPlayConnectionState;
-(BOOL)isWirelessSplitterOn;
-(NSMutableSet *)activeCalls;
-(BOOL)_deviceIsUnlocked;
-(BOOL)_internalAlwaysEyesFreeEnabled;
-(BOOL)smartCoverClosed;
-(SUICApplicationStateHelper *)applicationStateHelper;
-(int)carPlayConnectionState;
-(void)_updateAccessibilityState;
-(BOOL)rightHandDrive;
-(void)_pairedVehiclesDidChange:(id)arg1 ;
-(CARSessionStatus *)carPlaySessionStatus;
-(BOOL)carDNDActiveOrEyesFreeAndShouldHaveFullScreenPresentation;
-(BOOL)isATV;
-(void)monitorCarSessions;
-(CXCallObserver *)callObserver;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(BOOL)deviceIsBlocked;
-(NSString *)vehicleName;
-(BOOL)isInActiveCall;
-(id)_initForTesting;
-(void)setVehicleModel:(NSString *)arg1 ;
-(CARAutomaticDNDStatus *)carAutomaticDNDStatus;
-(BOOL)siriIsSupported;
-(BOOL)hasUnlockedSinceBoot;
-(SASLockStateMonitor *)lockStateMonitor;
-(void)setCurrentCarPlaySupportedOEMAppIdList:(NSArray *)arg1 ;
-(void)_fetchVehicleInformation;
-(void)setApplicationStateHelper:(SUICApplicationStateHelper *)arg1 ;
-(id)foregroundAppInfosForPresentationIdentifier:(long long)arg1 ;
-(void)_fetchOEMAppContext;
-(void)setLockStateMonitor:(SASLockStateMonitor *)arg1 ;
-(BOOL)isConnectedToEyesFreeDevice;
-(unsigned long long)carDNDStatus;
-(void)addStateChangeListener:(id)arg1 ;
-(void)setCarPlaySessionStatus:(CARSessionStatus *)arg1 ;
-(BOOL)carDNDActive;
-(void)setCarAutomaticDNDStatus:(CARAutomaticDNDStatus *)arg1 ;
-(AFNotifyObserver *)observerBluetoothGuestConnected;
-(void)setActiveCalls:(NSMutableSet *)arg1 ;
-(NSArray *)currentCarPlaySupportedOEMAppIdList;
-(BOOL)deviceScreenIsOn;
-(void)setObserverBluetoothGuestConnected:(AFNotifyObserver *)arg1 ;
@end

