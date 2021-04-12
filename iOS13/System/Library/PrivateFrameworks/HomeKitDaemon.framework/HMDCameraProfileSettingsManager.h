/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMBLocalZoneDelegate.h>
#import <libobjc.A.dylib/HMBCloudZoneDelegate.h>
#import <libobjc.A.dylib/HMBLocalZoneModelObserver.h>
#import <libobjc.A.dylib/HMDCloudShareParticipantsManagerDataSource.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue, HMDCameraProfileSettingsManagerDelegate;
@class NSObject, HMDHAPAccessory, HMFMessageDispatcher, HMDDatabaseZoneManager, NSNotificationCenter, HMDBulletinBoard, NSString, NSNumber, NSUUID, HMFTimer, HMDCameraProfileSettingsModel, HMDCameraProfileSettingsDerivedPropertiesModel;

@interface HMDCameraProfileSettingsManager : HMFObject <HMFLogging, HMBLocalZoneDelegate, HMBCloudZoneDelegate, HMBLocalZoneModelObserver, HMDCloudShareParticipantsManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFTimerDelegate, HMFMessageReceiver> {

	NSObject*<OS_dispatch_queue> _messageReceiveQueue;
	unsigned long long _currentAccessMode;
	id<HMDCameraProfileSettingsManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _hapAccessory;
	HMFMessageDispatcher* _msgDispatcher;
	HMDDatabaseZoneManager* _zoneManager;
	NSNotificationCenter* _notificationCenter;
	HMDBulletinBoard* _bulletinBoard;
	NSString* _clientIdentifier;
	NSNumber* _anyUserAtHome;
	NSUUID* _uniqueIdentifier;
	/*^block*/id _timerFactory;
	HMFTimer* _safeModeTimer;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) HMDHAPAccessory * hapAccessory;                                                                           //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (retain) HMFMessageDispatcher * msgDispatcher;                                                                     //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (readonly) HMDDatabaseZoneManager * zoneManager;                                                                   //@synthesize zoneManager=_zoneManager - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                                                              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) HMDCameraProfileSettingsModel * defaultSettingsModel; 
