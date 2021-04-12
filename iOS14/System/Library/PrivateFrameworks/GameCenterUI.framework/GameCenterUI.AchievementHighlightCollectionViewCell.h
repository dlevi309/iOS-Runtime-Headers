/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface GameCenterUI.AchievementHighlightCollectionViewCell : UICollectionViewCell {

	 decorationView;
	 title;
	 subtitle;
	 wantsVerticalLayout;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) UILabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) UILabel * accessibilitySubtitleLabel; 
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)accessibilitySubtitleLabel;
-(UILabel *)accessibilityTitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

