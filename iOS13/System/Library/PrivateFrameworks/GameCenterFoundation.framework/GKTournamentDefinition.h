/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKTournamentDefinitionInternal, NSString, GKRecurrenceRule;

@interface GKTournamentDefinition : NSObject <NSSecureCoding> {

	GKTournamentDefinitionInternal* _internal;

}

@property (retain) GKTournamentDefinitionInternal * internal;                     //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * tournamentDefinitionID; 
@property (nonatomic,readonly) NSString * tournamentName; 
@property (nonatomic,readonly) long long tournamentNameFormat; 
@property (nonatomic,readonly) NSString * tournamentDescription; 
@property (nonatomic,readonly) NSString * tournamentIcon; 
@property (nonatomic,readonly) NSString * customTournamentName; 
@property (nonatomic,readonly) long long customTournamentNameFormat; 
@property (nonatomic,readonly) NSString * customTournamentIcon; 
@property (nonatomic,readonly) BOOL customTournamentAllowIcon; 
@property (nonatomic,readonly) long long tournamentType; 
@property (nonatomic,readonly) long long creationMethod; 
@property (nonatomic,readonly) long long seedingMethod; 
@property (nonatomic,readonly) long long customSeedingMethods; 
@property (nonatomic,readonly) long long participationType; 
@property (nonatomic,readonly) long long scoringMethod; 
@property (nonatomic,readonly) long long customScoringMethods; 
@property (nonatomic,readonly) long long maxPlayers; 
@property (nonatomic,readonly) long long minPlayers; 
@property (nonatomic,readonly) long long customMaxPlayers; 
@property (nonatomic,readonly) long long customMinPlayers; 
@property (nonatomic,readonly) long long maxPlayerShards; 
@property (nonatomic,readonly) double typicalGameplayDuration; 
@property (nonatomic,readonly) double tournamentDuration; 
@property (nonatomic,readonly) double customTournamentDuration; 
@property (nonatomic,readonly) double PreRegistrationTime; 
@property (nonatomic,readonly) GKRecurrenceRule * recurrenceRule; 
@property (nonatomic,readonly) long long maxReplays; 
@property (nonatomic,readonly) long long customMaxReplays; 
+(BOOL)supportsSecureCoding;
+(void)loadTournamentDefinitionsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadTournamentDefinitionWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKTournamentDefinitionInternal *)internal;
-(void)setInternal:(GKTournamentDefinitionInternal *)arg1 ;
-(void)loadTournamentsWithPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)scoringMethodDescription;
-(id)seedingMethodDescription;
-(id)creationMethodDescription;
-(id)tournamentTypeDescription;
-(id)participationTypeDescription;
-(id)proposedNextCustomTournamentStartDate;
-(void)loadHistoricalDataForPlayer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

