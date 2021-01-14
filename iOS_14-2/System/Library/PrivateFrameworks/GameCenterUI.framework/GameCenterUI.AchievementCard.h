/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TtC12GameCenterUI16DynamicTypeLabel, NSDate, _TtC12GameCenterUI16AchievementBadge;

@interface GameCenterUI.AchievementCard : UIView {

	 theme;
	 style;
	 metrics;
	 $__lazy_storage_$_highlightView;
	 isHighlighted;
	 backgroundView;
	 gradient;
	 border;
	 badge;
	 titleLabel;
	 subtitleLabel;
	 alwaysShowShadow;
	 backgroundEffectsGroup;
	 wantsFixedContentSizeCategory;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilitySubtitleLabel; 
@property (readonly,nonatomic) NSDate * accessibilityAchievementCompletedDate; 
@property (readonly,nonatomic) _TtC12GameCenterUI16AchievementBadge * accessibilityBadge; 
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilitySubtitleLabel;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilityTitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TtC12GameCenterUI16AchievementBadge *)accessibilityBadge;
-(NSDate *)accessibilityAchievementCompletedDate;
-(id)initWithCoder:(id)arg1 ;
@end

