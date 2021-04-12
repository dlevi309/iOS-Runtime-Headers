/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>

@class UITableView, UILabel, NSArray, UIImageView, UIView, NSString, SearchUserWordsController, UIToolbar, TIUserWordsManager, UILocalizedIndexedCollation, UISearchController;

@interface ListUserWordsController : PSViewController <UINavigationControllerDelegate, UISearchControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate> {

	UITableView* _tableView;
	UILabel* _noWordsLabel;
	NSArray* _propertiesToShow;
	UILabel* _noContentLabel;
	UIImageView* _noContentImage;
	UIView* _contentView;
	NSArray* filteredListContent;
	NSString* savedSearchTerm;
	BOOL searchIsActive;
	SearchUserWordsController* _searchResultsController;
	BOOL _restoreEditing;
	BOOL _manualEditing;
	id _observerToken;
	UIToolbar* _toolbar;
	TIUserWordsManager* _dictionaryController;
	UILocalizedIndexedCollation* _collation;
	NSArray* _sections;
	NSString* currentShortcut;
	UISearchController* _searchController;
	unsigned long long _searchNavControllerChanges;

}

@property (nonatomic,retain) UITableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) TIUserWordsManager * dictionaryController;                  //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (nonatomic,retain) UILocalizedIndexedCollation * collation;                    //@synthesize collation=_collation - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                         //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * savedSearchTerm; 
@property (assign,nonatomic) BOOL searchIsActive; 
@property (nonatomic,retain) UISearchController * searchController;                      //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic) unsigned long long searchNavControllerChanges;              //@synthesize searchNavControllerChanges=_searchNavControllerChanges - In the implementation block
@property (nonatomic,retain) NSString * currentShortcut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)_hideSearchBar;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(id)_mainContentView;
-(NSString *)savedSearchTerm;
-(void)setSavedSearchTerm:(NSString *)arg1 ;
-(BOOL)searchIsActive;
-(void)setSearchIsActive:(BOOL)arg1 ;
-(void)reloadSections;
-(UILocalizedIndexedCollation *)collation;
-(void)setCollation:(UILocalizedIndexedCollation *)arg1 ;
-(id)mainTableView;
-(void)addUserWord;
-(TIUserWordsManager *)dictionaryController;
-(NSString *)currentShortcut;
-(void)setDictionaryController:(TIUserWordsManager *)arg1 ;
-(void)userWordDidUpdate:(id)arg1 ;
-(BOOL)_shouldHideIndex;
-(void)setCurrentShortcut:(NSString *)arg1 ;
-(unsigned long long)searchNavControllerChanges;
-(void)_showSearchBar;
-(void)setSearchNavControllerChanges:(unsigned long long)arg1 ;
-(void)inlineUserDictionaryDoneEditing;
@end

