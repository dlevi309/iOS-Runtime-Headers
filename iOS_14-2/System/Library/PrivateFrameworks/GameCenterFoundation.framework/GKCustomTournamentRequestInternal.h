/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKTournamentDefinitionInternal, GKPlayerInternal, NSString, NSDate;

@interface GKCustomTournamentRequestInternal : GKInternalRepresentation {

	BOOL _isCreatorInTournament;
	GKTournamentDefinitionInternal* _tournamentDefinition;
	GKPlayerInternal* _tournamentCreator;
	NSString* _tournamentName;
	NSString* _icon;
	long long _seedingMethod;
	long long _scoringMethod;
	long long _maxPlayers;
	long long _minPlayers;
	double _duration;
	NSDate* _startTime;
	long long _maxReplays;

}

@property (nonatomic,retain) GKTournamentDefinitionInternal * tournamentDefinition;              //@synthesize tournamentDefinition=_tournamentDefinition - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * tournamentCreator;                               //@synthesize tournamentCreator=_tournamentCreator - In the implementation block
@property (nonatomic,retain) NSString * tournamentName;                                          //@synthesize tournamentName=_tournamentName - In the implementation block
@property (nonatomic,retain) NSString * icon;                                                    //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) long long seedingMethod;                                            //@synthesize seedingMethod=_seedingMethod - In the implementation block
@property (assign,nonatomic) long long scoringMethod;                                            //@synthesize scoringMethod=_scoringMethod - In the implementation block
@property (assign,nonatomic) long long maxPlayers;                                               //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) long long minPlayers;                                               //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) double duration;                                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                                 //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long maxReplays;                                               //@synthesize maxReplays=_maxReplays - In the implementation block
@property (assign,nonatomic) BOOL isCreatorInTournament;                                         //@synthesize isCreatorInTournament=_isCreatorInTournament - In the implementation block
+(id)secureCodedPropertyKeys;
+(id)customTournamentRequestWithTournamentDefinition:(id)arg1 player:(id)arg2 ;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)icon;
-(void)setIcon:(NSString *)arg1 ;
-(long long)minPlayers;
-(long long)maxPlayers;
-(void)setMinPlayers:(long long)arg1 ;
-(void)setMaxPlayers:(long long)arg1 ;
-(double)duration;
-(void)setTournamentDefinition:(GKTournamentDefinitionInternal *)arg1 ;
-(GKTournamentDefinitionInternal *)tournamentDefinition;
-(NSDate *)startTime;
-(long long)scoringMethod;
-(long long)seedingMethod;
-(NSString *)tournamentName;
-(void)setTournamentName:(NSString *)arg1 ;
-(void)setSeedingMethod:(long long)arg1 ;
-(void)setScoringMethod:(long long)arg1 ;
-(long long)maxReplays;
-(void)setMaxReplays:(long long)arg1 ;
-(void)setTournamentCreator:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)tournamentCreator;
-(BOOL)isCreatorInTournament;
-(void)setIsCreatorInTournament:(BOOL)arg1 ;
@end

