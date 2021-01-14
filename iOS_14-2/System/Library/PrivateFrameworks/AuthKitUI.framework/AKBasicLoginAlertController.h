/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIAlertController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AKBasicLoginPasswordFieldProtocol.h>
#import <libobjc.A.dylib/AKSecondFactorCodeEntry.h>
#import <libobjc.A.dylib/AKBasicLoginAnimateProtocol.h>

@protocol NSObject, AKBasicLoginControllerDelegate;
@class NSString, AKBasicLoginActions, AKBasicLoginSecondFactorActions;

@interface AKBasicLoginAlertController : UIAlertController <UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKSecondFactorCodeEntry, AKBasicLoginAnimateProtocol> {

	long long _alertStyle;
	id<NSObject> _didEnterCodeObserver;
	NSString* _ak_username;
	NSString* _ak_password;
	NSString* _ak_title;
	NSString* _ak_reason;
	NSString* _ak_authenticateButtonTitle;
	NSString* _ak_cancelButtonTitle;
	NSString* _generatedCode;
	AKBasicLoginActions* _loginActions;
	AKBasicLoginSecondFactorActions* _secondFactorActions;
	id<AKBasicLoginControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSString * username;                                                //@synthesize ak_username=_ak_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                                //@synthesize ak_password=_ak_password - In the implementation block
@property (nonatomic,copy) NSString * authenticateTitle;                                       //@synthesize ak_title=_ak_title - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                  //@synthesize ak_reason=_ak_reason - In the implementation block
@property (nonatomic,copy) NSString * authenticateButtonTitle;                                 //@synthesize ak_authenticateButtonTitle=_ak_authenticateButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                       //@synthesize ak_cancelButtonTitle=_ak_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * generatedCode;                                           //@synthesize generatedCode=_generatedCode - In the implementation block
@property (assign,nonatomic) long long alertStyle; 
@property (nonatomic,copy) AKBasicLoginActions * loginActions;                                 //@synthesize loginActions=_loginActions - In the implementation block
@property (nonatomic,copy) AKBasicLoginSecondFactorActions * secondFactorActions;              //@synthesize secondFactorActions=_secondFactorActions - In the implementation block
@property (assign,nonatomic,__weak) id<AKBasicLoginControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id<AKBasicLoginControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)generatedCode;
-(NSString *)password;
-(NSString *)username;
-(void)setGeneratedCode:(NSString *)arg1 ;
-(void)setDelegate:(id<AKBasicLoginControllerDelegate>)arg1 ;
-(long long)alertStyle;
-(void)setPassword:(NSString *)arg1 ;
-(void)setAlertStyle:(long long)arg1 ;
-(NSString *)reason;
-(void)startAnimating;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(NSString *)cancelButtonTitle;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)stopAnimating;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(id)_passwordField;
-(void)setPasscodeFieldDisabled:(BOOL)arg1 ;
-(void)jiggleAView;
-(void)clearSecondFactorEntry;
-(AKBasicLoginActions *)loginActions;
-(void)clearPasswordField;
-(void)setLoginActions:(AKBasicLoginActions *)arg1 ;
-(id)initWithAlertStyle:(long long)arg1 ;
-(void)setSecondFactorActions:(AKBasicLoginSecondFactorActions *)arg1 ;
-(void)setAuthenticateButtonTitle:(NSString *)arg1 ;
-(void)setAuthenticateTitle:(NSString *)arg1 ;
-(void)_setupViewControllerForAlertStyle;
-(void)_endObservingDidEnterCodeNotifications;
-(void)_setupViewControllerForDefaultStyle;
-(void)_setupViewControllerForNonEditableUsernameFieldStyle;
-(void)_setupViewControllerForUserOrCreateAppleIDStyle;
-(void)_setupViewControllerForIForgotStyle;
-(void)_setupViewControllerForSecondFactorEntryStyle;
-(AKBasicLoginSecondFactorActions *)secondFactorActions;
-(NSString *)authenticateButtonTitle;
-(void)_syncUsernameAndPasswordPropertiesWithTextFieldContent;
-(id)_wrappedCancelAction;
-(NSString *)authenticateTitle;
-(void)_passwordFieldDidChange:(id)arg1 ;
-(void)_dismissAndShowiForgot:(id)arg1 ;
-(void)_setupAuthenticateAndCancelButtons;
-(void)_didEnterCode:(id)arg1 ;
-(void)_beginObservingDidEnterCodeNotifications;
@end

