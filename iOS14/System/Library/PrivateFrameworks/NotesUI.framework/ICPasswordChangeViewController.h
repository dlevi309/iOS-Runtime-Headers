/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ICScrollViewKeyboardResizerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class ICAccount, NSArray, UIView, ICScrollViewKeyboardResizer, UIScrollView, ICPasswordUtilities, UILabel, ICLearnMoreTextView, UITextField, UISwitch, UIBarButtonItem, NSLayoutConstraint, NSString;

@interface ICPasswordChangeViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate> {

	BOOL _isSetupForChangePassword;
	BOOL _isInSettings;
	BOOL _isSettingInitialPassword;
	BOOL _didAttemptToSubmitWithoutHint;
	BOOL _usingLargerAXSizes;
	ICAccount* _account;
	NSArray* _textBackgroundViews;
	UIView* _headerBackground;
	ICScrollViewKeyboardResizer* _scrollViewResizer;
	UIScrollView* _scrollView;
	ICPasswordUtilities* _passwordUtilities;
	UILabel* _headerLabel;
	UILabel* _oldPasswordLabel;
	UILabel* _passwordLabel;
	UILabel* _verifyLabel;
	UILabel* _hintLabel;
	UILabel* _warningLabel;
	ICLearnMoreTextView* _disclaimerLabel;
	UITextField* _oldPasswordTextField;
	UITextField* _passwordTextField;
	UITextField* _verifyTextField;
	UITextField* _hintTextField;
	NSArray* _orderedTextFields;
	UILabel* _useBiometricIDLabel;
	UISwitch* _useBiometricIDSwitch;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	NSLayoutConstraint* _oldPasswordHeightConstraint;
	NSLayoutConstraint* _disclaimerHeightConstraint;
	NSLayoutConstraint* _biometricIDZeroHeightConstraint;
	NSLayoutConstraint* _biometricIDTopConstraint;
	long long _incorrectPasswordAttempts;
	UIView* _biometricIDContainer;
	/*^block*/id _completionHandler;
	NSArray* _defaultConstraints;
	NSArray* _alternateConstraintsForAXLargerTextSizes;

}

