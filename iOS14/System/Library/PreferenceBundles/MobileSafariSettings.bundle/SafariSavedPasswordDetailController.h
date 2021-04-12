/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@class PSTextFieldSpecifier, PSSpecifier, SFSafariViewController, WBSSavedPassword, NSArray, SafariSettingsFeatureManager, NSString;

@interface SafariSavedPasswordDetailController : PSListController <SFSafariViewControllerDelegate> {

	PSTextFieldSpecifier* _websiteSpecifier;
	PSTextFieldSpecifier* _usernameSpecifier;
	PSTextFieldSpecifier* _passwordSpecifier;
	PSSpecifier* _changePasswordButtonSpecifier;
	SFSafariViewController* _changePasswordSafariViewController;
	WBSSavedPassword* _savedPassword;
	NSArray* _reusedSavedPasswords;
	BOOL _editing;
	SafariSettingsFeatureManager* _featureManager;
	BOOL _showsChangePasswordControllerOnAppearance;

}

@property (assign,nonatomic) BOOL showsChangePasswordControllerOnAppearance;              //@synthesize showsChangePasswordControllerOnAppearance=_showsChangePasswordControllerOnAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
+(id)_valueOfSpecifier:(id)arg1 ;
+(id)_specifierWithName:(id)arg1 placeholder:(id)arg2 keyboardType:(long long)arg3 textChangeHandler:(/*^block*/id)arg4 ;
-(void)willBecomeActive;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)specifiers;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)safari_copyUserName:(id)arg1 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)_cancelEditing:(id)arg1 ;
-(void)safari_copyPassword:(id)arg1 ;
-(void)safari_sharePassword:(id)arg1 ;
-(BOOL)showsChangePasswordControllerOnAppearance;
-(void)_edit:(id)arg1 ;
-(void)setShowsChangePasswordControllerOnAppearance:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)willResignActive;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)_willHideUIMenuController:(id)arg1 ;
-(void)_setEditing:(BOOL)arg1 ;
-(void)_updateSpecifiers;
-(void)_updateRightBarButtonItem;
-(void)_endEditing:(id)arg1 ;
-(void)_updateDoneButtonForWebsite:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(void)_sharePassword:(id)arg1 fromCell:(id)arg2 ;
-(void)_refreshSpecifiers;
-(id)_warningFooterText;
-(void)_changePassword:(id)arg1 ;
-(id)_sharePasswordMenuItem;
-(BOOL)_isShowingWeakOrReusedPassword;
-(BOOL)_savedUserIsEmpty;
-(BOOL)_savedPasswordIsEmpty;
-(BOOL)_isSpecifierForAutoFillItem:(id)arg1 ;
@end

