/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class GKMatchRequestInternal, GKTournament, NSArray, NSString;

@interface GKMatchRequest : NSObject {

	GKMatchRequestInternal* _internal;
	/*^block*/id _inviteeResponseHandler;
	/*^block*/id _recipientResponseHandler;

}

@property (retain) GKMatchRequestInternal * internal;                      //@synthesize internal=_internal - In the implementation block
@property (retain) GKTournament * tournamentForInvitePool; 
@property (assign) unsigned long long minPlayers; 
@property (assign) unsigned long long maxPlayers; 
@property (assign) unsigned long long playerGroup; 
@property (assign) unsigned playerAttributes; 
@property (retain) NSArray * recipients; 
@property (retain) NSArray * playersToInvite; 
@property (copy) NSString * inviteMessage; 
@property (assign) unsigned long long defaultNumberOfPlayers; 
@property (assign) BOOL restrictToAutomatch; 
@property (copy) id recipientResponseHandler;                              //@synthesize recipientResponseHandler=_recipientResponseHandler - In the implementation block
@property (copy) id inviteeResponseHandler;                                //@synthesize inviteeResponseHandler=_inviteeResponseHandler - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(GKMatchRequestInternal *)internal;
-(void)setInternal:(GKMatchRequestInternal *)arg1 ;
-(BOOL)isIncorrectlyInvitingPlayers;
-(BOOL)isValidForHosted:(BOOL)arg1 ;
-(id)guestPlayers;
-(void)removeLocalPlayerFromPlayersToInvite;
-(void)setPlayersToInvite:(NSArray *)arg1 ;
-(void)loadRecipientsWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKTournament *)tournamentForInvitePool;
-(BOOL)isConfiguredForAutomatchOnly;
-(void)setRecipientResponseHandler:(id)arg1 ;
-(BOOL)isTurnBasedValid;
-(id)inviteeResponseHandler;
-(void)setInviteeResponseHandler:(id)arg1 ;
-(id)recipientResponseHandler;
-(BOOL)defaultNumberOfPlayersIsValid;
-(BOOL)isValidWithMax:(unsigned long long)arg1 ;
-(void)setTournamentForInvitePool:(GKTournament *)arg1 ;
-(void)ensureValidityHosted:(BOOL)arg1 ;
-(BOOL)isRecipientCountValid;
-(NSArray *)playersToInvite;
@end

