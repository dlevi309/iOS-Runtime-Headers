/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/ASCloudKitManagerChangesObserver.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HDProfile, HDDataManager, ACHAchievementStore, ASActivityDataNotificationRulesEngine, ASCloudKitManager, ASActivityDataManager, ASContactsManager, ASFriendListManager, ASActivityDataBulletinManager, ASPeriodicUpdateManager, NSNumber, NSString;

@interface ASActivityDataNotificationManager : NSObject <HDDataObserver, ASCloudKitManagerChangesObserver, ASActivitySharingManagerReadyObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HDProfile* _profile;
	HDDataManager* _dataManager;
	ACHAchievementStore* _achievementStore;
	BOOL _receivedChangesFromCloudKit;
	BOOL _isCloudKitManagerProcessingData;
	ASActivityDataNotificationRulesEngine* _notificationRulesEngine;
	ASCloudKitManager* _cloudKitManager;
	ASActivityDataManager* _activityDataManager;
	ASContactsManager* _contactsManager;
	ASFriendListManager* _friendListManager;
	ASActivityDataBulletinManager* _activityDataBulletinManager;
	ASPeriodicUpdateManager* _periodicUpdateManager;

}

@property (nonatomic,retain) ASActivityDataNotificationRulesEngine * notificationRulesEngine;                 //@synthesize notificationRulesEngine=_notificationRulesEngine - In the implementation block
@property (nonatomic,retain) NSNumber * workoutAnchor; 
@property (nonatomic,retain) NSNumber * achievementAnchor; 
@property (nonatomic,retain) NSNumber * goalCompletionAnchor; 
@property (assign,nonatomic,__weak) ASCloudKitManager * cloudKitManager;                                      //@synthesize cloudKitManager=_cloudKitManager - In the implementation block
@property (assign,nonatomic,__weak) ASActivityDataManager * activityDataManager;                              //@synthesize activityDataManager=_activityDataManager - In the implementation block
@property (assign,nonatomic,__weak) ASContactsManager * contactsManager;                                      //@synthesize contactsManager=_contactsManager - In the implementation block
@property (assign,nonatomic,__weak) ASFriendListManager * friendListManager;                                  //@synthesize friendListManager=_friendListManager - In the implementation block
@property (assign,nonatomic,__weak) ASActivityDataBulletinManager * activityDataBulletinManager;              //@synthesize activityDataBulletinManager=_activityDataBulletinManager - In the implementation block
@property (assign,nonatomic,__weak) ASPeriodicUpdateManager * periodicUpdateManager;                          //@synthesize periodicUpdateManager=_periodicUpdateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isReadyToProcessChanges; 
-(id)init;
-(void)dealloc;
-(void)beginObserving;
-(void)endObserving;
-(void)setContactsManager:(ASContactsManager *)arg1 ;
-(ASContactsManager *)contactsManager;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(ASCloudKitManager *)cloudKitManager;
-(void)setCloudKitManager:(ASCloudKitManager *)arg1 ;
-(ASActivityDataManager *)activityDataManager;
-(void)setActivityDataManager:(ASActivityDataManager *)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(ASFriendListManager *)friendListManager;
-(BOOL)isReadyToProcessChanges;
-(void)cloudKitManager:(id)arg1 didBeginUpdatesForFetchWithType:(long long)arg2 ;
-(void)cloudKitManager:(id)arg1 didEndUpdatesForFetchWithType:(long long)arg2 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewActivitySnapshots:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewFriendWorkouts:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewFriendAchievements:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewNotificationEvents:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(ASActivityDataBulletinManager *)activityDataBulletinManager;
-(ASPeriodicUpdateManager *)periodicUpdateManager;
-(void)_queue_showFriendNotificationsIfRequired;
-(void)_notifyAboutWorkoutsDetectionIfRequired:(id)arg1 ;
-(id)_nanoUserDefaultsDomainWithProfile:(id)arg1 ;
-(id)_nanoUserDefaultsDomainKeyForFriendWithUUID:(id)arg1 keyTypeString:(id)arg2 ;
-(id)_localUserDefaultsDomainWithProfile:(id)arg1 ;
-(id)_queue_selectWorkoutNotifications;
-(id)_queue_selectAchievementNotifications;
-(id)_queue_selectGoalCompletionNotifications;
-(NSNumber *)workoutAnchor;
-(void)setWorkoutAnchor:(NSNumber *)arg1 ;
-(id)_mostRecentWorkoutCompletionDateForFriendWithUUID:(id)arg1 ;
-(void)_setMostRecentWorkoutCompletionDate:(id)arg1 forFriendWithUUID:(id)arg2 ;
-(NSNumber *)achievementAnchor;
-(void)setAchievementAnchor:(NSNumber *)arg1 ;
-(id)_mostRecentAchievementEarnedDateForFriendWithUUID:(id)arg1 ;
-(void)_setMostRecentAchievementEarnedDate:(id)arg1 forFriendWithUUID:(id)arg2 ;
-(NSNumber *)goalCompletionAnchor;
-(void)setGoalCompletionAnchor:(NSNumber *)arg1 ;
-(id)_mostRecentGoalCompletedSnapshotIndexForFriendWithUUID:(id)arg1 ;
-(void)_setMostRecentGoalCompletedSnapshotIndex:(id)arg1 forFriendWithUUID:(id)arg2 ;
-(ASActivityDataNotificationRulesEngine *)notificationRulesEngine;
-(void)setNotificationRulesEngine:(ASActivityDataNotificationRulesEngine *)arg1 ;
-(void)setFriendListManager:(ASFriendListManager *)arg1 ;
-(void)setActivityDataBulletinManager:(ASActivityDataBulletinManager *)arg1 ;
-(void)setPeriodicUpdateManager:(ASPeriodicUpdateManager *)arg1 ;
@end

