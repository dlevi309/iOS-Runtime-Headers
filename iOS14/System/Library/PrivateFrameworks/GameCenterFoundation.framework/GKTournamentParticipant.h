/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKTournamentParticipantInternal, GKPlayer;

@interface GKTournamentParticipant : NSObject <NSSecureCoding> {

	GKTournamentParticipantInternal* _internal;
	GKPlayer* _player;

}

@property (retain) GKTournamentParticipantInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                             //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long playerGroup; 
@property (nonatomic,readonly) long long replayCount; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) BOOL cheatingIndicator; 
+(BOOL)supportsSecureCoding;
-(void)setInternal:(GKTournamentParticipantInternal *)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(GKTournamentParticipantInternal *)internal;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

