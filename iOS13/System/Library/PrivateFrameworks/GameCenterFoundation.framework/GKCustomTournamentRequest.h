/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKCustomTournamentRequestInternal, GKTournamentDefinition, GKPlayer, NSString, NSDate;

@interface GKCustomTournamentRequest : NSObject <NSSecureCoding> {

	GKCustomTournamentRequestInternal* _internal;

}

@property (retain) GKCustomTournamentRequestInternal * internal;                           //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) GKTournamentDefinition * tournamentDefinition; 
@property (nonatomic,readonly) GKPlayer * tournamentCreator; 
@property (nonatomic,retain) NSString * tournamentName; 
@property (nonatomic,retain) NSString * icon; 
@property (assign,nonatomic) long long seedingMethod; 
@property (assign,nonatomic) long long scoringMethod; 
@property (assign,nonatomic) long long maxPlayers; 
@property (assign,nonatomic) long long minPlayers; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) NSDate * startTime; 
@property (assign,nonatomic) long long maxReplays; 
@property (assign,nonatomic) BOOL isCreatorInTournament; 
+(BOOL)supportsSecureCoding;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKCustomTournamentRequestInternal *)internal;
-(void)setInternal:(GKCustomTournamentRequestInternal *)arg1 ;
-(GKTournamentDefinition *)tournamentDefinition;
-(GKPlayer *)tournamentCreator;
-(id)initWithTournamentDefinition:(id)arg1 andCreator:(id)arg2 ;
-(void)createTournamentWithCompletionHandler:(/*^block*/id)arg1 ;
@end

