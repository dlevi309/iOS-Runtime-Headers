/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface GameCenterUI.AchievementBadge : UIView {

	 theme;
	 metrics;
	 style;
	 status;
	 backgroundGradient;
	 image;
	 innerShadow;
	 foilLayer;
	 progressBarLayer;
	 iconImageView;
	 progressLabel;

}

@property (readonly,nonatomic) BOOL accessibilityIsAchievementLocked; 
@property (readonly,nonatomic) BOOL accessibilityIsAchievementCompleted; 
@property (readonly,nonatomic) BOOL accessibilityIsAchievementInProgress; 
@property (readonly,nonatomic) double accessibilityProgress; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(BOOL)accessibilityIsAchievementLocked;
-(double)accessibilityProgress;
-(BOOL)accessibilityIsAchievementCompleted;
-(BOOL)accessibilityIsAchievementInProgress;
-(id)initWithCoder:(id)arg1 ;
@end

