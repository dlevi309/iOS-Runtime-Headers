/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)loadData;
-(void)cancelButtonTapped;
-(void)updateNavigationItem;
-(void)generateLanguageCells;
-(PSLocaleSelector *)localeSelector;
-(void)setFilteredDeviceLanguages:(NSArray *)arg1 ;
-(id)_mainContentView;
-(PSLanguageSelector *)languageSelector;
-(NSArray *)deviceLanguages;
-(void)setCheckedLanguage:(PSLanguage *)arg1 ;
-(void)setDeviceLanguages:(NSArray *)arg1 ;
-(NSArray *)filteredDeviceLanguages;
-(PSLanguage *)checkedLanguage;
-(void)doneButtonTapped;
-(NSString *)savedSearchTerm;
-(void)setSavedSearchTerm:(NSString *)arg1 ;
-(id)filteredLanguagesForLanguageList:(id)arg1 searchString:(id)arg2 ;
-(void)setLocaleSelector:(PSLocaleSelector *)arg1 ;
-(BOOL)searchIsActive;
-(void)reloadDataAndScrollToCheckedLanguageWithAnimation:(BOOL)arg1 ;
-(void)setLanguageSelector:(PSLanguageSelector *)arg1 ;
-(void)setSearchIsActive:(BOOL)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

