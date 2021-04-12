/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBLocalZoneModelObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareParticipantsManagerDataSource.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDelegate.h>

@protocol HMDCameraClipManagerDelegate, OS_dispatch_queue;
@class HMBLocalZone, NSObject, HMDDatabaseZoneManager, HMDCameraClipsQuotaManager, HMFMessageDispatcher, NSHashTable, HMBCloudZone, HMFTimer, NSString, NSUUID;

@interface HMDCameraClipManager : HMFObject <HMBLocalZoneModelObserver, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDDatabaseZoneManagerDelegate> {

	BOOL _hasWriteAccess;
	id<HMDCameraClipManagerDelegate> _delegate;
	HMBLocalZone* _localZone;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDDatabaseZoneManager* _zoneManager;
	HMDCameraClipsQuotaManager* _quotaManager;
	HMFMessageDispatcher* _messageDispatcher;
	NSHashTable* _subscribedClientConnections;
	HMBCloudZone* _cloudZone;
	HMFTimer* _cloudZoneFetchTimer;
	unsigned long long _fetchClipsBatchLimit;
	/*^block*/id _cloudFetchTimerFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDDatabaseZoneManager * zoneManager;                                    //@synthesize zoneManager=_zoneManager - In the implementation block
@property (readonly) HMDCameraClipsQuotaManager * quotaManager;                               //@synthesize quotaManager=_quotaManager - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSHashTable * subscribedClientConnections;                               //@synthesize subscribedClientConnections=_subscribedClientConnections - In the implementation block
@property (retain) HMBLocalZone * localZone;                                                  //@synthesize localZone=_localZone - In the implementation block
@property (retain) HMBCloudZone * cloudZone;                                                  //@synthesize cloudZone=_cloudZone - In the implementation block
@property (retain) HMFTimer * cloudZoneFetchTimer;                                            //@synthesize cloudZoneFetchTimer=_cloudZoneFetchTimer - In the implementation block
@property (assign) unsigned long long fetchClipsBatchLimit;                                   //@synthesize fetchClipsBatchLimit=_fetchClipsBatchLimit - In the implementation block
@property (copy) id cloudFetchTimerFactory;                                                   //@synthesize cloudFetchTimerFactory=_cloudFetchTimerFactory - In the implementation block
@property (__weak) id<HMDCameraClipManagerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasWriteAccess;                                             //@synthesize hasWriteAccess=_hasWriteAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(double)maximumClipDuration;
-(id<HMDCameraClipManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraClipManagerDelegate>)arg1 ;
-(id)remove;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDDatabaseZoneManager *)zoneManager;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)initWithCameraProfile:(id)arg1 ;
-(HMBLocalZone *)localZone;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelCreation:(id)arg2 ;
-(id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2 ;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(BOOL)hasWriteAccess;
-(void)configureWithHome:(id)arg1 ;
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(BOOL)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2 ;
-(BOOL)areShareModificationsEnabledForManager:(id)arg1 ;
-(void)zoneManagerDidStart:(id)arg1 ;
-(void)zoneManagerDidStop:(id)arg1 ;
-(void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2 ;
-(id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 messageDispatcher:(id)arg3 workQueue:(id)arg4 ;
-(void)handleFetchPosterFramesAssetContextMessage:(id)arg1 ;
-(void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1 ;
-(void)handleSubscribeMessage:(id)arg1 ;
-(void)handleUnsubscribeMessage:(id)arg1 ;
-(void)handleFetchClipMessage:(id)arg1 ;
-(void)handleFetchClipsMessage:(id)arg1 ;
-(void)handleFetchClipForSignificantEventMessage:(id)arg1 ;
-(void)handleFetchCountOfClipsMessage:(id)arg1 ;
-(void)handleDeleteClipMessage:(id)arg1 ;
-(void)handleDeleteAllClipsMessage:(id)arg1 ;
-(void)handleImportClipsMessage:(id)arg1 ;
-(void)handleUserPrivilegeDidChange:(id)arg1 ;
-(void)handleUserCamerasAccessLevelDidChange:(id)arg1 ;
-(void)handleUserRemoteAccessDidChange:(id)arg1 ;
-(HMDCameraClipsQuotaManager *)quotaManager;
-(NSHashTable *)subscribedClientConnections;
-(HMFTimer *)cloudZoneFetchTimer;
-(id)cloudFetchTimerFactory;
-(void)setCloudZoneFetchTimer:(HMFTimer *)arg1 ;
-(void)_performCloudPull;
-(id)_fetchAssetContextForProperty:(id)arg1 forClipModel:(id)arg2 ;
-(id)_significantEventModelsForClipModel:(id)arg1 ;
-(void)_postNotificationForSignificantEventNotificationModel:(id)arg1 clipModel:(id)arg2 ;
-(void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2 ;
-(void)_handleChangedClipModel:(id)arg1 wasCreated:(BOOL)arg2 ;
-(void)_postNotificationForSignificantEventNotificationModel:(id)arg1 clipModel:(id)arg2 heroFrameURL:(id)arg3 ;
-(void)handleClientConnectionDidActivate:(id)arg1 ;
-(void)handleClientConnectionDidDeactivate:(id)arg1 ;
-(void)_updateCloudFetchTimer;
-(unsigned long long)fetchClipsBatchLimit;
-(void)_notifyTransport:(id)arg1 ofFetchedClips:(id)arg2 forFetchUUID:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(BOOL)_fetchClipsAfterDate:(id)arg1 beforeDate:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2 ;
-(void)_handleNewSignificantEventNotificationModel:(id)arg1 ;
-(void)_cleanUpClipsLeftInProgress;
-(void)setHasWriteAccess:(BOOL)arg1 ;
-(id)significantEventsWithUUIDs:(id)arg1 ;
-(id)heroFrameURLForSignificantEventWithUUID:(id)arg1 ;
-(id)enableCloudStorage;
-(id)disableCloudStorage;
-(void)setFetchClipsBatchLimit:(unsigned long long)arg1 ;
-(void)setCloudFetchTimerFactory:(id)arg1 ;
@end