@property (nonatomic,retain) ICAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * textBackgroundViews;                                            //@synthesize textBackgroundViews=_textBackgroundViews - In the implementation block
@property (assign,nonatomic,__weak) UIView * headerBackground;                                         //@synthesize headerBackground=_headerBackground - In the implementation block
@property (nonatomic,retain) ICScrollViewKeyboardResizer * scrollViewResizer;                          //@synthesize scrollViewResizer=_scrollViewResizer - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) ICPasswordUtilities * passwordUtilities;                                  //@synthesize passwordUtilities=_passwordUtilities - In the implementation block
@property (assign,nonatomic,__weak) UILabel * headerLabel;                                             //@synthesize headerLabel=_headerLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * oldPasswordLabel;                                        //@synthesize oldPasswordLabel=_oldPasswordLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * passwordLabel;                                           //@synthesize passwordLabel=_passwordLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * verifyLabel;                                             //@synthesize verifyLabel=_verifyLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * hintLabel;                                               //@synthesize hintLabel=_hintLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * warningLabel;                                            //@synthesize warningLabel=_warningLabel - In the implementation block
@property (assign,nonatomic,__weak) ICLearnMoreTextView * disclaimerLabel;                             //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (assign,nonatomic,__weak) UITextField * oldPasswordTextField;                                //@synthesize oldPasswordTextField=_oldPasswordTextField - In the implementation block
@property (assign,nonatomic,__weak) UITextField * passwordTextField;                                   //@synthesize passwordTextField=_passwordTextField - In the implementation block
@property (assign,nonatomic,__weak) UITextField * verifyTextField;                                     //@synthesize verifyTextField=_verifyTextField - In the implementation block
@property (assign,nonatomic,__weak) UITextField * hintTextField;                                       //@synthesize hintTextField=_hintTextField - In the implementation block
@property (nonatomic,retain) NSArray * orderedTextFields;                                              //@synthesize orderedTextFields=_orderedTextFields - In the implementation block
@property (assign,nonatomic,__weak) UILabel * useBiometricIDLabel;                                     //@synthesize useBiometricIDLabel=_useBiometricIDLabel - In the implementation block
@property (assign,nonatomic,__weak) UISwitch * useBiometricIDSwitch;                                   //@synthesize useBiometricIDSwitch=_useBiometricIDSwitch - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * doneButton;                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * cancelButton;                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * oldPasswordHeightConstraint;                  //@synthesize oldPasswordHeightConstraint=_oldPasswordHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * disclaimerHeightConstraint;                   //@synthesize disclaimerHeightConstraint=_disclaimerHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * biometricIDZeroHeightConstraint;              //@synthesize biometricIDZeroHeightConstraint=_biometricIDZeroHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * biometricIDTopConstraint;                     //@synthesize biometricIDTopConstraint=_biometricIDTopConstraint - In the implementation block
@property (assign,nonatomic) BOOL isSetupForChangePassword;                                            //@synthesize isSetupForChangePassword=_isSetupForChangePassword - In the implementation block
@property (assign,nonatomic) long long incorrectPasswordAttempts;                                      //@synthesize incorrectPasswordAttempts=_incorrectPasswordAttempts - In the implementation block
@property (assign,nonatomic,__weak) UIView * biometricIDContainer;                                     //@synthesize biometricIDContainer=_biometricIDContainer - In the implementation block
@property (nonatomic,readonly) BOOL passwordAndVerifyTextFieldsMatch; 
@property (assign,nonatomic) BOOL didAttemptToSubmitWithoutHint;                                       //@synthesize didAttemptToSubmitWithoutHint=_didAttemptToSubmitWithoutHint - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL usingLargerAXSizes;                                                  //@synthesize usingLargerAXSizes=_usingLargerAXSizes - In the implementation block
@property (nonatomic,retain) NSArray * defaultConstraints;                                             //@synthesize defaultConstraints=_defaultConstraints - In the implementation block
@property (nonatomic,retain) NSArray * alternateConstraintsForAXLargerTextSizes;                       //@synthesize alternateConstraintsForAXLargerTextSizes=_alternateConstraintsForAXLargerTextSizes - In the implementation block
@property (assign,nonatomic) BOOL isInSettings;                                                        //@synthesize isInSettings=_isInSettings - In the implementation block
@property (assign,nonatomic) BOOL isSettingInitialPassword;                                            //@synthesize isSettingInitialPassword=_isSettingInitialPassword - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIBarButtonItem *)doneButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(ICAccount *)account;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)setAccount:(ICAccount *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)doneButtonPressed:(id)arg1 ;
-(void)setHintLabel:(UILabel *)arg1 ;
-(id)completionHandler;
-(void)setDefaultConstraints:(NSArray *)arg1 ;
-(NSArray *)defaultConstraints;
-(void)setUpNavigationBar;
-(BOOL)validateInput;
-(void)updateFonts;
-(UILabel *)hintLabel;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(ICLearnMoreTextView *)disclaimerLabel;
-(void)setDisclaimerLabel:(ICLearnMoreTextView *)arg1 ;
-(UILabel *)warningLabel;
-(void)setWarningLabel:(UILabel *)arg1 ;
-(double)consumedBottomAreaForResizer:(id)arg1 ;
-(id)keyboardResizerScrollView;
-(ICScrollViewKeyboardResizer *)scrollViewResizer;
-(void)resetTextFields;
-(void)setScrollViewResizer:(ICScrollViewKeyboardResizer *)arg1 ;
-(UITextField *)oldPasswordTextField;
-(UITextField *)passwordTextField;
-(UITextField *)verifyTextField;
-(UITextField *)hintTextField;
-(void)setOrderedTextFields:(NSArray *)arg1 ;
-(NSArray *)orderedTextFields;
-(void)setUsingLargerAXSizes:(BOOL)arg1 ;
-(UILabel *)useBiometricIDLabel;
-(UILabel *)passwordLabel;
-(UILabel *)oldPasswordLabel;
-(UILabel *)verifyLabel;
-(NSArray *)textBackgroundViews;
-(BOOL)isSetupForChangePassword;
-(NSLayoutConstraint *)oldPasswordHeightConstraint;
-(BOOL)isInSettings;
-(UIView *)biometricIDContainer;
-(NSLayoutConstraint *)biometricIDZeroHeightConstraint;
-(NSLayoutConstraint *)biometricIDTopConstraint;
-(UISwitch *)useBiometricIDSwitch;
-(id)disclaimerAttributedString;
-(NSLayoutConstraint *)disclaimerHeightConstraint;
-(void)showOldPasswordIsNotCorrectAlert;
-(void)showEnterAPasswordAlert;
-(BOOL)passwordAndVerifyTextFieldsMatch;
-(void)showPasswordsDoNotMatchAlert;
-(BOOL)didAttemptToSubmitWithoutHint;
-(void)setDidAttemptToSubmitWithoutHint:(BOOL)arg1 ;
-(void)dismissKeyboardIfNeeded;
-(void)showUnableToSetPasswordAlert;
-(BOOL)isSettingInitialPassword;
-(long long)incorrectPasswordAttempts;
-(void)setIncorrectPasswordAttempts:(long long)arg1 ;
-(void)showSimpleAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)setIsSettingInitialPassword:(BOOL)arg1 ;
-(void)setIsSetupForChangePassword:(BOOL)arg1 ;
-(void)setupAccessibility;
-(void)setUpForAddingPasswordWithAccount:(id)arg1 ;
-(void)setUpForChangePasswordWithAccount:(id)arg1 ;
-(void)setIsInSettings:(BOOL)arg1 ;
-(void)setTextBackgroundViews:(NSArray *)arg1 ;
-(UIView *)headerBackground;
-(void)setHeaderBackground:(UIView *)arg1 ;
-(ICPasswordUtilities *)passwordUtilities;
-(void)setPasswordUtilities:(ICPasswordUtilities *)arg1 ;
-(void)setOldPasswordLabel:(UILabel *)arg1 ;
-(void)setPasswordLabel:(UILabel *)arg1 ;
-(void)setVerifyLabel:(UILabel *)arg1 ;
-(void)setOldPasswordTextField:(UITextField *)arg1 ;
-(void)setPasswordTextField:(UITextField *)arg1 ;
-(void)setVerifyTextField:(UITextField *)arg1 ;
-(void)setHintTextField:(UITextField *)arg1 ;
-(void)setUseBiometricIDLabel:(UILabel *)arg1 ;
-(void)setUseBiometricIDSwitch:(UISwitch *)arg1 ;
-(void)setOldPasswordHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDisclaimerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBiometricIDZeroHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBiometricIDTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBiometricIDContainer:(UIView *)arg1 ;
-(BOOL)usingLargerAXSizes;
-(NSArray *)alternateConstraintsForAXLargerTextSizes;
-(void)setAlternateConstraintsForAXLargerTextSizes:(NSArray *)arg1 ;
@end

