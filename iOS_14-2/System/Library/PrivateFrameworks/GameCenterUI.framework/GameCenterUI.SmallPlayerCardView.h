/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TtC12GameCenterUI16DynamicTypeLabel, UIButton;

@interface GameCenterUI.SmallPlayerCardView : UIView {

	 contentView;
	 contentViewBackground;
	 closeButton;
	 avatarView;
	 titleLabel;
	 subtitleLabel;
	 button;
	 closeButtonActionBlock;
	 buttonActionBlock;
	 shouldAnimateOnCloseButtonPress;
	 disabled;
	 currentImageFetch;

}

@property (assign,nonatomic) CGRect frame; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilitySubtitleLabel; 
@property (readonly,nonatomic) UIButton * accessibilityCloseButton; 
@property (readonly,nonatomic) UIButton * accessibilityInviteButton; 
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(CGRect)frame;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilitySubtitleLabel;
-(void)didTapCloseButton;
-(void)didTapButton;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilityTitleLabel;
-(UIButton *)accessibilityCloseButton;
-(UIButton *)accessibilityInviteButton;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

