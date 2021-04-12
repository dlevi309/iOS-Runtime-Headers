/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)daemonReady:(id)arg1 ;
-(ASContactsManager *)contactsManager;
-(void)sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ASSetupManager *)setupManager;
-(BOOL)_mainQueue_shouldCompleteSetup;
-(ASFakeBulletinManager *)fakeBulletinManager;
-(void)handleNotificationResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deactivateActivitySharingManager;
-(ASActivityDataBulletinManager *)activityDataBulletinManager;
-(BOOL)_mainQueue_stopSubmanagerProcessingIfNeeded;
-(BOOL)_mainQueue_startSubmanagerProcessingIfNeeded;
-(ASCompetitionBulletinManager *)competitionBulletinManager;
-(ASRelationshipManager *)relationshipManager;
-(ASAchievementManager *)achievementManager;
-(void)clearFriendListWithCompletion:(/*^block*/id)arg1 ;
-(void)removeFriendListObserver:(id)arg1 ;
-(void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2 ;
-(void)_activateActivitySharingManager;
-(id)initWithProfile:(id)arg1 isWatch:(BOOL)arg2 ;
-(void)queryAppBadgeCountWithCompletion:(/*^block*/id)arg1 ;
-(void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDKeyValueDomain *)deviceLocalActivitySharingKeyValueDomain;
-(void)_waitUntilSubmanagersReady;
-(ASFriendListManager *)friendListManager;
-(void)fetchAllDataWithCompletion:(/*^block*/id)arg1 ;
-(void)setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)allFriends;
-(void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HDProfile *)profile;
-(void)fetchFriendWithRemoteUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)expireChangeTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pushFakeActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)_mainQueue_nanoRegistryInfoChanged;
-(BOOL)isWatch;
-(ASCompetitionManager *)competitionManager;
-(void)sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleFitnessAppsAllowed:(id)arg1 ;
-(void)acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ASActivityDataNotificationManager *)activityDataNotificationManager;
-(ASPeriodicUpdateManager *)periodicUpdateManager;
-(void)fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(ASFakingManager *)fakingManager;
-(void)_handleFitnessAppsRestricted:(id)arg1 ;
-(ASGatewayManager *)gatewayManager;
-(void)_mainQueue_notifySubmanagersOfManagerReady;
-(void)ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pushActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)_applicationsUninstalled:(id)arg1 ;
-(ASActivityDataManager *)activityDataManager;
-(void)_applicationsInstalled:(id)arg1 ;
-(void)cloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_mainQueue_completeSetupIfNeeded;
-(void)addFriendListObserver:(id)arg1 ;
-(ASCloudKitManager *)cloudKitManager;
-(void)dealloc;
-(id<ASBulletinPostingManager>)bulletinPostingManager;
-(ASFriendInviteBulletinManager *)friendInviteBulletinManager;
@end

