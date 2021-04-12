/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFPasswordTableViewController.h>
#import <libobjc.A.dylib/SFAddPasswordViewControllerDelegate.h>
#import <libobjc.A.dylib/SFPasswordDetailViewControllerDelegate.h>

@class NSMutableArray, NSArray, UIBarButtonItem, WBSAutoFillQuirksManager, WBSSavedPasswordStore, WBSSavedPasswordAuditor, _SFSiteMetadataManager, SFSharablePassword, WBSPasswordEvaluator, NSString;

@interface _SFEditablePasswordTableViewController : _SFPasswordTableViewController <SFAddPasswordViewControllerDelegate, SFPasswordDetailViewControllerDelegate> {

	NSMutableArray* _cellDataBySection;
	NSArray* _allPasswordCellData;
	NSArray* _cellDataMatchingSearchPattern;
	UIBarButtonItem* _addBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	UIBarButtonItem* _deleteBarButtonItem;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;
	WBSSavedPasswordStore* _passwordStore;
	WBSSavedPasswordAuditor* _savedPasswordAuditor;
	unsigned long long _persona;
	_SFSiteMetadataManager* _siteMetadataManager;
	SFSharablePassword* _receivedSharablePasswordRequiringPromptBeforeSaving;
	BOOL _hasBeenAuthenticated;
	BOOL _hasEverShownSectionHeaders;
	WBSPasswordEvaluator* _passwordEvaluator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)navigationItem;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)handleContextMenuDeleteForIndexPath:(id)arg1 ;
-(void)searchPatternDidUpdate;
-(void)_reloadPasswordsAndTableViewData;
-(id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 ;
-(void)_addBarButtonItemTapped:(id)arg1 ;
-(void)_editBarButtonItemTapped:(id)arg1 ;
-(void)_cancelBarButtonItemTapped:(id)arg1 ;
-(id)_deletePasswordActionTitle;
-(void)_deleteBarButtonItemTapped:(id)arg1 ;
-(void)_reloadPasswords;
-(id)passwordControllerForQuery:(id)arg1 queryBundleID:(id)arg2 authenticationRequirementsMet:(BOOL)arg3 ;
-(id)_sharablePasswordFromResourceDictionary:(id)arg1 ;
-(id)_savePasswordIfPossibleAndGetController:(id)arg1 ;
-(id)_passwordCellDataForUser:(id)arg1 highLevelDomain:(id)arg2 ;
-(void)showConflictAlertForSharablePasswordIfNecessary;
-(void)_deletePasswordsAtIndexPaths:(id)arg1 ;
-(void)_updateDeleteButton;
-(BOOL)_shouldShowSectionHeaders;
-(id)_passwordCellDataForIndexPath:(id)arg1 ;
-(void)_updateMatchingPasswords;
-(void)addPasswordViewControllerDidFinish:(id)arg1 withSavedPassword:(id)arg2 ;
-(id)passwordAuditorForPasswordDetailViewController:(id)arg1 ;
-(id)passwordEvaluatorForPasswordDetailViewController:(id)arg1 ;
-(id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 persona:(unsigned long long)arg3 ;
-(id)additionalViewControllersToPushHandlingURLResourceDictionary:(id)arg1 didAuthenticate:(BOOL)arg2 ;
-(void)processSharablePasswordWithResourceDictionary:(id)arg1 ;
-(void)updateUserAuthenticationState:(BOOL)arg1 ;
@end

