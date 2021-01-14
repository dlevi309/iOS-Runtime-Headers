/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFPasswordTableViewController.h>
#import <libobjc.A.dylib/SFAddPasswordViewControllerDelegate.h>
#import <libobjc.A.dylib/SFPasswordDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_ASAccountAuthenticationModificationExtensionManagerObserver.h>

@protocol _SFEditablePasswordTableViewControllerDelegate;
@class WBSSavedPassword, NSMutableArray, NSArray, UIBarButtonItem, WBSAutoFillQuirksManager, WBSSavedPasswordStore, _SFSiteMetadataManager, SFSharablePassword, WBSPasswordWarningManager, WBSPasswordGenerationManager, SFAutoFillFeatureManager, NSString, _SFSecurityRecommendationsDrillInTableViewCell, UITableViewCell;

@interface _SFEditablePasswordTableViewController : _SFPasswordTableViewController <SFAddPasswordViewControllerDelegate, SFPasswordDetailViewControllerDelegate, SFCredentialProviderExtensionManagerObserver, _ASAccountAuthenticationModificationExtensionManagerObserver> {

	NSMutableArray* _cachedSavedPasswords;
	NSMutableArray* _cellDataBySection;
	NSArray* _allPasswordCellData;
	NSArray* _cellDataMatchingSearchPattern;
	UIBarButtonItem* _addNavigationBarItem;
	UIBarButtonItem* _cancelNavigationBarItem;
	UIBarButtonItem* _deleteNavigationBarItem;
	UIBarButtonItem* _editNavigationBarItem;
	UIBarButtonItem* _cancelToolbarItem;
	UIBarButtonItem* _deleteToolbarItem;
	UIBarButtonItem* _editToolbarItem;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	WBSSavedPasswordStore* _passwordStore;
	unsigned long long _persona;
	_SFSiteMetadataManager* _siteMetadataManager;
	SFSharablePassword* _receivedSharablePasswordRequiringPromptBeforeSaving;
	WBSPasswordWarningManager* _passwordWarningManager;
	BOOL _hasBeenAuthenticated;
	BOOL _hasEverShownSectionHeaders;
	WBSPasswordGenerationManager* _passwordGenerator;
	SFAutoFillFeatureManager* _autoFillFeatureManager;
	BOOL _hasCredentialProviderExtensions;
	BOOL _userIsEditingCellInTableView;
	NSString* _securityRecommendationsSubtitleText;
	BOOL _isFirstWillAppear;
	BOOL _hasLoadedSecurityRecommendations;
	_SFSecurityRecommendationsDrillInTableViewCell* _securityRecommendationsCell;
	UITableViewCell* _autoFillPasswordsCell;
	id<_SFEditablePasswordTableViewControllerDelegate> _delegate;
	WBSSavedPassword* _passwordToRemoveAfterCompletedUpgradeInDetailView;

}

@property (assign,nonatomic,__weak) id<_SFEditablePasswordTableViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WBSSavedPassword * passwordToRemoveAfterCompletedUpgradeInDetailView;              //@synthesize passwordToRemoveAfterCompletedUpgradeInDetailView=_passwordToRemoveAfterCompletedUpgradeInDetailView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationItem;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(BOOL)_shouldUseInsetGroupedStyle;
-(void)_reloadPasswordsAndTableViewData;
-(void)_passwordStoreDidChange;
-(id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 ;
-(id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 persona:(unsigned long long)arg3 ;
-(id)additionalViewControllersToPushHandlingURLResourceDictionary:(id)arg1 didAuthenticate:(BOOL)arg2 ;
-(void)showConflictAlertForSharablePasswordIfNecessary;
-(void)updateUserAuthenticationState:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<_SFEditablePasswordTableViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)_sectionForSectionIndex:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_updateCredentialProviderExtensionStatus;
-(BOOL)_shouldShowSecurityRecommendationsItem;
-(void)_updateSecurityRecommendationsSubtitleTextWithWarnings:(id)arg1 ;
-(void)_reloadSecurityRecommendationsSection;
-(void)_findAndRemoveEntryForCompletedDetailViewUpgrade;
-(void)_addNavigationBarItemTapped:(id)arg1 ;
-(void)_editNavigationBarItemTapped:(id)arg1 ;
-(void)_cancelNavigationBarItemTapped:(id)arg1 ;
-(id)_deletePasswordActionTitle;
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)_beginEditing;
-(void)_cancelEditing;
-(void)handleContextMenuDeleteForIndexPath:(id)arg1 ;
-(void)searchPatternDidUpdate;
-(void)_updateToolbarItemsAnimated:(BOOL)arg1 ;
-(BOOL)_canAddPasswords;
-(void)_reloadPasswords;
-(void)_updateHeaderAndFooterViewsFloat;
-(id)passwordControllerForQuery:(id)arg1 queryBundleID:(id)arg2 authenticationRequirementsMet:(BOOL)arg3 ;
-(id)_sharablePasswordFromResourceDictionary:(id)arg1 ;
-(id)_savePasswordIfPossibleAndGetController:(id)arg1 ;
-(id)_passwordCellDataForUser:(id)arg1 highLevelDomain:(id)arg2 ;
-(id)_autoFillFeatureManager;
-(void)_deletePasswordsAtIndexPaths:(id)arg1 ;
-(void)_updateDeleteButton;
-(long long)_passwordAutoFillCellStyle;
-(id)_rightToolbarItem;
-(BOOL)_autoFillWhiteListExists;
-(long long)_indexOfFirstPasswordSection;
-(BOOL)_shouldShowSectionHeaders;
-(void)_didSelectAutoFillCellAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(id)_passwordCellDataForIndexPath:(id)arg1 ;
-(id)_autoFillCellForTableView:(id)arg1 ;
-(long long)_warningStyleForSecurityRecommendationsDrillInCell;
-(BOOL)_sectionWithIndexIsConfigurationSection:(long long)arg1 ;
-(void)_updateMatchingPasswords;
-(void)_updateContentUnavailableView;
-(void)setDelegate:(id<_SFEditablePasswordTableViewControllerDelegate>)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setToolbarItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_shouldShowAutoFillItem;
-(id)_switchAutoFillCellForTableView:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_drillInAutoFillCellForTableView:(id)arg1 ;
-(void)_autoFillSwitchValueChanged:(id)arg1 ;
-(BOOL)_passwordAutoFillIsEnabled;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPasswordAutoFillIsEnabled:(BOOL)arg1 ;
-(id)_indexPathForSavedPassword:(id)arg1 ;
-(long long)_securityRecommendationsSectionIndex;
-(void)addPasswordViewControllerDidFinish:(id)arg1 withSavedPassword:(id)arg2 ;
-(id)passwordWarningManagerForPasswordDetailViewController:(id)arg1 ;
-(id)passwordGeneratorForPasswordDetailViewController:(id)arg1 ;
-(WBSSavedPassword *)passwordToRemoveAfterCompletedUpgradeInDetailView;
-(void)setPasswordToRemoveAfterCompletedUpgradeInDetailView:(WBSSavedPassword *)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)dealloc;
@end

