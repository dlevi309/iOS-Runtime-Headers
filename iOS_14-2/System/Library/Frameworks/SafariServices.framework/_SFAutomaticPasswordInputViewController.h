/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIInputViewController.h>
#import <libobjc.A.dylib/SFAutomaticPasswordInputViewDelegate.h>
#import <libobjc.A.dylib/SFAutomaticPasswordInputViewSizing.h>

@class SFAutomaticPasswordInputView, NSString, NSLayoutConstraint;

@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing> {

	SFAutomaticPasswordInputView* _inputView;
	NSString* _password;
	CGSize _portraitKeyboardSize;
	CGSize _landscapeKeyboardSize;
	NSLayoutConstraint* _heightConstraint;
	long long _currentInterfaceOrientation;
	long long _keyboardType;
	BOOL _logGeneratedPasswordAcceptedImplicitly;
	NSString* _autoFillContextProtocolObjectUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithPassword:(id)arg1 keyboardType:(long long)arg2 ;
-(void)dismissKeyboardPreservingFirstResponderIfNecessary;
-(void)_updateKeyboardHeight;
-(BOOL)_inputViewControllerShouldDirectlyInsertPassword;
-(void)_dismissKeyboard:(id)arg1 ;
-(void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
-(CGSize)_currentKeyboardSize;
-(void)_postButtonPressedNotificationForButton:(long long)arg1 ;
-(void)inputViewControllerDidSelectUseStrongPassword:(id)arg1 ;
-(void)inputViewControllerDidSelectUseCustomPassword:(id)arg1 ;
-(CGSize)intrinsicContentSizeForInputView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end

