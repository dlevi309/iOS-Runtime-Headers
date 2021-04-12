/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol WFTagPickerViewControllerDelegate;
@class NSArray, NSMutableOrderedSet, UISearchController, NSString;

@interface WFTagPickerViewController : UITableViewController <UISearchResultsUpdating> {

	id<WFTagPickerViewControllerDelegate> _delegate;
	NSArray* _tags;
	NSMutableOrderedSet* _selectedTags;
	UISearchController* _searchController;

}

@property (nonatomic,readonly) NSArray * tags;                                                   //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * selectedTags;                               //@synthesize selectedTags=_selectedTags - In the implementation block
@property (nonatomic,readonly) UISearchController * searchController;                            //@synthesize searchController=_searchController - In the implementation block
@property (assign,nonatomic,__weak) id<WFTagPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(NSArray *)tags;
-(UISearchController *)searchController;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WFTagPickerViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFTagPickerViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(id)currentResults;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)cancel;
-(void)dismiss;
-(id)initWithTitle:(id)arg1 tags:(id)arg2 ;
-(NSMutableOrderedSet *)selectedTags;
@end

