/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKTournamentPlayerStandingsInternal;

@interface GKTournamentPlayerStandings : NSObject {

	GKTournamentPlayerStandingsInternal* _internal;

}

@property (retain) GKTournamentPlayerStandingsInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long topScore; 
@property (nonatomic,readonly) long long friendRank; 
@property (nonatomic,readonly) long long friendCount; 
@property (nonatomic,readonly) long long globalRank; 
@property (nonatomic,readonly) long long globalPlayerCount; 
@property (nonatomic,readonly) long long replayCount; 
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKTournamentPlayerStandingsInternal *)internal;
-(void)setInternal:(GKTournamentPlayerStandingsInternal *)arg1 ;
@end

