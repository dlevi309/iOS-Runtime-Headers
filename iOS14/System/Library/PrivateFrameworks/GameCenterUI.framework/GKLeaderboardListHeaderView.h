/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UICollectionReusableView.h>

@class UILabel;

@interface GKLeaderboardListHeaderView : UICollectionReusableView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (assign,nonatomic) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
+(double)defaultHeight;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
@end

