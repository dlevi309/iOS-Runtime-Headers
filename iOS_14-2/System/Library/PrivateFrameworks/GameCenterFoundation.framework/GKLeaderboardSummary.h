/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKLeaderboardSummaryInternal;

@interface GKLeaderboardSummary : NSObject {

	GKLeaderboardSummaryInternal* _internal;

}

@property (nonatomic,retain) GKLeaderboardSummaryInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) unsigned long long scoreValue; 
@property (assign,nonatomic) unsigned long long rank; 
@property (assign,nonatomic) unsigned long long totalEntries; 
@property (assign,nonatomic) unsigned long long friendRank; 
@property (assign,nonatomic) unsigned long long totalFriendEntries; 
-(void)setInternal:(GKLeaderboardSummaryInternal *)arg1 ;
-(GKLeaderboardSummaryInternal *)internal;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
@end

