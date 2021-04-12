/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, SKUIOnboardingProgressView;

@interface SKUIOnboardingFooterView : UIView {

	UIButton* _leftButton;
	SKUIOnboardingProgressView* _progressView;
	UIButton* _rightButton;

}

@property (nonatomic,readonly) UIButton * leftButton; 
@property (nonatomic,readonly) UIButton * rightButton; 
@property (nonatomic,retain) SKUIOnboardingProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_newButton;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
-(SKUIOnboardingProgressView *)progressView;
-(void)setProgressView:(SKUIOnboardingProgressView *)arg1 ;
-(void)hideLeftButtonWithAnimation:(long long)arg1 ;
-(void)showLeftButtonWithTitle:(id)arg1 animation:(long long)arg2 ;
-(void)hideRightButtonWithAnimation:(long long)arg1 ;
-(void)showRightButtonWithTitle:(id)arg1 animation:(long long)arg2 ;
-(void)_hideButton:(id)arg1 withAnimation:(long long)arg2 ;
-(void)_showButton:(id)arg1 withTitle:(id)arg2 animation:(long long)arg3 ;
@end

