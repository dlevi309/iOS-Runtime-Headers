/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@class TIUserWordsManager, NSArray, UINavigationController, NSString;

@interface SearchUserWordsController : UITableViewController <UISearchResultsUpdating> {

	TIUserWordsManager* _dictionaryController;
	NSArray* _filteredListContent;
	NSArray* _noResults;
	UINavigationController* _parentNavigationController;

}

@property (nonatomic,retain) NSArray * filteredListContent;                                    //@synthesize filteredListContent=_filteredListContent - In the implementation block
@property (nonatomic,retain) NSArray * noResults;                                              //@synthesize noResults=_noResults - In the implementation block
@property (nonatomic,retain) UINavigationController * parentNavigationController;              //@synthesize parentNavigationController=_parentNavigationController - In the implementation block
@property (nonatomic,retain) TIUserWordsManager * dictionaryController;                        //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)filteredListContent;
-(void)setFilteredListContent:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)dealloc;
-(TIUserWordsManager *)dictionaryController;
-(void)setDictionaryController:(TIUserWordsManager *)arg1 ;
-(void)setParentNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)parentNavigationController;
-(NSArray *)noResults;
-(void)filterContentForSearchText:(id)arg1 ;
-(void)setNoResults:(NSArray *)arg1 ;
@end

