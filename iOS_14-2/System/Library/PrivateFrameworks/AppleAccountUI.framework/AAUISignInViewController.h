/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _showingPasswordCell;
	long long _akServiceType;
	id<AAUISignInViewControllerDelegate> _delegate;
	NSString* _username;

}

@property (nonatomic,retain) AAUIBuddyView * view; 
@property (assign,nonatomic) BOOL showingPasswordCell;                                                                 //@synthesize showingPasswordCell=_showingPasswordCell - In the implementation block
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
-(UILabel *)titleLabel;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)_tableHeaderView;
-(id)_passwordCell;
-(void)_updateConstraintsForTraitCollection:(id)arg1 ;
-(id)_tableFooterView;
-(void)_prewarmSignInFlowIfApplicable;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)_authorizationValueForAuthenticationResults:(id)arg1 ;
-(void)_endObservingTextFieldDidChangeNotifications;
-(id)_usernameCell;
-(void)setCanEditUsername:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)_endObservingSizeCategoryNotification;
-(void)_beginObservingTextFieldDidChangeNotifications;
-(void)_presentForgotAppleIDPane;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)_nextBarButtonItem;
-(id<AAUISignInViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_updateContentInsetWithHeight:(double)arg1 ;
-(id)_accountsHeaderView;
-(void)_repairCloudAccountWithAuthenticationResults:(id)arg1 ;
-(id)_stringForFooter;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)allowsAccountCreation;
-(void)_presentCreateAppleIDPane;
-(void)constrainView:(id)arg1 toFillHeaderFooterView:(id)arg2 ;
-(void)_setUsernameCellWaiting:(BOOL)arg1 ;
-(BOOL)_isPasswordFieldVisible;
-(long long)_akServiceType;
-(id)_passwordFieldIndexPath;
-(UILabel *)messageLabel;
-(void)_setEnabled:(BOOL)arg1 ;
-(NSString *)username;
-(void)_cancelButtonSelected:(id)arg1 ;
-(BOOL)_showOnlyPassword;
-(void)setDelegate:(id<AAUISignInViewControllerDelegate>)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_attemptAuthentication;
-(void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1 ;
-(id)authenticationContext;
-(void)_endObservingKeyboardWillShowNotifications;
-(void)_setPasswordFieldHidden:(BOOL)arg1 ;
-(BOOL)_hasValidCredentials;
-(void)viewDidLoad;
-(void)_attemptAuthenticationWithContext:(id)arg1 ;
-(id)_cancelBarButtonItem;
-(void)_nextButtonSelected:(id)arg1 ;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)_beginObservingKeyboardWillShowNotifications;
-(void)setShowServiceIcons:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_actionButtonSelected:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_beginObservingSizeCategoryNotification;
-(void)_setAkServiceType:(long long)arg1 ;
-(id)_tableView;
-(BOOL)_isGreenTeaCapable;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)showServiceIcons;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)_shouldAnticipatePiggybacking;
-(void)loadView;
-(void)_delegate_signInViewControllerDidCancel;
-(BOOL)canEditUsername;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)setAllowsAccountCreation:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_textFieldDidChange:(id)arg1 ;
-(BOOL)showingPasswordCell;
-(void)_cancelPasswordDelegateIfNecessary;
-(void)dealloc;
-(void)_setShouldAnticipatePiggybacking:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)setShowingPasswordCell:(BOOL)arg1 ;
@end

