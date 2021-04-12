/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,copy,readonly) NSString * issuingPlayerID; 
@property (nonatomic,copy,readonly) NSString * receivingPlayerID; 
@property (nonatomic,copy,readonly) GKPlayer * issuingPlayer; 
@property (nonatomic,copy,readonly) GKPlayer * receivingPlayer; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,retain,readonly) NSDate * issueDate; 
@property (nonatomic,retain,readonly) NSDate * completionDate; 
@property (nonatomic,copy,readonly) NSString * message; 
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)stringForState:(long long)arg1 ;
+(id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3 ;
+(id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3 ;
+(id)challengeForInternalRepresentation:(id)arg1 ;
+(void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)getCountOfChallenges:(/*^block*/id)arg1 ;
+(void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadReceivedChallengesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)iconURLString;
-(id)iconSource;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)detailGoalText;
-(id)detailFromText;
-(id)composeGoalText;
-(id)alertGoalText;
-(void)loadBannerImageWithHandler:(/*^block*/id)arg1 ;
-(id)smallIconURLString;
-(void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)listTitleText;
-(id)listGoalText;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKChallengeInternal *)internal;
-(void)setInternal:(GKChallengeInternal *)arg1 ;
-(GKGame *)game;
-(void)decline;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)issueToPlayers:(id)arg1 message:(id)arg2 ;
-(GKPlayer *)issuingPlayer;
-(GKPlayer *)receivingPlayer;
-(void)declineWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)issuingPlayerID;
-(NSString *)receivingPlayerID;
-(BOOL)hasLoadedUIDetails;
-(void)loadUIDetailsWithHandler:(/*^block*/id)arg1 ;
-(id)infoTextForIssuingPlayer:(id)arg1 ;
@end

