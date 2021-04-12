/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
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
-(id<WFTagPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFTagPickerViewControllerDelegate>)arg1 ;
-(void)cancel;
-(NSArray *)tags;
-(void)dismiss;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(UISearchController *)searchController;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)currentResults;
-(id)initWithTitle:(id)arg1 tags:(id)arg2 ;
-(NSMutableOrderedSet *)selectedTags;
@end

