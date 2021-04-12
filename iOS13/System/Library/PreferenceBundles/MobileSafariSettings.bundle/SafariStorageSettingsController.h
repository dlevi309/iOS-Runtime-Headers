/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <Preferences/PSEditableListController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@class UISearchController, NSString, UIBarButtonItem, PSSpecifier, NSArray, NSMutableDictionary, NSMutableArray;

@interface SafariStorageSettingsController : PSEditableListController <UISearchControllerDelegate, UISearchResultsUpdating> {

	UISearchController* _searchController;
	NSString* _searchPattern;
	BOOL _hasLoadedDomains;
	BOOL _isShowingAllDomains;
	UIBarButtonItem* _editToolbarItem;
	UIBarButtonItem* _doneToolbarItem;
	PSSpecifier* _totalUsageSpecifier;
	NSArray* _deleteButtonSpecifiers;
	NSMutableDictionary* _domainSpecifiers;
	NSMutableArray* _sortedDomains;
	BOOL _cancelDomainSpecifierUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)deleteAllData;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setEditable:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)_setContentInset:(double)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)specifiers;
-(void)_updateToolbarItems;
-(void)_showDeleteAllOriginsAlert;
-(void)_toggleEditing;
-(void)_createDomainSpecifiers;
-(id)_getSpecifierDiskUsage:(id)arg1 ;
-(void)_deleteOriginData:(id)arg1 ;
-(void)_addWebsiteDataRecord:(id)arg1 toDictionary:(id)arg2 ;
-(id)_totalUsageString;
-(id)_specifiersForDomainList;
-(void)_updateTotalUsageSpecifier;
-(void)_addDomainSpecifiers;
-(void)_addWebSecurityDomainsToDictionary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)showAllDomainSpecifiers;
-(id)_specifiersForLoadingSpinner;
-(id)_specifiersForSearchResults;
-(void)_deleteAllOrigins;
@end

