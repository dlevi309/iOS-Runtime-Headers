/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariAutoFillListController.h>
#import <libobjc.A.dylib/_SFEditablePasswordTableViewControllerDelegate.h>
#import <libobjc.A.dylib/PSListControllerURLHandler.h>
#import <libobjc.A.dylib/_SFSettingsAuthenticationRequiring.h>

@class NSString, _SFEditablePasswordTableViewController, NSDictionary, _SFSiteMetadataManager, WBSAutoFillQuirksManager, _UIContentUnavailableView, UIViewController, _SFPasswordManagerLockedView;

@interface SafariSavedPasswordsController : SafariAutoFillListController <_SFEditablePasswordTableViewControllerDelegate, PSListControllerURLHandler, _SFSettingsAuthenticationRequiring> {

	_SFEditablePasswordTableViewController* _editablePasswordTableViewController;
	NSDictionary* _initialResourceDictionary;
	_SFSiteMetadataManager* _siteMetadataManager;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	_UIContentUnavailableView* _contentUnavailableView;
	UIViewController* _lockedTopViewController;
	_SFPasswordManagerLockedView* _passwordManagerLockedView;
	NSString* _lockedViewControllerTitle;
	BOOL _hasBeenAuthenticated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
@property (nonatomic,readonly) BOOL showsAuthenticationPromptAsTitle; 
@property (assign,nonatomic) BOOL hasBeenAuthenticated;                            //@synthesize hasBeenAuthenticated=_hasBeenAuthenticated - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)hideContentUnavailableViewForEditablePasswordTableViewController:(id)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)hasBeenAuthenticated;
-(void)handleResourceDictionaryWhenAlreadyPresented:(id)arg1 ;
-(void)setHasBeenAuthenticated:(BOOL)arg1 ;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;
-(void)viewDidLoad;
-(void)_applicationDidEnterForeground:(id)arg1 ;
-(void)editablePasswordTableViewController:(id)arg1 showContentUnavailableViewForSearchQuery:(id)arg2 ;
-(BOOL)editablePasswordTableViewControllerShouldShowAutoFillItem:(id)arg1 ;
-(BOOL)editablePasswordTableViewControllerShouldShowSecurityRecommendationsItem:(id)arg1 ;
-(void)handleAutoFillDrillInForEditablePasswordTableViewController:(id)arg1 ;
-(id)contentScrollView;
-(BOOL)canBeShownFromSuspendedState;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_setUpAutoFillQuirksManager;
-(void)_authenticateSoon;
-(void)_processInitialResourceDictionary;
@end

