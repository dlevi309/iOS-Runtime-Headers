/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@class NSMutableOrderedSet, NSArray, NSOrderedSet, NSString;

@interface STAllowanceItemSearchResultsController : UITableViewController <UISearchResultsUpdating> {

	BOOL _hasNewSelection;
	NSMutableOrderedSet* _selectedBundleIdentifiers;
	NSMutableOrderedSet* _selectedWebDomains;
	NSArray* _allowanceItemSpecifiers;
	NSArray* _filteredAllowanceItemSpecifiers;
	NSOrderedSet* _initialWebDomains;
	NSOrderedSet* _initalBundleIdentifiers;

}

@property (copy) NSArray * filteredAllowanceItemSpecifiers;                      //@synthesize filteredAllowanceItemSpecifiers=_filteredAllowanceItemSpecifiers - In the implementation block
@property (assign) BOOL hasNewSelection;                                         //@synthesize hasNewSelection=_hasNewSelection - In the implementation block
@property (copy) NSOrderedSet * initialWebDomains;                               //@synthesize initialWebDomains=_initialWebDomains - In the implementation block
@property (copy) NSOrderedSet * initalBundleIdentifiers;                         //@synthesize initalBundleIdentifiers=_initalBundleIdentifiers - In the implementation block
@property (retain) NSMutableOrderedSet * selectedBundleIdentifiers;              //@synthesize selectedBundleIdentifiers=_selectedBundleIdentifiers - In the implementation block
@property (retain) NSMutableOrderedSet * selectedWebDomains;                     //@synthesize selectedWebDomains=_selectedWebDomains - In the implementation block
@property (copy) NSArray * allowanceItemSpecifiers;                              //@synthesize allowanceItemSpecifiers=_allowanceItemSpecifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSMutableOrderedSet *)selectedBundleIdentifiers;
-(void)setSelectedBundleIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)selectedWebDomains;
-(void)setInitialWebDomains:(NSOrderedSet *)arg1 ;
-(void)setInitalBundleIdentifiers:(NSOrderedSet *)arg1 ;
-(void)setHasNewSelection:(BOOL)arg1 ;
-(NSArray *)filteredAllowanceItemSpecifiers;
-(NSOrderedSet *)initialWebDomains;
-(NSOrderedSet *)initalBundleIdentifiers;
-(NSArray *)allowanceItemSpecifiers;
-(void)setFilteredAllowanceItemSpecifiers:(NSArray *)arg1 ;
-(void)setSelectedWebDomains:(NSMutableOrderedSet *)arg1 ;
-(BOOL)hasNewSelection;
-(void)setAllowanceItemSpecifiers:(NSArray *)arg1 ;
@end

