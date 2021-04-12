/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTraits.h>
#import <libobjc.A.dylib/PSPINEntryViewDelegate.h>

@protocol PINEntryView;
@class NSString, UITextInputPasswordRules, UITransitionView, UIView, UIKeyboard, DevicePINKeypadContainerView;

@interface DevicePINPane : PSEditingPane <UIKeyInput, UITextInputTraits, PSPINEntryViewDelegate> {

	UITransitionView* _transitionView;
	BOOL _transitioning;
	UIView*<PINEntryView> _pinView;
	UIKeyboard* _keypad;
	BOOL _keypadActive;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _keyboardType;
	long long _keyboardAppearance;
	BOOL _playSound;
	BOOL _isBlocked;
	BOOL _simplePIN;
	BOOL _numericKeyboard;
	DevicePINKeypadContainerView* _keypadContainerView;
	unsigned _PINLength;
	/*^block*/id _passcodeOptionsHandler;
	NSString* _passcodeOptionsTitle;

}

@property (nonatomic,retain) UIView*<PINEntryView> pinView;                              //@synthesize pinView=_pinView - In the implementation block
@property (nonatomic,copy) NSString * passcodeOptionsTitle;                              //@synthesize passcodeOptionsTitle=_passcodeOptionsTitle - In the implementation block
@property (assign,nonatomic) unsigned PINLength;                                         //@synthesize PINLength=_PINLength - In the implementation block
@property (nonatomic,copy) id passcodeOptionsHandler;                                    //@synthesize passcodeOptionsHandler=_passcodeOptionsHandler - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType;                           //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                               //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                               //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasText;
-(long long)autocapitalizationType;
-(BOOL)resignFirstResponder;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(long long)keyboardType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)slideToNewPasscodeField:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 transition:(int)arg4 showsOptionsButton:(BOOL)arg5 ;
-(long long)autocorrectionType;
-(long long)keyboardAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(UIView*<PINEntryView>)pinView;
-(BOOL)requiresKeyboard;
-(id)specifierLabel;
-(void)hideError;
-(BOOL)simplePIN;
-(void)setTitle:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)isSecureTextEntry;
-(id)password;
-(void)dismissKeypad;
-(void)setPINLength:(unsigned)arg1 ;
-(void)clearPassword;
-(BOOL)canBecomeFirstResponder;
-(void)showFailedAttempts:(long long)arg1 ;
-(void)showError:(id)arg1 error:(id)arg2 isBlocked:(BOOL)arg3 animate:(BOOL)arg4 ;
-(void)hideFailedAttempts;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2 ;
-(void)okButtonPressed;
-(void)layoutSubviews;
-(NSString *)passcodeOptionsTitle;
-(id)passcodeOptionsHandler;
-(void)setPasscodeOptionsHandler:(id)arg1 ;
-(void)setPasscodeOptionsTitle:(NSString *)arg1 ;
-(void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 showsOptions:(BOOL)arg4 ;
-(unsigned)PINLength;
-(void)transitionViewDidComplete:(id)arg1 ;
-(void)pinView:(id)arg1 pinValueChanged:(id)arg2 ;
-(void)pinView:(id)arg1 pinEntered:(id)arg2 ;
-(void)setPinView:(UIView*<PINEntryView>)arg1 ;
-(void)_setPlaysKeyboardClicks:(BOOL)arg1 ;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)setKeyboardIsNumeric:(BOOL)arg1 ;
-(id)text;
-(void)_setKeypadState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 ;
-(void)transitionToSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 showsOptions:(BOOL)arg4 ;
-(void)activateKeypadView;
-(void)deactivateKeypadView;
-(void)setKeyboardUserInteractionEnabled:(BOOL)arg1 ;
-(void)slideToNewPasscodeField:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 ;
-(void)delayForTextEntryAnimationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 ;
-(void)slideToNewPasscodeField:(BOOL)arg1 withKeyboard:(BOOL)arg2 ;
-(void)dealloc;
@end

