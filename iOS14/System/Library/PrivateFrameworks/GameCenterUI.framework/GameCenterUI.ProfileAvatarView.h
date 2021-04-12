/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GameCenterUI.AvatarView.h>

@class UIVisualEffectView, UIView, _TtC12GameCenterUI26CappedSizeDynamicTypeLabel;

@interface GameCenterUI.ProfileAvatarView : GameCenterUI.AvatarView {

	 profileEditButtonBackground;
	 profileEditLabel;
	 roundedEditButton;
	 isEditable;
	 tapGestureRecognizer;
	 tapHandler;

}

@property (readonly,nonatomic) BOOL accessibilityIsEditable; 
@property (readonly,nonatomic) UIVisualEffectView * accessibilityProfileEditButtonBackground; 
@property (readonly,nonatomic) UIView * accessibilityRoundedEditButton; 
@property (readonly,nonatomic) _TtC12GameCenterUI26CappedSizeDynamicTypeLabel * accessibilityProfileEditLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didTap;
-(BOOL)accessibilityIsEditable;
-(UIVisualEffectView *)accessibilityProfileEditButtonBackground;
-(UIView *)accessibilityRoundedEditButton;
-(_TtC12GameCenterUI26CappedSizeDynamicTypeLabel *)accessibilityProfileEditLabel;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

