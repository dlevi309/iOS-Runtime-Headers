/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <AuthKitUI/AKBaseSignInViewController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextAlertDelegate.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, UITextField, AKRoundedButton, UIButton, UIView, UIColor, NSString;

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate> {

	BOOL _hideTitle;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UITextField* _passwordField;
	AKRoundedButton* _signInButton;
	UIButton* _iForgotButton;
	UIView* _containerView;
	UIColor* _backgroundColor;
	NSString* _customBodyText;
	NSString* _customButtonTitle;

}

@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                         //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;                 //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) AKRoundedButton * signInButton;              //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIButton * iForgotButton;                    //@synthesize iForgotButton=_iForgotButton - In the implementation block
@property (nonatomic,retain) UIView * containerView;                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                              //@synthesize hideTitle=_hideTitle - In the implementation block
@property (nonatomic,retain) NSString * customBodyText;                   //@synthesize customBodyText=_customBodyText - In the implementation block
@property (nonatomic,retain) NSString * customButtonTitle;                //@synthesize customButtonTitle=_customButtonTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UITextField *)passwordField;
-(UIColor *)backgroundColor;
-(void)setCustomButtonTitle:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(UIView *)containerView;
-(void)setHideTitle:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)hideTitle;
-(UILabel *)bodyLabel;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)startAnimating;
-(id)_buttonTitle;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)stopAnimating;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_setupViews;
-(void)_createViews;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyText;
-(NSString *)customButtonTitle;
-(AKRoundedButton *)signInButton;
-(void)setPasswordField:(UITextField *)arg1 ;
-(BOOL)_isSignInAllowed;
-(void)setCustomBodyText:(NSString *)arg1 ;
-(void)setSignInButton:(AKRoundedButton *)arg1 ;
-(UIButton *)iForgotButton;
-(void)_signInButtonTapped:(id)arg1 ;
-(void)setIForgotButton:(UIButton *)arg1 ;
-(void)_passwordRecoveryButtonWasTapped:(id)arg1 ;
-(void)displayAlertForContext:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateViewConstraints;
-(NSString *)customBodyText;
@end

