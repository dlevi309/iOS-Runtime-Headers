/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(id)specifiers;
-(UISearchController *)searchController;
-(NSString *)searchText;
-(void)viewDidLoad;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)_loadAllSpecifiersIfNeeded;
-(BOOL)_specifierIsGroupSpecifier:(id)arg1 ;
-(BOOL)shouldShowSpecifier:(id)arg1 withSearchText:(id)arg2 ;
-(id)makeSpecifiers;
-(void)deactivateAndPersistSearchText;
-(void)setNeedsSpecifierRefresh;
-(NSArray *)allSpecifiers;
-(void)setAllSpecifiers:(NSArray *)arg1 ;
@end

