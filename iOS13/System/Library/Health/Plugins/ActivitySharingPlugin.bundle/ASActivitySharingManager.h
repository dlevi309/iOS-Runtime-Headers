/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDNanoSyncManagerObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_group, ASBulletinPostingManager;
@class NSObject, HDProfile, ASAchievementManager, ASActivityDataManager, ASActivityDataNotificationManager, ASActivityDataBulletinManager, ASCloudKitManager, ASCompetitionManager, ASCompetitionBulletinManager, ASContactsManager, ASFakeBulletinManager, ASFakingManager, ASFriendInviteBulletinManager, ASFriendListManager, ASGatewayManager, ASPeriodicUpdateManager, ASRelationshipManager, ASSetupManager, HDKeyValueDomain, NSString;

@interface ASActivitySharingManager : NSObject <HDHealthDaemonReadyObserver, HDNanoSyncManagerObserver> {

	NSObject*<OS_dispatch_queue> _readWriteQueue;
	NSObject*<OS_dispatch_queue> _submanagerBarrierQueue;
	NSObject*<OS_dispatch_group> _submanagerBarrierGroup;
	BOOL _submanagerInitializationComplete;
	BOOL _submanagerProcessingStarted;
	BOOL _isActivityAppVisible;
	int _pairingStatusChangedToken;
	BOOL _isWatch;
	HDProfile* _profile;
	ASAchievementManager* _achievementManager;
	ASActivityDataManager* _activityDataManager;
	ASActivityDataNotificationManager* _activityDataNotificationManager;
	ASActivityDataBulletinManager* _activityDataBulletinManager;
	ASCloudKitManager* _cloudKitManager;
	ASCompetitionManager* _competitionManager;
	ASCompetitionBulletinManager* _competitionBulletinManager;
	ASContactsManager* _contactsManager;
	ASFakeBulletinManager* _fakeBulletinManager;
	ASFakingManager* _fakingManager;
	ASFriendInviteBulletinManager* _friendInviteBulletinManager;
	ASFriendListManager* _friendListManager;
	ASGatewayManager* _gatewayManager;
	ASPeriodicUpdateManager* _periodicUpdateManager;
	ASRelationshipManager* _relationshipManager;
	id<ASBulletinPostingManager> _bulletinPostingManager;
	ASSetupManager* _setupManager;
	HDKeyValueDomain* _deviceLocalActivitySharingKeyValueDomain;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;                                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) BOOL isWatch;                                                                     //@synthesize isWatch=_isWatch - In the implementation block
@property (nonatomic,readonly) ASAchievementManager * achievementManager;                                        //@synthesize achievementManager=_achievementManager - In the implementation block
@property (nonatomic,readonly) ASActivityDataManager * activityDataManager;                                      //@synthesize activityDataManager=_activityDataManager - In the implementation block
@property (nonatomic,readonly) ASActivityDataNotificationManager * activityDataNotificationManager;              //@synthesize activityDataNotificationManager=_activityDataNotificationManager - In the implementation block
@property (nonatomic,readonly) ASActivityDataBulletinManager * activityDataBulletinManager;                      //@synthesize activityDataBulletinManager=_activityDataBulletinManager - In the implementation block
@property (nonatomic,readonly) ASCloudKitManager * cloudKitManager;                                              //@synthesize cloudKitManager=_cloudKitManager - In the implementation block
@property (nonatomic,readonly) ASCompetitionManager * competitionManager;                                        //@synthesize competitionManager=_competitionManager - In the implementation block
@property (nonatomic,readonly) ASCompetitionBulletinManager * competitionBulletinManager;                        //@synthesize competitionBulletinManager=_competitionBulletinManager - In the implementation block
@property (nonatomic,readonly) ASContactsManager * contactsManager;                                              //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,readonly) ASFakeBulletinManager * fakeBulletinManager;                                      //@synthesize fakeBulletinManager=_fakeBulletinManager - In the implementation block
@property (nonatomic,readonly) ASFakingManager * fakingManager;                                                  //@synthesize fakingManager=_fakingManager - In the implementation block
@property (nonatomic,readonly) ASFriendInviteBulletinManager * friendInviteBulletinManager;                      //@synthesize friendInviteBulletinManager=_friendInviteBulletinManager - In the implementation block
@property (nonatomic,readonly) ASFriendListManager * friendListManager;                                          //@synthesize friendListManager=_friendListManager - In the implementation block
@property (nonatomic,readonly) ASGatewayManager * gatewayManager;                                                //@synthesize gatewayManager=_gatewayManager - In the implementation block
@property (nonatomic,readonly) ASPeriodicUpdateManager * periodicUpdateManager;                                  //@synthesize periodicUpdateManager=_periodicUpdateManager - In the implementation block
@property (nonatomic,readonly) ASRelationshipManager * relationshipManager;                                      //@synthesize relationshipManager=_relationshipManager - In the implementation block
@property (nonatomic,readonly) id<ASBulletinPostingManager> bulletinPostingManager;                              //@synthesize bulletinPostingManager=_bulletinPostingManager - In the implementation block
@property (nonatomic,readonly) ASSetupManager * setupManager;                                                    //@synthesize setupManager=_setupManager - In the implementation block
@property (nonatomic,readonly) HDKeyValueDomain * deviceLocalActivitySharingKeyValueDomain;                      //@synthesize deviceLocalActivitySharingKeyValueDomain=_deviceLocalActivitySharingKeyValueDomain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(HDProfile *)profile;
-(BOOL)isWatch;
-(ASContactsManager *)contactsManager;
-(void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pushActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)pushFakeActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAllDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)cloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)clearFriendListWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)expireChangeTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)_applicationsInstalled:(id)arg1 ;
-(void)_applicationsUninstalled:(id)arg1 ;
-(void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2 ;
-(ASCloudKitManager *)cloudKitManager;
-(id)allFriends;
-(id)initWithProfile:(id)arg1 isWatch:(BOOL)arg2 ;
-(ASActivityDataManager *)activityDataManager;
-(ASCompetitionManager *)competitionManager;
-(ASAchievementManager *)achievementManager;
-(ASFriendListManager *)friendListManager;
-(ASGatewayManager *)gatewayManager;
-(ASFriendInviteBulletinManager *)friendInviteBulletinManager;
-(id<ASBulletinPostingManager>)bulletinPostingManager;
-(ASActivityDataBulletinManager *)activityDataBulletinManager;
-(ASCompetitionBulletinManager *)competitionBulletinManager;
-(ASFakingManager *)fakingManager;
-(ASPeriodicUpdateManager *)periodicUpdateManager;
-(HDKeyValueDomain *)deviceLocalActivitySharingKeyValueDomain;
-(ASRelationshipManager *)relationshipManager;
-(void)_mainQueue_completeSetupIfNeeded;
-(void)_mainQueue_nanoRegistryInfoChanged;
-(BOOL)_mainQueue_shouldCompleteSetup;
-(void)_mainQueue_notifySubmanagersOfManagerReady;
-(BOOL)_mainQueue_startSubmanagerProcessingIfNeeded;
-(ASFakeBulletinManager *)fakeBulletinManager;
-(ASSetupManager *)setupManager;
-(ASActivityDataNotificationManager *)activityDataNotificationManager;
-(BOOL)_mainQueue_stopSubmanagerProcessingIfNeeded;
-(void)_waitUntilSubmanagersReady;
-(void)fetchFriendWithRemoteUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addFriendListObserver:(id)arg1 ;
-(void)removeFriendListObserver:(id)arg1 ;
@end

