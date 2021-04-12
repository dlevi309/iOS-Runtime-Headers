/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASContactsManagerObserver.h>
#import <libobjc.A.dylib/ASCompetitionManagerObserver.h>
#import <libobjc.A.dylib/CHFitnessAppBadgeCountProvider.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSSet, NSDate, HDProfile, ASActivityDataManager, ASContactsManager, ASRelationshipManager, ASPeriodicUpdateManager, ASCompetitionManager, ASAchievementManager, NSString;

@interface ASFriendListManager : NSObject <ASContactsManagerObserver, ASCompetitionManagerObserver, CHFitnessAppBadgeCountProvider, ASActivitySharingManagerReadyObserver> {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSSet* _friends;
	BOOL _hasFriendsToShareWith;
	BOOL _competitionDataAvailable;
	NSObject*<OS_dispatch_queue> _friendListQueue;
	int _activitySharingHasFriendsChangedToken;
	NSDate* _lastReportedFriendsDate;
	long long _lastReportedNumberOfFriends;
	BOOL _isWatch;
	HDProfile* _profile;
	ASActivityDataManager* _activityDataManager;
	ASContactsManager* _contactsManager;
	ASRelationshipManager* _relationshipManager;
	ASPeriodicUpdateManager* _periodicUpdateManager;
	ASCompetitionManager* _competitionManager;
	ASAchievementManager* _achievementManager;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ASActivityDataManager * activityDataManager;                  //@synthesize activityDataManager=_activityDataManager - In the implementation block
@property (assign,nonatomic,__weak) ASContactsManager * contactsManager;                          //@synthesize contactsManager=_contactsManager - In the implementation block
@property (assign,nonatomic,__weak) ASRelationshipManager * relationshipManager;                  //@synthesize relationshipManager=_relationshipManager - In the implementation block
@property (assign,nonatomic,__weak) ASPeriodicUpdateManager * periodicUpdateManager;              //@synthesize periodicUpdateManager=_periodicUpdateManager - In the implementation block
@property (assign,nonatomic,__weak) ASCompetitionManager * competitionManager;                    //@synthesize competitionManager=_competitionManager - In the implementation block
@property (assign,nonatomic,__weak) ASAchievementManager * achievementManager;                    //@synthesize achievementManager=_achievementManager - In the implementation block
@property (assign,nonatomic) BOOL isWatch;                                                        //@synthesize isWatch=_isWatch - In the implementation block
@property (readonly) BOOL hasFriendsToShareWith; 
@property (nonatomic,copy,readonly) NSSet * friends; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long badgeCount; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(BOOL)isWatch;
-(void)endObserving;
-(void)setContactsManager:(ASContactsManager *)arg1 ;
-(ASContactsManager *)contactsManager;
-(NSSet *)friends;
-(unsigned long long)badgeCount;
-(void)setIsWatch:(BOOL)arg1 ;
-(void)clearFriendListWithCompletion:(/*^block*/id)arg1 ;
-(id)friendWithUUID:(id)arg1 ;
-(ASActivityDataManager *)activityDataManager;
-(void)setActivityDataManager:(ASActivityDataManager *)arg1 ;
-(ASCompetitionManager *)competitionManager;
-(void)setCompetitionManager:(ASCompetitionManager *)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(ASAchievementManager *)achievementManager;
-(ASPeriodicUpdateManager *)periodicUpdateManager;
-(void)setPeriodicUpdateManager:(ASPeriodicUpdateManager *)arg1 ;
-(id)initWithIsWatch:(BOOL)arg1 ;
-(ASRelationshipManager *)relationshipManager;
-(void)setRelationshipManager:(ASRelationshipManager *)arg1 ;
-(void)setAchievementManager:(ASAchievementManager *)arg1 ;
-(void)_handleHasFriendsChanged;
-(void)_queue_updateFriendList;
-(id)_queue_friendWithUUID:(id)arg1 ;
-(id)_allContactsPreferringPlaceholderContacts;
-(void)_queue_friendListDidUpdate;
-(void)_queue_notifyObserversOfCompetitionsLoaded;
-(void)_queue_notifyObserversOfFriendListChanges;
-(BOOL)_queue_hasFriendsToShareWith;
-(void)contactsManagerDidUpdateContacts:(id)arg1 ;
-(void)competitionManagerDidLoadCachedCompetitions:(id)arg1 ;
-(void)competitionManager:(id)arg1 didUpdateCompetitionsForFriendsWithUUIDs:(id)arg2 ;
-(void)initializeFriendListAndBeginObserving;
-(void)fetchfriendDataWithRemoteUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateFriendListWithNewSnapshots:(id)arg1 achievements:(id)arg2 workouts:(id)arg3 ;
-(void)updateFriendListWithDeletedWorkoutEvents:(id)arg1 ;
-(BOOL)hasFriendsToShareWith;
@end

