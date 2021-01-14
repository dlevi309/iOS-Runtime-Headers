/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal, NSDate;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation {

	NSString* _sessionID;
	GKPlayerInternal* _player;
	GKPlayerInternal* _invitedBy;
	NSString* _inviteMessage;
	NSString* _status;
	NSDate* _lastTurnDate;
	NSDate* _timeoutDate;
	unsigned _matchOutcome;
	unsigned char _slot;

}

@property (nonatomic,readonly) NSString * playerID; 
@property (nonatomic,retain) NSString * sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                  //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * invitedBy;               //@synthesize invitedBy=_invitedBy - In the implementation block
@property (nonatomic,retain) NSString * inviteMessage;                   //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSString * status;                          //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDate * lastTurnDate;                      //@synthesize lastTurnDate=_lastTurnDate - In the implementation block
@property (nonatomic,retain) NSDate * timeoutDate;                       //@synthesize timeoutDate=_timeoutDate - In the implementation block
@property (assign,nonatomic) unsigned matchOutcome;                      //@synthesize matchOutcome=_matchOutcome - In the implementation block
@property (assign,nonatomic) unsigned char slot;                         //@synthesize slot=_slot - In the implementation block
@property (nonatomic,readonly) BOOL isAutomatchParticipant; 
+(id)secureCodedPropertyKeys;
-(GKPlayerInternal *)player;
-(NSString *)playerID;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(GKPlayerInternal *)invitedBy;
-(NSDate *)lastTurnDate;
-(NSString *)inviteMessage;
-(void)setMatchOutcome:(unsigned)arg1 ;
-(void)setInviteMessage:(NSString *)arg1 ;
-(BOOL)isAutomatchParticipant;
-(void)setSlot:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(void)setStatus:(NSString *)arg1 ;
-(unsigned char)slot;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)status;
-(void)dealloc;
-(NSDate *)timeoutDate;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(unsigned)matchOutcome;
-(void)setLastTurnDate:(NSDate *)arg1 ;
-(void)setTimeoutDate:(NSDate *)arg1 ;
-(void)setInvitedBy:(GKPlayerInternal *)arg1 ;
@end

