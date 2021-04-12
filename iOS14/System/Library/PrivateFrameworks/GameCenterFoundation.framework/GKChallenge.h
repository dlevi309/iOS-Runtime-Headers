/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKChallengeInternal, NSString, NSOrderedSet, GKGame, GKPlayer, NSDate;

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding> {

	GKChallengeInternal* _internal;

}

@property (retain) GKChallengeInternal * internal;                                   //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSString * challengeID; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSOrderedSet * compatibleBundleIDs; 
@property (nonatomic,readonly) GKGame * game; 
@property (nonatomic,readonly) BOOL detailsLoaded; 
@property (nonatomic,copy,readonly) GKPlayer * issuingPlayer; 
@property (nonatomic,copy,readonly) GKPlayer * receivingPlayer; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,retain,readonly) NSDate * issueDate; 
@property (nonatomic,retain,readonly) NSDate * completionDate; 
@property (nonatomic,copy,readonly) NSString * message; 
+(id)challengesNotSupportedAlertController;
+(BOOL)supportsSecureCoding;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(void)loadReceivedPendingChallengesWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)stringForState:(long long)arg1 ;
+(id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3 ;
+(id)challengeForInternalRepresentation:(id)arg1 ;
+(id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3 ;
+(void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)loadReceivedChallengesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)getCountOfChallenges:(/*^block*/id)arg1 ;
+(void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)iconSource;
-(id)composeGoalText;
-(id)smallIconURLString;
-(void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)listGoalText;
-(id)detailGoalText;
-(id)detailFromText;
-(id)alertGoalText;
-(void)loadBannerImageWithHandler:(/*^block*/id)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)listTitleText;
-(id)iconURLString;
-(void)setInternal:(GKChallengeInternal *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(GKPlayer *)issuingPlayer;
-(GKGame *)game;
-(void)encodeWithCoder:(id)arg1 ;
-(GKChallengeInternal *)internal;
-(void)decline;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)issueToPlayers:(id)arg1 message:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(GKPlayer *)receivingPlayer;
-(void)declineWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)issuingPlayerID;
-(id)receivingPlayerID;
-(BOOL)hasLoadedUIDetails;
-(void)loadUIDetailsWithHandler:(/*^block*/id)arg1 ;
-(id)infoTextForIssuingPlayer:(id)arg1 ;
@end

