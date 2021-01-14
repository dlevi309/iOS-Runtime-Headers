/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)setContactsManager:(ASContactsManager *)arg1 ;
-(ASContactsManager *)contactsManager;
-(ASActivityDataBulletinManager *)activityDataBulletinManager;
-(id)init;
-(void)beginObserving;
-(void)setCloudKitManager:(ASCloudKitManager *)arg1 ;
-(ASFriendListManager *)friendListManager;
-(void)endObserving;
-(ASPeriodicUpdateManager *)periodicUpdateManager;
-(ASActivityDataManager *)activityDataManager;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(ASCloudKitManager *)cloudKitManager;
-(void)dealloc;
-(void)setActivityDataManager:(ASActivityDataManager *)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(BOOL)isReadyToProcessChanges;
-(void)cloudKitManager:(id)arg1 didBeginUpdatesForFetchWithType:(long long)arg2 ;
-(void)cloudKitManager:(id)arg1 didEndUpdatesForFetchWithType:(long long)arg2 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewActivitySnapshots:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewFriendWorkouts:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewFriendAchievements:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(void)cloudKitManager:(id)arg1 didRecieveNewNotificationEvents:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(void)_queue_showFriendNotificationsIfRequired;
-(void)_notifyAboutWorkoutsDetectionIfRequired:(id)arg1 ;
-(id)_nanoUserDefaultsDomainWithProfile:(id)arg1 ;
-(id)_nanoUserDefaultsDomainKeyForFriendWithUUID:(id)arg1 keyTypeString:(id)arg2 ;
-(id)_localUserDefaultsDomainWithProfile:(id)arg1 ;
-(id)_queue_selectWorkoutNotifications;
-(id)_queue_selectAchievementNotifications;
-(id)_queue_selectGoalCompletionNotifications;
-(NSNumber *)workoutAnchor;
-(id)_mostRecentWorkoutCompletionDateForFriendWithUUID:(id)arg1 ;
-(void)_setMostRecentWorkoutCompletionDate:(id)arg1 forFriendWithUUID:(id)arg2 ;
-(void)setWorkoutAnchor:(NSNumber *)arg1 ;
-(NSNumber *)achievementAnchor;
-(id)_mostRecentMonthlyAchievementEarnedDateForFriendWithUUID:(id)arg1 ;
-(id)_mostRecentAchievementEarnedDateForFriendWithUUID:(id)arg1 ;
-(void)_setMostRecentAchievementEarnedDate:(id)arg1 forFriendWithUUID:(id)arg2 ;
-(void)_setMostRecentMonthlyAchievementEarnedDate:(id)arg1 forFriendWithUUID:(id)arg2 ;
-(void)setAchievementAnchor:(NSNumber *)arg1 ;
-(NSNumber *)goalCompletionAnchor;
-(id)_mostRecentGoalCompletedSnapshotIndexForFriendWithUUID:(id)arg1 ;
-(void)_setMostRecentGoalCompletedSnapshotIndex:(id)arg1 forFriendWithUUID:(id)arg2 ;
-(void)setGoalCompletionAnchor:(NSNumber *)arg1 ;
-(ASActivityDataNotificationRulesEngine *)notificationRulesEngine;
-(void)setNotificationRulesEngine:(ASActivityDataNotificationRulesEngine *)arg1 ;
-(void)setFriendListManager:(ASFriendListManager *)arg1 ;
-(void)setActivityDataBulletinManager:(ASActivityDataBulletinManager *)arg1 ;
-(void)setPeriodicUpdateManager:(ASPeriodicUpdateManager *)arg1 ;
@end

