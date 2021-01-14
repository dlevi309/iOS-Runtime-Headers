/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class GKPlayer, NSString;

@interface GKLeaderboardScore : NSObject {

	GKPlayer* _player;
	long long _value;
	unsigned long long _context;
	NSString* _leaderboardID;

}

@property (nonatomic,retain) GKPlayer * player;                       //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long value;                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * leaderboardID;                //@synthesize leaderboardID=_leaderboardID - In the implementation block
+(id)convertToGKScore:(id)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(unsigned long long)context;
-(void)setValue:(long long)arg1 ;
-(long long)value;
-(void)setContext:(unsigned long long)arg1 ;
-(NSString *)leaderboardID;
-(void)setLeaderboardID:(NSString *)arg1 ;
@end

