/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseGameCell.h>

@class UILabel;

@interface GKPlayerGameCell : GKBaseGameCell {

	UILabel* _statsLabel;
	UILabel* _dateLabel;

}

@property (nonatomic,retain) UILabel * statsLabel;              //@synthesize statsLabel=_statsLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;               //@synthesize dateLabel=_dateLabel - In the implementation block
-(id)achievementsStringWithGameRecord:(id)arg1 ;
-(id)leaderboardStringWithGameRecord:(id)arg1 ;
-(UILabel *)statsLabel;
-(void)setStatsLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)dateLabel;
-(void)prepareForReuse;
-(id)statText;
-(void)didUpdateModel;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

