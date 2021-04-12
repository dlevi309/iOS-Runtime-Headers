/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKTurnBasedParticipantInternal, NSDate, NSString, GKPlayer;

@interface GKTurnBasedParticipant : NSObject {

	GKTurnBasedParticipantInternal* _internal;

}

@property (readonly) GKTurnBasedParticipantInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy) NSDate * lastTurnDate; 
@property (nonatomic,copy) NSDate * timeoutDate; 
@property (nonatomic,readonly) NSString * matchStatusString; 
@property (nonatomic,readonly) BOOL isWinner; 
@property (nonatomic,readonly) GKPlayer * invitedBy; 
@property (nonatomic,readonly) NSString * inviteMessage; 
@property (nonatomic,readonly) BOOL isLocalPlayer; 
@property (nonatomic,readonly) GKPlayer * player; 
@property (nonatomic,readonly) long long status; 
@property (assign,nonatomic) long long matchOutcome; 
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)keyPathsForValuesAffectingStatus;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)stringForMatchOutcome:(long long)arg1 totalParticipant:(long long)arg2 ;
+(id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+(id)keyPathsForValuesAffectingMatchOutcomeString;
+(BOOL)matchOutcomeIsValidForDoneState:(long long)arg1 ;
-(GKPlayer *)player;
-(id)playerID;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(GKPlayer *)invitedBy;
-(id)init;
-(GKTurnBasedParticipantInternal *)internal;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)isLocalPlayer;
-(NSDate *)lastTurnDate;
-(id)matchOutcomeStringForLocalPlayer:(long long)arg1 ;
-(id)matchOutcomeString:(long long)arg1 ;
-(NSString *)matchStatusString;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStatus:(long long)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isWinner;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(id)basicMatchOutcomeString:(long long)arg1 ;
@end

