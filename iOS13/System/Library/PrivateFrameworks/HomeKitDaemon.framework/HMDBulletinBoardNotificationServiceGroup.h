/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class NSSet, NSHashTable, HMDBulletinBoardNotification, NSUUID, NSArray, NSObject, HMFMessageDispatcher, NSString;

@interface HMDBulletinBoardNotificationServiceGroup : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {

	NSSet* _cameraProfileUUIDs;
	NSSet* _associatedServiceUUIDs;
	NSHashTable* _cameraProfilesTable;
	NSHashTable* _associatedServicesTable;
	HMDBulletinBoardNotification* _bulletinBoardNotification;
	NSUUID* _targetUUID;
	NSArray* _associatedServices;
	NSArray* _cameraProfiles;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                         //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                                     //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                           //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * targetUUID;                                                     //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * cameraProfilesTable;                                       //@synthesize cameraProfilesTable=_cameraProfilesTable - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * associatedServicesTable;                                   //@synthesize associatedServicesTable=_associatedServicesTable - In the implementation block
@property (nonatomic,retain) NSSet * cameraProfileUUIDs;                                                     //@synthesize cameraProfileUUIDs=_cameraProfileUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * associatedServiceUUIDs;                                                 //@synthesize associatedServiceUUIDs=_associatedServiceUUIDs - In the implementation block
@property (nonatomic,__weak,readonly) HMDBulletinBoardNotification * bulletinBoardNotification;              //@synthesize bulletinBoardNotification=_bulletinBoardNotification - In the implementation block
@property (nonatomic,retain) NSArray * associatedServices;                                                   //@synthesize associatedServices=_associatedServices - In the implementation block
@property (nonatomic,retain) NSArray * cameraProfiles;                                                       //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_sendNotification:(id)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)dumpState;
-(void)_registerNotificationHandlers;
-(void)setCameraProfileUUIDs:(NSSet *)arg1 ;
-(void)setAssociatedServiceUUIDs:(NSSet *)arg1 ;
-(HMDBulletinBoardNotification *)bulletinBoardNotification;
-(NSArray *)cameraProfiles;
-(NSSet *)cameraProfileUUIDs;
-(NSSet *)associatedServiceUUIDs;
-(void)setCameraProfiles:(NSArray *)arg1 ;
-(NSArray *)associatedServices;
-(void)setAssociatedServices:(NSArray *)arg1 ;
-(NSUUID *)targetUUID;
-(id)initWithBulletinBoardNotification:(id)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_handleBulletinBoardNotificationServiceGroupRequest:(id)arg1 ;
-(id)_prepareServiceGroupPayload;
-(void)_configureServices;
-(BOOL)_isNotificationGeneratingService:(id)arg1 ;
-(BOOL)_isDefaultRoom:(id)arg1 ofHome:(id)arg2 ;
-(id)_accessoriesInRoom:(id)arg1 ofHome:(id)arg2 ;
-(id)_cameraNotificationGeneratingServicesForAccessory:(id)arg1 ;
-(BOOL)_isSupportedAssociationService:(id)arg1 ;
-(BOOL)_isAlarmService:(id)arg1 ;
-(void)_updateAssociatedServices:(id)arg1 associatedCameras:(id)arg2 ;
-(void)_updateAssociatedServicesTable:(id)arg1 ;
-(NSHashTable *)associatedServicesTable;
-(void)setCameraProfilesTable:(NSHashTable *)arg1 ;
-(NSHashTable *)cameraProfilesTable;
-(void)setAssociatedServicesTable:(NSHashTable *)arg1 ;
-(id)_cameraProfileWithID:(id)arg1 ;
-(void)configureMsgDispatcher:(id)arg1 ;
-(void)configureBulletinNotification;
-(id)actionContextForCameraProfileID:(id)arg1 ;
@end

