/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <libobjc.A.dylib/SASEmptyProtocol.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>
#import <libobjc.A.dylib/CARSessionObserving.h>

@class SASLockStateMonitor, CXCallObserver, NSMutableSet, NSArray, CARSessionStatus, CARAutomaticDNDStatus, NSString, SUICApplicationStateHelper, NSHashTable, AFNotifyObserver;

@interface SASSystemState : NSObject <SASEmptyProtocol, CXCallObserverDelegate, CARSessionObserving> {

	BOOL _accessibilityShortcutEnabled;
	BOOL _enabled;
	int _carPlayConnectionState;
	SASLockStateMonitor* _lockStateMonitor;
	CXCallObserver* _callObserver;
	NSMutableSet* _activeCalls;
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
@property (nonatomic,retain) NSArray * currentCarPlaySupportedOEMAppIdList;                    //@synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList - In the implementation block
@property (nonatomic,retain) CARSessionStatus * carPlaySessionStatus;                          //@synthesize carPlaySessionStatus=_carPlaySessionStatus - In the implementation block
@property (nonatomic,retain) CARAutomaticDNDStatus * carAutomaticDNDStatus;                    //@synthesize carAutomaticDNDStatus=_carAutomaticDNDStatus - In the implementation block
@property (nonatomic,retain) NSString * vehicleName;                                           //@synthesize vehicleName=_vehicleName - In the implementation block
@property (nonatomic,retain) NSString * vehicleModel;                                          //@synthesize vehicleModel=_vehicleModel - In the implementation block
@property (nonatomic,retain) NSString * vehicleManufacturer;                                   //@synthesize vehicleManufacturer=_vehicleManufacturer - In the implementation block
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
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSHashTable *)listeners;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)setListeners:(NSHashTable *)arg1 ;
-(BOOL)isPad;
-(void)sessionDidConnect:(id)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(CXCallObserver *)callObserver;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(NSString *)vehicleName;
-(void)setVehicleName:(NSString *)arg1 ;
-(NSString *)vehicleManufacturer;
-(void)addStateChangeListener:(id)arg1 ;
-(void)removeStateChangeListener:(id)arg1 ;
-(BOOL)siriIsSupported;
-(BOOL)siriIsEnabled;
-(unsigned long long)carDNDStatus;
-(NSArray *)currentCarPlaySupportedOEMAppIdList;
-(void)setCurrentCarPlaySupportedOEMAppIdList:(NSArray *)arg1 ;
-(BOOL)carDNDActive;
-(SASLockStateMonitor *)lockStateMonitor;
-(BOOL)isConnectedToTrustedCarPlay;
-(BOOL)accessibilityShortcutEnabled;
-(BOOL)isConnectedToCarPlay;
-(id)foregroundAppInfosForPresentationIdentifier:(long long)arg1 ;
-(BOOL)siriIsRestricted;
-(void)setLockStateMonitor:(SASLockStateMonitor *)arg1 ;
-(id)currentSpokenLanguageCode;
-(BOOL)hasUnlockedSinceBoot;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)smartCoverClosed;
-(void)setAccessibilityShortcutEnabled:(BOOL)arg1 ;
-(void)monitorLockState;
-(NSString *)vehicleModel;
-(void)_updateAccessibilityState;
-(void)monitorCarSessions;
-(void)setApplicationStateHelper:(SUICApplicationStateHelper *)arg1 ;
-(SUICApplicationStateHelper *)applicationStateHelper;
-(BOOL)isInActiveCall;
-(CARAutomaticDNDStatus *)carAutomaticDNDStatus;
-(void)_pairedVehiclesDidChange:(id)arg1 ;
-(void)setCarPlaySessionStatus:(CARSessionStatus *)arg1 ;
-(CARSessionStatus *)carPlaySessionStatus;
-(void)setCarAutomaticDNDStatus:(CARAutomaticDNDStatus *)arg1 ;
-(void)_setCarPlayConnectionState:(int)arg1 ;
-(void)_updateCarPlayConnectionState;
-(int)carPlayConnectionState;
-(void)_fetchVehicleInformation;
-(void)_fetchOEMAppContext;
-(BOOL)isWirelessSplitterOn;
-(BOOL)isGuestConnected;
-(void)setCarPlayConnectionState:(int)arg1 ;
-(NSMutableSet *)activeCalls;
-(void)setActiveCalls:(NSMutableSet *)arg1 ;
-(void)setVehicleModel:(NSString *)arg1 ;
-(void)setVehicleManufacturer:(NSString *)arg1 ;
-(AFNotifyObserver *)observerWirelessSplitter;
-(void)setObserverWirelessSplitter:(AFNotifyObserver *)arg1 ;
-(AFNotifyObserver *)observerBluetoothGuestConnected;
-(void)setObserverBluetoothGuestConnected:(AFNotifyObserver *)arg1 ;
@end

