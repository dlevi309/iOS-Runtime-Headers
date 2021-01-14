/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKTournamentParticipantHistoricalDataInternal, GKPlayer, NSMutableArray;

@interface GKTournamentParticipantHistoricalData : NSObject <NSSecureCoding> {

	GKTournamentParticipantHistoricalDataInternal* _internal;

}

@property (retain) GKTournamentParticipantHistoricalDataInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) GKPlayer * player; 
@property (nonatomic,readonly) long long tournamentsPlayed; 
@property (nonatomic,readonly) long long highestRank; 
@property (nonatomic,readonly) long long latestRank; 
@property (nonatomic,readonly) long long averageRank; 
@property (nonatomic,readonly) long long bestScore; 
@property (nonatomic,readonly) long long latestScore; 
@property (nonatomic,readonly) long long averageScore; 
@property (nonatomic,readonly) NSMutableArray * historicalRanks; 
+(BOOL)supportsSecureCoding;
-(void)setInternal:(GKTournamentParticipantHistoricalDataInternal *)arg1 ;
-(GKPlayer *)player;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(GKTournamentParticipantHistoricalDataInternal *)internal;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

