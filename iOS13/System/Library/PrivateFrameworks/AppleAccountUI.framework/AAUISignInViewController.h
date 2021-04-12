/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol AAUISignInViewControllerDelegate;
@class UITableView, UITableViewCell, UITableViewHeaderFooterView, AAUIHeaderView, NSArray, UMUserPersona, UMUserPersonaContext, NSString, AAUIBuddyView, UILabel;

@interface AAUISignInViewController : UIViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	UITableView* _tableView;
	UITableViewCell* _usernameCell;
	UITableViewCell* _passwordCell;
	UITableViewHeaderFooterView* _tableHeaderView;
	AAUIHeaderView* _accountsHeaderView;
	UITableViewHeaderFooterView* _tableFooterView;
	NSArray* _compactConstraints;
	NSArray* _expandedConstraints;
	/*^block*/id _passwordHandler;
	UMUserPersona* _originalPersona;
	UMUserPersonaContext* _originalPersonaContext;
	BOOL _shouldAnticipatePiggybacking;
	BOOL _allowsAccountCreation;
	BOOL _showServiceIcons;
	BOOL _canEditUsername;
	long long _akServiceType;
	id<AAUISignInViewControllerDelegate> _delegate;
	NSString* _username;

}

@property (nonatomic,retain) AAUIBuddyView * view; 
@property (assign,setter=_setShouldAnticipatePiggybacking:,nonatomic) BOOL _shouldAnticipatePiggybacking;              //@synthesize shouldAnticipatePiggybacking=_shouldAnticipatePiggybacking - In the implementation block
@property (assign,setter=_setAkServiceType:,nonatomic) long long _akServiceType;                                       //@synthesize akServiceType=_akServiceType - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISignInViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsAccountCreation;                                                               //@synthesize allowsAccountCreation=_allowsAccountCreation - In the implementation block
@property (assign,nonatomic) BOOL showServiceIcons;                                                                    //@synthesize showServiceIcons=_showServiceIcons - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * messageLabel; 
@property (nonatomic,copy) NSString * username;                                                                        //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL canEditUsername;                                                                     //@synthesize canEditUsername=_canEditUsername - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)phoneNumberSupportedWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<AAUISignInViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AAUISignInViewControllerDelegate>)arg1 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)loadView;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_cancelBarButtonItem;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)_tableView;
-(id)_tableHeaderView;
-(id)_tableFooterView;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)_hasValidCredentials;
-(void)_cancelPasswordDelegateIfNecessary;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(id)authenticationContext;
-(UILabel *)messageLabel;
-(void)_cancelButtonSelected:(id)arg1 ;
-(id)_usernameCell;
-(id)_passwordCell;
-(void)_textFieldDidChange:(id)arg1 ;
-(id)_nextBarButtonItem;
-(void)_updateConstraintsForTraitCollection:(id)arg1 ;
-(void)_beginObservingTextFieldDidChangeNotifications;
-(void)_beginObservingKeyboardWillShowNotifications;
-(void)_beginObservingSizeCategoryNotification;
-(void)_updateContentInsetWithHeight:(double)arg1 ;
-(void)_endObservingSizeCategoryNotification;
-(void)_endObservingTextFieldDidChangeNotifications;
-(void)_endObservingKeyboardWillShowNotifications;
-(long long)_akServiceType;
-(BOOL)_shouldAnticipatePiggybacking;
-(id)_accountsHeaderView;
-(void)_nextButtonSelected:(id)arg1 ;
-(void)constrainView:(id)arg1 toFillHeaderFooterView:(id)arg2 ;
-(BOOL)allowsAccountCreation;
-(void)_actionButtonSelected:(id)arg1 ;
-(BOOL)showServiceIcons;
-(id)_stringForFooter;
-(BOOL)_showOnlyPassword;
-(BOOL)_isGreenTeaCapable;
-(void)_setUsernameCellWaiting:(BOOL)arg1 ;
-(void)_delegate_signInViewControllerDidCancel;
-(void)_attemptAuthentication;
-(void)_prewarmSignInFlowIfApplicable;
-(void)_presentForgotAppleIDPane;
-(void)_presentCreateAppleIDPane;
-(void)_attemptAuthenticationWithContext:(id)arg1 ;
-(BOOL)_isPasswordFieldVisible;
-(void)_repairCloudAccountWithAuthenticationResults:(id)arg1 ;
-(void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1 ;
-(id)_authorizationValueForAuthenticationResults:(id)arg1 ;
-(id)_passwordFieldIndexPath;
-(void)_setPasswordFieldHidden:(BOOL)arg1 ;
-(void)_setAkServiceType:(long long)arg1 ;
-(void)_setShouldAnticipatePiggybacking:(BOOL)arg1 ;
-(void)setAllowsAccountCreation:(BOOL)arg1 ;
-(void)setShowServiceIcons:(BOOL)arg1 ;
-(BOOL)canEditUsername;
-(void)setCanEditUsername:(BOOL)arg1 ;
@end

