/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIButton *)leftButton;
-(UIButton *)rightButton;
-(void)layoutSubviews;
-(id)_newButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgressView:(SKUIOnboardingProgressView *)arg1 ;
-(SKUIOnboardingProgressView *)progressView;
-(void)hideLeftButtonWithAnimation:(long long)arg1 ;
-(void)showLeftButtonWithTitle:(id)arg1 animation:(long long)arg2 ;
-(void)hideRightButtonWithAnimation:(long long)arg1 ;
-(void)showRightButtonWithTitle:(id)arg1 animation:(long long)arg2 ;
-(void)_hideButton:(id)arg1 withAnimation:(long long)arg2 ;
-(void)_showButton:(id)arg1 withTitle:(id)arg2 animation:(long long)arg3 ;
@end

