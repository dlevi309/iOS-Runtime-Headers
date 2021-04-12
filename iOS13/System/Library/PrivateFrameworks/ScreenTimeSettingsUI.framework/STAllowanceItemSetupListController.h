/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>
#import <UIKit/UISearchControllerDelegate.h>

@class NSMutableOrderedSet, NSArray, NSMutableDictionary, STAllowanceItemSearchResultsController, NSString;

@interface STAllowanceItemSetupListController : PSListController <UISearchControllerDelegate> {

	BOOL _allAppsAndCategoriesSelected;
	NSMutableOrderedSet* _selectedBundleIdentifiers;
	NSMutableOrderedSet* _selectedWebDomains;
	NSMutableOrderedSet* _selectedCategoryIdentifiers;
	NSArray* _categorySpecifiers;
	NSMutableDictionary* _applicationAndWebDomainSpecifiersByCategoryIdentifier;
	STAllowanceItemSearchResultsController* _searchResultsController;

}

@property (assign) BOOL allAppsAndCategoriesSelected;                                                                    //@synthesize allAppsAndCategoriesSelected=_allAppsAndCategoriesSelected - In the implementation block
@property (readonly) NSMutableOrderedSet * selectedBundleIdentifiers;                                                    //@synthesize selectedBundleIdentifiers=_selectedBundleIdentifiers - In the implementation block
@property (readonly) NSMutableOrderedSet * selectedWebDomains;                                                           //@synthesize selectedWebDomains=_selectedWebDomains - In the implementation block
@property (readonly) NSMutableOrderedSet * selectedCategoryIdentifiers;                                                  //@synthesize selectedCategoryIdentifiers=_selectedCategoryIdentifiers - In the implementation block
@property (copy) NSArray * categorySpecifiers;                                                                           //@synthesize categorySpecifiers=_categorySpecifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * applicationAndWebDomainSpecifiersByCategoryIdentifier;              //@synthesize applicationAndWebDomainSpecifiersByCategoryIdentifier=_applicationAndWebDomainSpecifiersByCategoryIdentifier - In the implementation block
@property (retain) STAllowanceItemSearchResultsController * searchResultsController;                                     //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willResignActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(STAllowanceItemSearchResultsController *)searchResultsController;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setSearchResultsController:(STAllowanceItemSearchResultsController *)arg1 ;
-(id)_categoryDetailText:(id)arg1 ;
-(NSMutableOrderedSet *)selectedWebDomains;
-(NSMutableOrderedSet *)selectedBundleIdentifiers;
-(void)_didPressCancelButton:(id)arg1 ;
-(void)_didPressDoneButton:(id)arg1 ;
-(NSMutableOrderedSet *)selectedCategoryIdentifiers;
-(void)_selectCellsForSelectedIdentifiers:(id)arg1 ;
-(NSArray *)categorySpecifiers;
-(NSMutableDictionary *)applicationAndWebDomainSpecifiersByCategoryIdentifier;
-(void)_hasSelectionDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(void)setAllAppsAndCategoriesSelected:(BOOL)arg1 ;
-(void)_updateApplicationSpecifiersWithBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2 shouldInsertSpecifier:(BOOL)arg3 ;
-(id)_webDomainSpecifierForDomain:(id)arg1 ;
-(void)_addWebsiteButtonPressed:(id)arg1 ;
-(id)_categorySpecifierForIdentifier:(id)arg1 ;
-(void)setCategorySpecifiers:(NSArray *)arg1 ;
-(id)_applicationSpecifierForBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2 ;
-(BOOL)allAppsAndCategoriesSelected;
-(void)_addCustomWebDomain:(id)arg1 specifier:(id)arg2 ;
-(void)_cleanUpRetainCycles;
@end

