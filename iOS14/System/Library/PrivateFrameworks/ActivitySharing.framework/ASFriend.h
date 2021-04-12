/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, ASContact, NSArray, NSDictionary, NSUUID, NSString, NSDateComponents, NSTimeZone, NSDate, ASCompetition, _HKFitnessFriendActivitySnapshot;

@interface ASFriend : NSObject <NSCopying> {

	NSNumber* _currentCacheIndex;
	ASContact* _contact;
	NSArray* _competitions;
	NSDictionary* _snapshots;
	NSDictionary* _friendAchievements;
	NSDictionary* _friendWorkouts;

}

@property (nonatomic,retain) ASContact * contact;                                                                      //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSDateComponents * currentDateComponents; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (getter=isMe,nonatomic,readonly) BOOL me; 
@property (nonatomic,readonly) BOOL isFriendshipCurrentlyActive; 
@property (nonatomic,readonly) BOOL canSeeMyActivityData; 
@property (nonatomic,readonly) BOOL isActivityDataCurrentlyVisibleToMe; 
@property (nonatomic,readonly) BOOL isCurrentlyHidingActivityDataFromMe; 
@property (nonatomic,readonly) BOOL isMyActivityDataCurrentlyHidden; 
@property (nonatomic,readonly) BOOL hasInviteRequestFromMe; 
@property (nonatomic,readonly) BOOL sentInviteRequestToMe; 
@property (nonatomic,readonly) BOOL isAwaitingInviteResponseFromMe; 
@property (nonatomic,readonly) BOOL inviteRequestToMeWasAccepted; 
@property (nonatomic,readonly) NSDate * dateForLatestOutgoingInviteRequest; 
@property (nonatomic,readonly) NSDate * dateForLatestDataHiddenFromMe; 
@property (nonatomic,readonly) NSDate * dateForLatestDataHidden; 
@property (nonatomic,readonly) NSDate * dateForLatestRelationshipStart; 
@property (nonatomic,readonly) NSDate * dateActivityDataInitiallyBecameVisibleToMe; 
@property (nonatomic,readonly) BOOL isMuted; 
@property (nonatomic,retain) NSArray * competitions;                                                                   //@synthesize competitions=_competitions - In the implementation block
@property (nonatomic,readonly) NSArray * completedCompetitions; 
@property (nonatomic,readonly) ASCompetition * currentOrMostRecentCompetition; 
@property (nonatomic,readonly) ASCompetition * currentCompetition; 
@property (nonatomic,readonly) ASCompetition * mostRecentlyCompletedCompetition; 
@property (nonatomic,readonly) ASCompetition * competitionPendingAcceptance; 
@property (nonatomic,readonly) BOOL hasCompetitionRequestFromMe; 
@property (nonatomic,readonly) BOOL hasPendingCompetitionRequestFromMe; 
@property (nonatomic,readonly) BOOL ignoredCompetitionRequestFromMe; 
@property (nonatomic,readonly) BOOL isAwaitingCompetitionResponseFromMe; 
@property (nonatomic,readonly) BOOL isCompetitionActive; 
@property (nonatomic,readonly) BOOL hasCompletedCompetition; 
@property (nonatomic,readonly) BOOL hasCompletedFirstDayOfCurrentCompetition; 
@property (nonatomic,readonly) BOOL isEligibleToReceiveCompetitionRequest; 
@property (nonatomic,readonly) BOOL hasCompetitionHistory; 
@property (nonatomic,readonly) unsigned long long numberOfCompetitionWinsAgainstMe; 
@property (nonatomic,readonly) unsigned long long numberOfCompetitionWinsByMe; 
@property (nonatomic,readonly) NSDate * dateForLatestOutgoingCompetitionRequest; 
@property (nonatomic,readonly) NSDate * dateForLatestIncomingCompetitionRequest; 
@property (nonatomic,readonly) NSDate * earliestCompetitionVictoryOrPotentialVictoryDate; 
@property (nonatomic,retain) NSDictionary * snapshots;                                                                 //@synthesize snapshots=_snapshots - In the implementation block
@property (nonatomic,retain) NSDictionary * friendAchievements;                                                        //@synthesize friendAchievements=_friendAchievements - In the implementation block
@property (nonatomic,retain) NSDictionary * friendWorkouts;                                                            //@synthesize friendWorkouts=_friendWorkouts - In the implementation block
@property (nonatomic,readonly) _HKFitnessFriendActivitySnapshot * currentSnapshot; 
@property (nonatomic,readonly) _HKFitnessFriendActivitySnapshot * mostRecentSnapshot; 
@property (nonatomic,readonly) NSNumber * currentCacheIndex;                                                           //@synthesize currentCacheIndex=_currentCacheIndex - In the implementation block
@property (nonatomic,readonly) _HKFitnessFriendActivitySnapshot * currentSnapshotWithGoalsCarriedForward; 
@property (nonatomic,readonly) BOOL supportsCompetitions; 
+(id)friendWithCodableFriend:(id)arg1 ;
-(BOOL)isMe;
-(NSTimeZone *)timeZone;
-(ASContact *)contact;
-(NSString *)fullName;
-(_HKFitnessFriendActivitySnapshot *)currentSnapshot;
-(void)setContact:(ASContact *)arg1 ;
-(NSUUID *)UUID;
-(id)description;
-(_HKFitnessFriendActivitySnapshot *)mostRecentSnapshot;
-(BOOL)isMuted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSDictionary *)snapshots;
-(NSDateComponents *)currentDateComponents;
-(NSArray *)competitions;
-(void)setCompetitions:(NSArray *)arg1 ;
-(NSNumber *)currentCacheIndex;
-(void)setSnapshots:(NSDictionary *)arg1 ;
-(NSDictionary *)friendWorkouts;
-(NSDictionary *)friendAchievements;
-(id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4 competitions:(id)arg5 ;
-(id)codableFriendIncludingCloudKitFields:(BOOL)arg1 ;
-(BOOL)supportsCompetitions;
-(BOOL)isCompetitionActive;
-(BOOL)hasCompletedCompetition;
-(NSDate *)dateForLatestOutgoingCompetitionRequest;
-(NSDate *)dateForLatestIncomingCompetitionRequest;
-(NSDate *)dateForLatestDataHidden;
-(NSDate *)dateForLatestOutgoingInviteRequest;
-(NSDate *)dateForLatestRelationshipStart;
-(unsigned long long)numberOfCompetitionWinsByMe;
-(BOOL)hasPendingCompetitionRequestFromMe;
-(BOOL)isAwaitingCompetitionResponseFromMe;
-(ASCompetition *)currentCompetition;
-(ASCompetition *)competitionPendingAcceptance;
-(ASCompetition *)mostRecentlyCompletedCompetition;
-(NSArray *)completedCompetitions;
-(NSDate *)earliestCompetitionVictoryOrPotentialVictoryDate;
-(BOOL)isFriendshipCurrentlyActive;
-(BOOL)hasCompetitionRequestFromMe;
-(BOOL)ignoredCompetitionRequestFromMe;
-(id)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(long long)arg1 ;
-(BOOL)isActivityDataCurrentlyVisibleToMe;
-(BOOL)canSeeMyActivityData;
-(BOOL)isMyActivityDataCurrentlyHidden;
-(BOOL)isCurrentlyHidingActivityDataFromMe;
-(BOOL)isActivityDataVisibleToMeForDate:(id)arg1 ;
-(BOOL)isAwaitingInviteResponseFromMe;
-(BOOL)sentInviteRequestToMe;
-(BOOL)hasInviteRequestFromMe;
-(BOOL)inviteRequestToMeWasAccepted;
-(NSDate *)dateForLatestDataHiddenFromMe;
-(NSDate *)dateActivityDataInitiallyBecameVisibleToMe;
-(BOOL)isHidingActivityDataFromMeForDate:(id)arg1 ;
-(ASCompetition *)currentOrMostRecentCompetition;
-(BOOL)hasCompletedFirstDayOfCurrentCompetition;
-(BOOL)isEligibleToReceiveCompetitionRequest;
-(BOOL)hasCompetitionHistory;
-(unsigned long long)numberOfCompetitionWinsAgainstMe;
-(_HKFitnessFriendActivitySnapshot *)currentSnapshotWithGoalsCarriedForward;
-(id)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)arg1 ;
-(void)setFriendAchievements:(NSDictionary *)arg1 ;
-(void)setFriendWorkouts:(NSDictionary *)arg1 ;
@end

