/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKitCore/UIView.h>

@class TFAppLockupView, UIScrollView, UILabel, TFDeviceInstructionView, UIButton, UIVisualEffectView, UIView, TFBetaAppLaunchScreenViewSpecification;

@interface TFBetaAppLaunchScreenView : UIView {

	TFAppLockupView* _lockupView;
	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bodyTitleLabel;
	UILabel* _bodyTextLabel;
	TFDeviceInstructionView* _instructionView;
	UIButton* _primaryButton;
	UIButton* _secondaryButton;
	UIVisualEffectView* _buttonBackgroundEffectView;
	UIView* _snapshot;
	TFBetaAppLaunchScreenViewSpecification* _specification;

}

@property (nonatomic,readonly) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bodyTitleLabel;                                          //@synthesize bodyTitleLabel=_bodyTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bodyTextLabel;                                           //@synthesize bodyTextLabel=_bodyTextLabel - In the implementation block
@property (nonatomic,readonly) TFDeviceInstructionView * instructionView;                         //@synthesize instructionView=_instructionView - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                                          //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * secondaryButton;                                        //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * buttonBackgroundEffectView;                   //@synthesize buttonBackgroundEffectView=_buttonBackgroundEffectView - In the implementation block
@property (nonatomic,retain) UIView * snapshot;                                                   //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) TFBetaAppLaunchScreenViewSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (nonatomic,readonly) TFAppLockupView * lockupView;                                      //@synthesize lockupView=_lockupView - In the implementation block
-(void)setTitle:(id)arg1 ;
-(UIView *)snapshot;
-(void)setSnapshot:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(id)arg1 ;
-(TFBetaAppLaunchScreenViewSpecification *)specification;
-(UIScrollView *)scrollView;
-(UILabel *)subtitleLabel;
-(void)setSpecification:(TFBetaAppLaunchScreenViewSpecification *)arg1 ;
-(void)setLockup:(id)arg1 ;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(TFDeviceInstructionView *)instructionView;
-(void)_prepareForDisplayWithTraitCollection:(id)arg1 ;
-(TFAppLockupView *)lockupView;
-(UILabel *)bodyTitleLabel;
-(UILabel *)bodyTextLabel;
-(void)_layoutButtonModuleWithLayoutMetrics:(id)arg1 ;
-(UIVisualEffectView *)buttonBackgroundEffectView;
-(void)_layoutScrollViewWithLayoutMetrics:(id)arg1 accomodatingPinnedBottomView:(id)arg2 ;
-(void)snapshotCurrentView;
-(void)cleanupSnapshot;
-(void)prepareForState:(unsigned long long)arg1 ;
-(void)setBodyTitle:(id)arg1 bodyText:(id)arg2 ;
-(void)setDeviceImage:(id)arg1 withOrientation:(long long)arg2 ;
-(void)setDeviceImageVisibility:(BOOL)arg1 ;
-(void)setDeviceImageOrientation:(long long)arg1 ;
-(void)setPrimaryButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setSecondaryButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

