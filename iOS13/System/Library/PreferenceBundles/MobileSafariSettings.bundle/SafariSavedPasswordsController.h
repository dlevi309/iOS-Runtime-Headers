/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <MobileSafariSettings/SafariAutoFillListController.h>
#import <libobjc.A.dylib/PSListControllerURLHandler.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/_SFPasswordIconControllerDelegate.h>
#import <libobjc.A.dylib/_SFSettingsAuthenticationRequiring.h>

@class NSString, SFSharablePassword, NSMutableArray, UISearchController, UIBarButtonItem, _SFPasswordIconController, NSCountedSet, _UIContentUnavailableView, NSDictionary, WBSSavedPasswordAuditor, WBSPasswordEvaluator, _ASIncomingCallObserver, _SFSiteMetadataManager, WBSAutoFillQuirksManager;

@interface SafariSavedPasswordsController : SafariAutoFillListController <PSListControllerURLHandler, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, _SFPasswordIconControllerDelegate, _SFSettingsAuthenticationRequiring> {

	NSString* _searchPattern;
	NSString* _queryBundleID;
	SFSharablePassword* _receivedSharablePasswordRequiringPromptBeforeSaving;
	unsigned long long _matchingPasswordCount;
	NSMutableArray* _specifiersForAllSavedPasswords;
	UISearchController* _searchController;
	UIBarButtonItem* _addPasswordToolbarItem;
	UIBarButtonItem* _deleteToolbarItem;
	UIBarButtonItem* _cancelToolbarItem;
	UIBarButtonItem* _editToolbarItem;
	UIBarButtonItem* _rightToolbarItem;
	BOOL _changingPasswordStore;
	_SFPasswordIconController* _iconController;
	NSCountedSet* _visibleDomains;
	NSMutableArray* _specifiersBySection;
	BOOL _shouldShowSectionHeaders;
	_UIContentUnavailableView* _contentUnavailableView;
	NSDictionary* _bundleIDToAssociatedDomains;
	NSDictionary* _displayNameToBundleIDs;
	WBSSavedPasswordAuditor* _savedPasswordAuditor;
	WBSPasswordEvaluator* _passwordEvaluator;
	_ASIncomingCallObserver* _callObserver;
	NSDictionary* _initialResourceDictionary;
	_SFSiteMetadataManager* _siteMetadataManager;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	BOOL _hasBeenAuthenticated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
@property (nonatomic,readonly) BOOL showsAuthenticationPromptAsTitle; 
@property (assign,nonatomic) BOOL hasBeenAuthenticated;                            //@synthesize hasBeenAuthenticated=_hasBeenAuthenticated - In the implementation block
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)positionForBar:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)_setContentInset:(double)arg1 ;
-(BOOL)_canAddItems;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(long long)tableViewStyle;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(Class)tableViewClass;
-(id)selectSpecifier:(id)arg1 ;
-(void)handleResourceDictionaryWhenAlreadyPresented:(id)arg1 ;
-(void)_updateIconForDomain:(id)arg1 forCell:(id)arg2 ;
-(void)iconDidUpdateForDomain:(id)arg1 iconController:(id)arg2 ;
-(id)_sharablePasswordFromResourceDictionary:(id)arg1 ;
-(id)_savePasswordIfPossibleAndGetController:(id)arg1 ;
-(id)additionalViewControllersToPushHandlingURLResourceDictionary:(id)arg1 didAuthenticate:(BOOL)arg2 ;
-(id)_addBarButtonItem;
-(void)setHasBeenAuthenticated:(BOOL)arg1 ;
-(BOOL)hasBeenAuthenticated;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;
-(id)_deleteToolbarItem;
-(void)_setUpAutoFillQuirksManager;
-(id)_editToolbarItem;
-(void)_updateToolbarItemsAnimated:(BOOL)arg1 ;
-(void)_buildSharedWebCredentialsMap;
-(void)passwordStoreDidChange;
-(void)_authenticateSoon;
-(void)_showShareablePasswordPromptIfNeeded;
-(void)_setInitialSearchTextWithResourceDictionary:(id)arg1 ;
-(void)_showConflictAlertForPassword:(id)arg1 ;
-(void)_addPasswordButtonTapped;
-(id)_specifiersForAllSavedPasswords;
-(void)_hideContentUnavailableView;
-(void)_showContentUnavailableView;
-(BOOL)_autoFillWhiteListExists;
-(id)_cancelToolbarItem;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)updateDeleteButton;
-(id)_passwordControllerForQuery:(id)arg1 queryBundleID:(id)arg2 authenticationRequirementsMet:(BOOL)arg3 ;
-(id)_specifierForUser:(id)arg1 highLevelDomain:(id)arg2 ;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
@end

