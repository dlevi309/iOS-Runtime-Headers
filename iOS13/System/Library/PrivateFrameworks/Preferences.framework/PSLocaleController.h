/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class UITableView, UIView, UISearchBar, PSLocaleSelector, NSArray, PSRegion, NSString;

@interface PSLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	UITableView* _tableView;
	UIView* _contentView;
	UISearchBar* _searchBar;
	BOOL _searchMode;
	BOOL _hideKeyboardInSearchMode;
	PSLocaleSelector* _localeSelector;
	NSArray* _filteredListContent;
	NSArray* _sections;
	NSArray* _regionsList;
	PSRegion* _currentRegion;

}

@property (nonatomic,retain) NSArray * filteredListContent;                  //@synthesize filteredListContent=_filteredListContent - In the implementation block
@property (nonatomic,retain) NSArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * regionsList;                          //@synthesize regionsList=_regionsList - In the implementation block
@property (nonatomic,retain) PSRegion * currentRegion;                       //@synthesize currentRegion=_currentRegion - In the implementation block
@property (nonatomic,retain) PSLocaleSelector * localeSelector;              //@synthesize localeSelector=_localeSelector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(PSRegion *)currentRegion;
-(void)setCurrentRegion:(PSRegion *)arg1 ;
-(id)_mainContentView;
-(PSLocaleSelector *)localeSelector;
-(void)setLocaleSelector:(PSLocaleSelector *)arg1 ;
-(NSArray *)regionsList;
-(void)reloadDataAndScrollToCheckedRegionAnimated:(BOOL)arg1 ;
-(void)setRegionsList:(NSArray *)arg1 ;
-(void)loadRegions;
-(void)reloadSections;
-(NSArray *)filteredListContent;
-(void)updateChecked:(id)arg1 ;
-(void)setFilteredListContent:(NSArray *)arg1 ;
-(id)filteredRegionsForRegionList:(id)arg1 searchString:(id)arg2 ;
@end

