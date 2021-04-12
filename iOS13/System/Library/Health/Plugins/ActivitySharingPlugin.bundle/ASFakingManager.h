/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@class ACHAchievementStore, HDProfile, ASActivityDataManager, ASCloudKitManager, ASCompetitionManager, ASContactsManager, ASFriend, _HKFitnessFriendWorkout, ACHAchievement, _HKFitnessFriendAchievement, _HKFitnessFriendActivitySnapshot, NSString;

@interface ASFakingManager : NSObject <ASActivitySharingManagerReadyObserver> {

	ACHAchievementStore* _achievementStore;
	HDProfile* _profile;
	ASActivityDataManager* _activityDataManager;
	ASCloudKitManager* _cloudKitManager;
	ASCompetitionManager* _competitionManager;
	ASContactsManager* _contactsManager;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ASActivityDataManager * activityDataManager;                     //@synthesize activityDataManager=_activityDataManager - In the implementation block
@property (assign,nonatomic,__weak) ASCloudKitManager * cloudKitManager;                             //@synthesize cloudKitManager=_cloudKitManager - In the implementation block
@property (assign,nonatomic,__weak) ASCompetitionManager * competitionManager;                       //@synthesize competitionManager=_competitionManager - In the implementation block
@property (assign,nonatomic,__weak) ASContactsManager * contactsManager;                             //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,readonly) ASFriend * fakeFriend; 
@property (nonatomic,readonly) _HKFitnessFriendWorkout * fakeWorkout; 
@property (nonatomic,readonly) ACHAchievement * fakeAchievement; 
@property (nonatomic,readonly) _HKFitnessFriendAchievement * fakeFriendAchievement; 
@property (nonatomic,readonly) _HKFitnessFriendActivitySnapshot * fakeSnapshot; 
@property (nonatomic,readonly) _HKFitnessFriendActivitySnapshot * fakeCompleteSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setContactsManager:(ASContactsManager *)arg1 ;
-(ASContactsManager *)contactsManager;
-(void)pushFakeActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(ASCloudKitManager *)cloudKitManager;
-(void)setCloudKitManager:(ASCloudKitManager *)arg1 ;
-(ASActivityDataManager *)activityDataManager;
-(void)setActivityDataManager:(ASActivityDataManager *)arg1 ;
-(ASCompetitionManager *)competitionManager;
-(void)setCompetitionManager:(ASCompetitionManager *)arg1 ;
-(id)fakeFriendWithCompetitionStatus:(long long)arg1 competition:(id)arg2 ;
-(id)_contactWithFakeCompetitionStatus:(long long)arg1 ;
-(id)_fakeCompetitionHistory;
-(id)_fakeSnapshotWithCompleteRings:(BOOL)arg1 ;
-(_HKFitnessFriendActivitySnapshot *)fakeSnapshot;
-(_HKFitnessFriendAchievement *)fakeFriendAchievement;
-(_HKFitnessFriendWorkout *)fakeWorkout;
-(id)fakeCompetitionWithStartDate:(id)arg1 winningParticipant:(long long)arg2 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(ASFriend *)fakeFriend;
-(ACHAchievement *)fakeAchievement;
-(_HKFitnessFriendActivitySnapshot *)fakeCompleteSnapshot;
@end

