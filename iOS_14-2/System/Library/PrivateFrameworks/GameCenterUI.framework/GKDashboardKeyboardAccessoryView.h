/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIView.h>

@class UILabel;

@interface GKDashboardKeyboardAccessoryView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _descriptionLabel;

}

@property (assign,nonatomic) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) UILabel * subtitleLabel;                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
@end

