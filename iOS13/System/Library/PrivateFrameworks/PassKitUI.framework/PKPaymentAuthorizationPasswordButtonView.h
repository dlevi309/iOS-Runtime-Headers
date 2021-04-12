/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSMutableArray, NSLayoutConstraint, UIButton;

@interface PKPaymentAuthorizationPasswordButtonView : UIView {

	UIView* _separatorView;
	NSMutableArray* _hiddenConstraints;
	NSLayoutConstraint* _buttonTopPaddingConstraint;
	NSLayoutConstraint* _buttonBottomPaddingConstraint;
	NSLayoutConstraint* _seperatorHeightConstraint;
	UIButton* _passwordButton;

}

@property (nonatomic,readonly) UIButton * passwordButton;              //@synthesize passwordButton=_passwordButton - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)_setupConstraints;
-(UIButton *)passwordButton;
@end

