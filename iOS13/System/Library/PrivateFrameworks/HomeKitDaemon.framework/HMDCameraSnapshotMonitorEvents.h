/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFMessageDispatcher, NSUUID, HMDCameraSnapshotManager, NSMutableSet, HMDHAPAccessory, NSString, HMDBulletinBoard, HMDNotificationRegistration, NSSet, HMDCameraNotificationCharacteristicsAvailabilityListener, HMDCameraProfileSettingsModel;

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate, HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uniqueIdentifier;
	HMDCameraSnapshotManager* _snapshotManager;
	NSMutableSet* _snapShotNotificationResponseTimers;
	HMDHAPAccessory* _accessory;
	NSString* _bulletinImagesDirectory;
	NSString* _logID;
	HMDBulletinBoard* _bulletinBoard;
	HMDNotificationRegistration* _notificationRegistration;
	NSSet* _bulletinSnapshotCharacteristics;
	NSSet* _proactiveSnapshotCharacterisitics;
	HMDCameraNotificationCharacteristicsAvailabilityListener* _characteristicsAvailabilityListener;
	NSString* _clientIdentifier;

}

@property (readonly) HMDCameraProfileSettingsModel * currentCameraSettings; 
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                                                                //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) HMFMessageDispatcher * msgDispatcher;                                                                      //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (readonly) NSUUID * uniqueIdentifier;                                                                                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (__weak,readonly) HMDCameraSnapshotManager * snapshotManager;                                                         //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (retain) NSMutableSet * snapShotNotificationResponseTimers;                                                           //@synthesize snapShotNotificationResponseTimers=_snapShotNotificationResponseTimers - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                                                        //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSString * bulletinImagesDirectory;                                                                        //@synthesize bulletinImagesDirectory=_bulletinImagesDirectory - In the implementation block
@property (readonly) NSString * logID;                                                                                          //@synthesize logID=_logID - In the implementation block
@property (readonly) HMDBulletinBoard * bulletinBoard;                                                                          //@synthesize bulletinBoard=_bulletinBoard - In the implementation block
@property (readonly) HMDNotificationRegistration * notificationRegistration;                                                    //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (retain) NSSet * bulletinSnapshotCharacteristics;                                                                     //@synthesize bulletinSnapshotCharacteristics=_bulletinSnapshotCharacteristics - In the implementation block
@property (retain) NSSet * proactiveSnapshotCharacterisitics;                                                                   //@synthesize proactiveSnapshotCharacterisitics=_proactiveSnapshotCharacterisitics - In the implementation block
@property (retain) HMDCameraNotificationCharacteristicsAvailabilityListener * characteristicsAvailabilityListener;              //@synthesize characteristicsAvailabilityListener=_characteristicsAvailabilityListener - In the implementation block
@property (copy,readonly) NSString * clientIdentifier;                                                                          //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)isDoorbellServiceInputCharacteristic:(id)arg1 ;
+(BOOL)isMotionServiceDetectedCharacteristic:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)clientIdentifier;
-(HMDHAPAccessory *)accessory;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSString *)logID;
-(void)registerForMessages;
-(HMFMessageDispatcher *)msgDispatcher;
-(HMDNotificationRegistration *)notificationRegistration;
-(HMDBulletinBoard *)bulletinBoard;
-(HMDCameraNotificationCharacteristicsAvailabilityListener *)characteristicsAvailabilityListener;
-(void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(void)handleRemoteNotificationGenerated:(id)arg1 ;
-(void)handleCameraSettingsDidUpdateNotification:(id)arg1 ;
-(HMDCameraProfileSettingsModel *)currentCameraSettings;
-(void)_enableNotificationsForCharacteristics:(id)arg1 cameraSettings:(id)arg2 ;
-(void)handleBulletinNotificationEnableStateDidChange:(id)arg1 ;
-(BOOL)_canEnableNotificationForCharacteristic:(id)arg1 cameraSettings:(id)arg2 ;
-(NSSet *)proactiveSnapshotCharacterisitics;
-(NSSet *)bulletinSnapshotCharacteristics;
-(void)_handleUpdatedBulletinSnapshotCharacteristics:(id)arg1 ;
-(void)_handleUpdatedProactiveSnapshotCharacteristics:(id)arg1 ;
-(void)_handleHomedRelaunchRegistration:(id)arg1 updatedCharacteristics:(id)arg2 ;
-(void)_handleBulletinNotificationEnableStateDidChange:(id)arg1 ;
-(void)setBulletinSnapshotCharacteristics:(NSSet *)arg1 ;
-(void)setProactiveSnapshotCharacterisitics:(NSSet *)arg1 ;
-(void)_characteristicsUpdated:(id)arg1 modifiedCharacteristics:(id)arg2 ;
-(HMDCameraSnapshotManager *)snapshotManager;
-(void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5 ;
-(NSMutableSet *)snapShotNotificationResponseTimers;
-(NSString *)bulletinImagesDirectory;
-(void)_sendReleaseSnapshot:(id)arg1 ;
-(void)_removeBulletins:(id)arg1 sessionID:(id)arg2 ;
-(void)processPostedBulletin:(id)arg1 responseTimer:(id)arg2 ;
-(void)_handleRemoteNotification:(id)arg1 ;
-(void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2 ;
-(id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 ;
-(void)setSnapShotNotificationResponseTimers:(NSMutableSet *)arg1 ;
-(void)setCharacteristicsAvailabilityListener:(HMDCameraNotificationCharacteristicsAvailabilityListener *)arg1 ;
@end

