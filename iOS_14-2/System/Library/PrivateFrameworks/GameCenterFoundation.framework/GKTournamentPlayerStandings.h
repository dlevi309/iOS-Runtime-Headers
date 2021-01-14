/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternal:(GKTournamentPlayerStandingsInternal *)arg1 ;
-(id)init;
-(GKTournamentPlayerStandingsInternal *)internal;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
@end

