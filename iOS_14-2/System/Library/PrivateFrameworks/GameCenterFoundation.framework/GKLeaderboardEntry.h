/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKLeaderboardEntryInternal, GKPlayer, NSString, NSDate;

@interface GKLeaderboardEntry : NSObject {

	GKLeaderboardEntryInternal* _internal;

}

@property (retain) GKLeaderboardEntryInternal * internal;               //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) GKPlayer * player; 
@property (nonatomic,readonly) long long rank; 
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) NSString * formattedScore; 
@property (nonatomic,readonly) unsigned long long context; 
@property (nonatomic,readonly) NSDate * date; 
+(id)formattedDifferenceBetweenFirstScore:(id)arg1 secondScore:(id)arg2 ;
-(id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setInternal:(GKLeaderboardEntryInternal *)arg1 ;
-(GKPlayer *)player;
-(GKLeaderboardEntryInternal *)internal;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_gkScore;
-(id)description;
-(id)initWithInternalRepresentation:(id)arg1 ;
@end

