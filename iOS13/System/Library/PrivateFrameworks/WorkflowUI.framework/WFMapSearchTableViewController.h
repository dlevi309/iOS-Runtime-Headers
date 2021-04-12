/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol WFMapSearchTableViewControllerDelegate;
@class NSArray, NSString;

@interface WFMapSearchTableViewController : UITableViewController <UISearchResultsUpdating> {

	id<WFMapSearchTableViewControllerDelegate> _delegate;
	NSArray* _mapItems;

}

@property (nonatomic,retain) NSArray * mapItems;                                                      //@synthesize mapItems=_mapItems - In the implementation block
@property (assign,nonatomic,__weak) id<WFMapSearchTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFMapSearchTableViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFMapSearchTableViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(NSArray *)mapItems;
-(void)setMapItems:(NSArray *)arg1 ;
@end