@property (readonly) HMDCameraProfileSettingsDerivedPropertiesModel * derivedPropertiesModel; 
@property (readonly) HMDBulletinBoard * bulletinBoard;                                                                       //@synthesize bulletinBoard=_bulletinBoard - In the implementation block
@property (getter=isCameraManuallyDisabled,readonly) BOOL cameraManuallyDisabled; 
@property (readonly) NSString * clientIdentifier;                                                                            //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (getter=isAnyUserAtHome,retain) NSNumber * anyUserAtHome;                                                          //@synthesize anyUserAtHome=_anyUserAtHome - In the implementation block
@property (getter=isCurrentDeviceConfirmedPrimaryResident,readonly) BOOL currentDeviceConfirmedPrimaryResident; 
@property (readonly) NSUUID * uniqueIdentifier;                                                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) NSUUID * derivedPropertiesModelID; 
@property (copy) id timerFactory;                                                                                            //@synthesize timerFactory=_timerFactory - In the implementation block
@property (retain) HMFTimer * safeModeTimer;                                                                                 //@synthesize safeModeTimer=_safeModeTimer - In the implementation block
@property (readonly) NSString * zoneName; 
@property (readonly) HMDCameraProfileSettingsModel * currentSettingsModel; 
@property (readonly) unsigned long long currentAccessMode;                                                                   //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (readonly) unsigned long long supportedFeatures; 
@property (__weak) id<HMDCameraProfileSettingsManagerDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue;                                             //@synthesize messageReceiveQueue=_messageReceiveQueue - In the implementation block
+(id)logCategory;
+(id)zoneNameForHome:(id)arg1 ;
-(void)dealloc;
-(id<HMDCameraProfileSettingsManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraProfileSettingsManagerDelegate>)arg1 ;
-(void)start;
-(void)remove;
-(NSUUID *)uniqueIdentifier;
-(NSString *)zoneName;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSNotificationCenter *)notificationCenter;
-(NSString *)clientIdentifier;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(unsigned long long)supportedFeatures;
-(HMDDatabaseZoneManager *)zoneManager;
-(id)messageDestination;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(unsigned long long)currentAccessMode;
-(BOOL)isCameraManuallyDisabled;
-(id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelCreation:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2 ;
-(HMDHAPAccessory *)hapAccessory;
-(HMDCameraProfileSettingsModel *)currentSettingsModel;
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(id)isAnyUserAtHome;
-(void)setHapAccessory:(HMDHAPAccessory *)arg1 ;
-(id)initWithHAPAccessory:(id)arg1 workQueue:(id)arg2 ;
-(void)zoneManagerDidStart:(id)arg1 ;
-(void)zoneManagerDidStop:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 hapAccessory:(id)arg2 workQueue:(id)arg3 zoneManager:(id)arg4 notificationCenter:(id)arg5 bulletinBoard:(id)arg6 ;
-(BOOL)isCurrentDeviceConfirmedPrimaryResident;
-(void)_handleUpdateAccessMode:(id)arg1 ;
-(void)_handleUpdateRecordingTriggerEvents:(id)arg1 ;
-(void)_handleAccessModeIndicatorEnabled:(id)arg1 ;
-(void)_handleUpdateSnapshotsAllowed:(id)arg1 ;
-(void)_handleUpdateNightVisionModeEnabled:(id)arg1 ;
-(void)_handleRecordingAudioEnabled:(id)arg1 ;
-(void)_handleBulletinBoardNotificationCommit:(id)arg1 ;
-(void)_handleAccessModeChangeNotificationEnabled:(id)arg1 ;
-(void)handleAccessoryServiceAddedNotification:(id)arg1 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg1 ;
-(void)handleHomePresenceEvaluatedNotification:(id)arg1 ;
-(void)handleAccessoryConfiguredNotification:(id)arg1 ;
-(void)handleRecordingManagementServiceDidUpdateNotification:(id)arg1 ;
-(void)handleCharacteristicsValueUpdated:(id)arg1 ;
-(id)manuallyDisabledCharacteristic;
-(void)setAnyUserAtHome:(NSNumber *)arg1 ;
-(NSUUID *)derivedPropertiesModelID;
-(HMDCameraProfileSettingsModel *)defaultSettingsModel;
-(void)_updateSettingsWithDerivedProperties:(id)arg1 ;
-(id)_settingsModelForUpdate;
-(/*^block*/id)_localZoneUpdateCompletionForMessage:(id)arg1 ;
-(BOOL)_shouldQueryCanEnableRecordingForAccessMode:(unsigned long long)arg1 currentSettings:(id)arg2 ;
-(BOOL)_shouldQueryCanDisableRecordingForAccessMode:(unsigned long long)arg1 isAtHome:(BOOL)arg2 currentSettings:(id)arg3 ;
-(void)_evaluateHomePresence;
-(void)setSafeModeTimer:(HMFTimer *)arg1 ;
-(void)_startSafeModeTimer;
-(void)_updateCurrentAccessModeForSettings:(id)arg1 userInitiated:(BOOL)arg2 withDescription:(id)arg3 ;
-(HMDCameraProfileSettingsDerivedPropertiesModel *)derivedPropertiesModel;
-(void)_populateCurrentAccessModeFieldForDerivedProperties:(id)arg1 currentSettings:(id)arg2 userInitiated:(BOOL)arg3 didUpdateField:(BOOL*)arg4 ;
-(void)_handleAccessoryDidBecomeReachable;
-(void)_updateClientsOfChangedSettings:(id)arg1 ;
-(void)_synchronizeAllSettingsToCamera;
-(id)_payloadForSettings:(id)arg1 ;
-(void)_addAccessModeCharacteristicWriteRequestsToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2 ;
-(void)_addHomeKitCameraActiveCharacteristicWriteRequestToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2 ;
-(void)_addNightVisionCharacteristicWriteRequestToArray:(id)arg1 nightVisionEnabled:(BOOL)arg2 ;
-(void)_addSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg1 snapshotsAllowed:(BOOL)arg2 ;
-(void)_addOperatingModeIndicatorCharacteristicWriteRequestToArray:(id)arg1 accessModeIndicatorEnabled:(BOOL)arg2 ;
-(void)_addPeriodicSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg1 periodicSnapshotsAllowed:(BOOL)arg2 ;
-(void)_addRecordingAudioEnabledWriteRequestToArray:(id)arg1 recordingAudioEnabled:(BOOL)arg2 ;
-(void)_handleCharacteristicWriteRequests:(id)arg1 ;
-(void)_addWriteRequestToArray:(id)arg1 forCharacteristicWithType:(id)arg2 ofServiceWithType:(id)arg3 value:(id)arg4 ;
-(HMFTimer *)safeModeTimer;
-(id)timerFactory;
-(void)_handleModelUpdate:(id)arg1 previousModel:(id)arg2 ;
-(void)_handleUpdatedSettings:(id)arg1 previousSettings:(id)arg2 ;
-(void)_handleUpdatedDerivedProperties:(id)arg1 previousProperties:(id)arg2 ;
-(HMDBulletinBoard *)bulletinBoard;
-(void)_populateNotificationFieldForSettings:(id)arg1 didUpdateField:(BOOL*)arg2 ;
-(void)configureWithMessageDispatcher:(id)arg1 adminMessageDispatcher:(id)arg2 deviceIsResidentCapable:(BOOL)arg3 ;
-(void)disableRecordingAccessModes;
-(void)localZone:(id)arg1 processingDidComplete:(id)arg2 mirrorOutputFuture:(id)arg3 actions:(id)arg4 ;
-(void)setTimerFactory:(id)arg1 ;
@end

