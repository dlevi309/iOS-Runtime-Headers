/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKBaseSignInViewController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextAlertDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, UITextField, AKRoundedButton, UIView, UIColor, NSString;

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate> {

	BOOL _hideTitle;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UITextField* _passwordField;
	AKRoundedButton* _signInButton;
	UIView* _containerView;
	UIColor* _backgroundColor;
	NSString* _customBodyText;
	NSString* _customButtonTitle;

}

@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                         //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;                 //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) AKRoundedButton * signInButton;              //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIView * containerView;                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                              //@synthesize hideTitle=_hideTitle - In the implementation block
@property (nonatomic,retain) NSString * customBodyText;                   //@synthesize customBodyText=_customBodyText - In the implementation block
@property (nonatomic,retain) NSString * customButtonTitle;                //@synthesize customButtonTitle=_customButtonTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UILabel *)titleLabel;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)resignFirstResponder;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)_buttonTitle;
-(void)startAnimating;
-(void)stopAnimating;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(UITextField *)passwordField;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)_setupViews;
-(id)_bodyText;
-(void)_createViews;
-(void)_setupConstraints;
-(BOOL)_isSignInAllowed;
-(void)setHideTitle:(BOOL)arg1 ;
-(void)setCustomBodyText:(NSString *)arg1 ;
-(void)setCustomButtonTitle:(NSString *)arg1 ;
-(AKRoundedButton *)signInButton;
-(void)setPasswordField:(UITextField *)arg1 ;
-(void)setSignInButton:(AKRoundedButton *)arg1 ;
-(void)_passwordRecoveryButtonWasTapped:(id)arg1 ;
-(void)_passwordFieldDidChange:(id)arg1 ;
-(void)_signInButtonTapped:(id)arg1 ;
-(BOOL)_shouldShowForgotGlyph;
-(void)displayAlertForContext:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateViewConstraints;
-(BOOL)hideTitle;
-(NSString *)customBodyText;
-(NSString *)customButtonTitle;
@end

