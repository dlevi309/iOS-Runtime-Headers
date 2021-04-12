/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKBaseSignInViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>

@class NSString, AKAppleIDAuthenticationInAppContext, UIColor, UIView, AKTextField, UIButton, UIActivityIndicatorView;

@interface AKInlineSignInViewController : AKBaseSignInViewController <UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate> {

	BOOL _usesDarkMode;
	BOOL _usesVibrancy;
	long long _blurEffectStyle;
	NSString* _secondaryButtonTitle;
	NSString* _tertiaryButtonTitle;
	AKAppleIDAuthenticationInAppContext* _context;
	/*^block*/id _passwordRequiredCompletion;
	BOOL _wantsAuthenticationProgress;
	NSString* _primaryButtonTitle;
	UIColor* _fieldBackgroundColor;
	UIView* _loginFieldsContainer;
	AKTextField* _appleIDField;
	AKTextField* _passwordField;
	UIButton* _signInButton;
	UIButton* _iforgotButton;
	UIButton* _createAppleIDButton;
	UIActivityIndicatorView* _spinner;

}

@property (retain) UIView * loginFieldsContainer;                         //@synthesize loginFieldsContainer=_loginFieldsContainer - In the implementation block
@property (retain) AKTextField * appleIDField;                            //@synthesize appleIDField=_appleIDField - In the implementation block
@property (retain) AKTextField * passwordField;                           //@synthesize passwordField=_passwordField - In the implementation block
@property (retain) UIButton * signInButton;                               //@synthesize signInButton=_signInButton - In the implementation block
@property (retain) UIButton * iforgotButton;                              //@synthesize iforgotButton=_iforgotButton - In the implementation block
@property (retain) UIButton * createAppleIDButton;                        //@synthesize createAppleIDButton=_createAppleIDButton - In the implementation block
@property (retain) UIActivityIndicatorView * spinner;                     //@synthesize spinner=_spinner - In the implementation block
@property (assign) BOOL wantsAuthenticationProgress;                      //@synthesize wantsAuthenticationProgress=_wantsAuthenticationProgress - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle; 
@property (assign,nonatomic) BOOL usesVibrancy; 
@property (readonly) NSString * primaryButtonTitle;                       //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (copy) NSString * secondaryButtonTitle; 
@property (copy) NSString * tertiaryButtonTitle; 
@property (nonatomic,retain) UIColor * fieldBackgroundColor;              //@synthesize fieldBackgroundColor=_fieldBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)startAnimating;
-(void)stopAnimating;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(AKTextField *)passwordField;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)_updateFonts:(id)arg1 ;
-(void)_setPasswordFieldHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)usesDarkMode;
-(void)setUsesDarkMode:(BOOL)arg1 ;
-(UIButton *)iforgotButton;
-(UIButton *)createAppleIDButton;
-(void)iForgotButtonWasTapped:(id)arg1 ;
-(void)createAppleIDButtonWasTapped:(id)arg1 ;
-(void)_prefillAuthFields;
-(void)_updateSignInFieldStatuses;
-(UIButton *)signInButton;
-(void)signInButtonWasTapped:(id)arg1 ;
-(AKTextField *)appleIDField;
-(void)_appleIDTextFieldDidChange:(id)arg1 ;
-(void)_passwordTextFieldDidChange:(id)arg1 ;
-(void)_updateVibrancyAndBlurInTextFields;
-(void)_updatePlaceholderIfNeeded;
-(void)_updateSignInButtonState;
-(UIColor *)fieldBackgroundColor;
-(void)setUsesVibrancy:(BOOL)arg1 ;
-(void)setFieldBackgroundColor:(UIColor *)arg1 ;
-(void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1 ;
-(BOOL)wantsAuthenticationProgress;
-(NSString *)secondaryButtonTitle;
-(void)setSecondaryButtonTitle:(NSString *)arg1 ;
-(NSString *)tertiaryButtonTitle;
-(void)setTertiaryButtonTitle:(NSString *)arg1 ;
-(void)setSecondaryButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTertiaryButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)usesVibrancy;
-(void)setWantsAuthenticationProgress:(BOOL)arg1 ;
-(NSString *)primaryButtonTitle;
-(UIView *)loginFieldsContainer;
-(void)setLoginFieldsContainer:(UIView *)arg1 ;
-(void)setAppleIDField:(AKTextField *)arg1 ;
-(void)setPasswordField:(AKTextField *)arg1 ;
-(void)setSignInButton:(UIButton *)arg1 ;
-(void)setIforgotButton:(UIButton *)arg1 ;
-(void)setCreateAppleIDButton:(UIButton *)arg1 ;
@end

