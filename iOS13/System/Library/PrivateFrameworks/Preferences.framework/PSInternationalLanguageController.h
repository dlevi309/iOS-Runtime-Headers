/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class UISearchBar, UITableView, UIView, PSLanguageSelector, PSLocaleSelector, PSLanguage, NSArray, NSString;

@interface PSInternationalLanguageController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {

	UISearchBar* _searchBar;
	UITableView* _tableView;
	UIView* _contentView;
	BOOL _searchIsActive;
	PSLanguageSelector* _languageSelector;
	PSLocaleSelector* _localeSelector;
	PSLanguage* _checkedLanguage;
	NSArray* _deviceLanguages;
	NSArray* _filteredDeviceLanguages;
	NSString* _savedSearchTerm;

}

@property (nonatomic,retain) PSLanguage * checkedLanguage;                       //@synthesize checkedLanguage=_checkedLanguage - In the implementation block
@property (nonatomic,retain) NSArray * deviceLanguages;                          //@synthesize deviceLanguages=_deviceLanguages - In the implementation block
@property (nonatomic,retain) NSArray * filteredDeviceLanguages;                  //@synthesize filteredDeviceLanguages=_filteredDeviceLanguages - In the implementation block
@property (nonatomic,retain) NSString * savedSearchTerm;                         //@synthesize savedSearchTerm=_savedSearchTerm - In the implementation block
@property (assign,nonatomic) BOOL searchIsActive;                                //@synthesize searchIsActive=_searchIsActive - In the implementation block
@property (nonatomic,retain) PSLanguageSelector * languageSelector;              //@synthesize languageSelector=_languageSelector - In the implementation block
@property (nonatomic,retain) PSLocaleSelector * localeSelector;                  //@synthesize localeSelector=_localeSelector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)capitalizeLanguageNames;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)loadData;
-(void)cancelButtonTapped;
-(void)updateNavigationItem;
-(void)generateLanguageCells;
-(void)setFilteredDeviceLanguages:(NSArray *)arg1 ;
-(id)_mainContentView;
-(PSLanguageSelector *)languageSelector;
-(PSLocaleSelector *)localeSelector;
-(void)setCheckedLanguage:(PSLanguage *)arg1 ;
-(void)setDeviceLanguages:(NSArray *)arg1 ;
-(NSArray *)filteredDeviceLanguages;
-(NSArray *)deviceLanguages;
-(PSLanguage *)checkedLanguage;
-(void)doneButtonTapped;
-(id)filteredLanguagesForLanguageList:(id)arg1 searchString:(id)arg2 ;
-(void)reloadDataAndScrollToCheckedLanguageWithAnimation:(BOOL)arg1 ;
-(void)setLanguageSelector:(PSLanguageSelector *)arg1 ;
-(void)setLocaleSelector:(PSLocaleSelector *)arg1 ;
-(NSString *)savedSearchTerm;
-(void)setSavedSearchTerm:(NSString *)arg1 ;
-(BOOL)searchIsActive;
-(void)setSearchIsActive:(BOOL)arg1 ;
@end

