/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFTitleView.h>

@class BFFPasscodeInputView, UIViewController;

@interface BFFPasscodeView : BFFTitleView {

	BFFPasscodeInputView* _passcodeInputView;
	UIViewController* _passcodeViewController;
	CGRect _currentKeyboardFrame;

}

@property (assign,nonatomic) CGRect currentKeyboardFrame;                                   //@synthesize currentKeyboardFrame=_currentKeyboardFrame - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * passcodeViewController;              //@synthesize passcodeViewController=_passcodeViewController - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)alwaysBounceVertical;
-(void)keyboardWillShow:(id)arg1 ;
-(void)setPasscodeViewController:(UIViewController *)arg1 ;
-(void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2 ;
-(id)passcodeInputView;
-(void)animateTransitionToPasscodeInput:(id)arg1 animation:(unsigned long long)arg2 ;
-(void)setCurrentKeyboardFrame:(CGRect)arg1 ;
-(UIViewController *)passcodeViewController;
-(CGRect)currentKeyboardFrame;
@end

