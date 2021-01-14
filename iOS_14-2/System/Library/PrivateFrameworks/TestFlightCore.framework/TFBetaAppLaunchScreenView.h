/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)snapshot;
-(UILabel *)titleLabel;
-(void)setSnapshot:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(TFBetaAppLaunchScreenViewSpecification *)specification;
-(void)setLockup:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setSpecification:(TFBetaAppLaunchScreenViewSpecification *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(void)setSubtitle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(TFAppLockupView *)lockupView;
-(TFDeviceInstructionView *)instructionView;
-(void)_prepareForDisplayWithTraitCollection:(id)arg1 ;
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

