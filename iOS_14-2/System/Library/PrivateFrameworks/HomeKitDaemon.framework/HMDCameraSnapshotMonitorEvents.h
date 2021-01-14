/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDCharacteristicsAvailabilityListenerDelegate.h>

@protocol OS_dispatch_queue, HMDCameraBulletinBoard;
@class NSObject, HMFMessageDispatcher, NSUUID, HMDCameraSnapshotManager, NSMutableSet, HMDHAPAccessory, NSString, HMDNotificationRegistration, NSSet, HMDCharacteristicsAvailabilityListener, _HMCameraUserSettings;

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate, HMDCharacteristicsAvailabilityListenerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uniqueIdentifier;
	HMDCameraSnapshotManager* _snapshotManager;
	NSMutableSet* _snapShotNotificationResponseTimers;
	HMDHAPAccessory* _accessory;
	NSString* _bulletinImagesDirectory;
	NSString* _logID;
	id<HMDCameraBulletinBoard> _bulletinBoard;
	HMDNotificationRegistration* _notificationRegistration;
	NSSet* _bulletinSnapshotCharacteristics;
	NSSet* _proactiveSnapshotCharacterisitics;
	HMDCharacteristicsAvailabilityListener* _characteristicsAvailabilityListener;
	NSString* _clientIdentifier;

}

@property (copy,readonly) _HMCameraUserSettings * currentCameraSettings; 
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMFMessageDispatcher * msgDispatcher;                                                    //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (readonly) NSUUID * uniqueIdentifier;                                                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (__weak,readonly) HMDCameraSnapshotManager * snapshotManager;                                       //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (retain) NSMutableSet * snapShotNotificationResponseTimers;                                         //@synthesize snapShotNotificationResponseTimers=_snapShotNotificationResponseTimers - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                                      //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSString * bulletinImagesDirectory;                                                      //@synthesize bulletinImagesDirectory=_bulletinImagesDirectory - In the implementation block
@property (readonly) NSString * logID;                                                                        //@synthesize logID=_logID - In the implementation block
@property (readonly) id<HMDCameraBulletinBoard> bulletinBoard;                                                //@synthesize bulletinBoard=_bulletinBoard - In the implementation block
@property (readonly) HMDNotificationRegistration * notificationRegistration;                                  //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (retain) NSSet * bulletinSnapshotCharacteristics;                                                   //@synthesize bulletinSnapshotCharacteristics=_bulletinSnapshotCharacteristics - In the implementation block
@property (retain) NSSet * proactiveSnapshotCharacterisitics;                                                 //@synthesize proactiveSnapshotCharacterisitics=_proactiveSnapshotCharacterisitics - In the implementation block
@property (retain) HMDCharacteristicsAvailabilityListener * characteristicsAvailabilityListener;              //@synthesize characteristicsAvailabilityListener=_characteristicsAvailabilityListener - In the implementation block
@property (copy,readonly) NSString * clientIdentifier;                                                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(BOOL)isDoorbellServiceInputCharacteristic:(id)arg1 ;
+(BOOL)isMotionServiceDetectedCharacteristic:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)logID;
-(HMFMessageDispatcher *)msgDispatcher;
-(HMDCameraSnapshotManager *)snapshotManager;
-(NSUUID *)uniqueIdentifier;
-(HMDHAPAccessory *)accessory;
-(id)logIdentifier;
-(void)registerForMessages;
-(NSString *)clientIdentifier;
-(void)dealloc;
-(void)handleCharacteristicsChangedNotification:(id)arg1 ;
-(void)__handleCharacteristicsChangedPayload:(id)arg1 ;
-(id<HMDCameraBulletinBoard>)bulletinBoard;
-(void)handleBulletinNotificationEnableStateDidChange:(id)arg1 ;
-(HMDCharacteristicsAvailabilityListener *)characteristicsAvailabilityListener;
-(void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)handleRemoteNotificationGenerated:(id)arg1 ;
-(void)handleCameraSettingsDidUpdateNotification:(id)arg1 ;
-(_HMCameraUserSettings *)currentCameraSettings;
-(void)_enableNotificationsForCharacteristics:(id)arg1 cameraSettings:(id)arg2 ;
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
-(void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5 ;
-(NSMutableSet *)snapShotNotificationResponseTimers;
-(void)_insertUpdateOrRemoveBulletins:(id)arg1 forChangedCharacteristics:(id)arg2 snapshotData:(id)arg3 ;
-(NSString *)bulletinImagesDirectory;
-(void)_sendReleaseSnapshot:(id)arg1 ;
-(void)processPostedBulletin:(id)arg1 responseTimer:(id)arg2 ;
-(void)_removeBulletins:(id)arg1 sessionID:(id)arg2 ;
-(void)_handleRemoteNotification:(id)arg1 ;
-(id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 ;
-(void)setSnapShotNotificationResponseTimers:(NSMutableSet *)arg1 ;
-(void)setCharacteristicsAvailabilityListener:(HMDCharacteristicsAvailabilityListener *)arg1 ;
@end

