/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDynamicButton.h>

@interface GKTimeScopeButton : GKDynamicButton {

	long long _timeScope;
	long long _leaderboardOccurrence;

}

@property (assign,nonatomic) long long timeScope;                          //@synthesize timeScope=_timeScope - In the implementation block
@property (assign,nonatomic) long long leaderboardOccurrence;              //@synthesize leaderboardOccurrence=_leaderboardOccurrence - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateWithTitle:(id)arg1 ;
-(void)setTimeScope:(long long)arg1 ;
-(void)setLeaderboardOccurrence:(long long)arg1 ;
-(long long)timeScope;
-(long long)leaderboardOccurrence;
-(void)awakeFromNib;
-(void)_commonInit;
@end

