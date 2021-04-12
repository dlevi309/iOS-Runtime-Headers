/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>

@class NSString, UISearchController, NSArray;

@interface AXUISettingsSearchableBaseListController : AXUISettingsBaseListController <UISearchResultsUpdating, UISearchBarDelegate> {

	BOOL _needsSpecifierRefresh;
	NSString* _cachedSearchTextWhileDeactivating;
	UISearchController* _searchController;
	NSString* _searchText;
	NSArray* _allSpecifiers;

}

@property (nonatomic,retain) UISearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) NSString * searchText;                              //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSArray * allSpecifiers;                            //@synthesize allSpecifiers=_allSpecifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)specifiers;
-(void)_loadAllSpecifiersIfNeeded;
-(BOOL)_specifierIsGroupSpecifier:(id)arg1 ;
-(BOOL)shouldShowSpecifier:(id)arg1 withSearchText:(id)arg2 ;
-(id)makeSpecifiers;
-(void)deactivateAndPersistSearchText;
-(void)setNeedsSpecifierRefresh;
-(NSArray *)allSpecifiers;
-(void)setAllSpecifiers:(NSArray *)arg1 ;
@end

