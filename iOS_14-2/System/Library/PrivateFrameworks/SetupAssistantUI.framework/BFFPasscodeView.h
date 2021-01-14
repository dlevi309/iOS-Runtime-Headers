/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPasscodeViewController:(UIViewController *)arg1 ;
-(void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2 ;
-(id)passcodeInputView;
-(void)animateTransitionToPasscodeInput:(id)arg1 animation:(unsigned long long)arg2 ;
-(UIViewController *)passcodeViewController;
-(void)layoutSubviews;
-(void)keyboardWillShow:(id)arg1 ;
-(BOOL)alwaysBounceVertical;
-(void)dealloc;
-(CGRect)currentKeyboardFrame;
-(void)setCurrentKeyboardFrame:(CGRect)arg1 ;
@end

