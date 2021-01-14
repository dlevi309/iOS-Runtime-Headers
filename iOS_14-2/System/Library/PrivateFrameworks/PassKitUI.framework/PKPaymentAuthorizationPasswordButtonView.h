/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setupConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)updateConstraints;
-(UIButton *)passwordButton;
@end

